#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QDebug>

#include "autorization.h"

#include "driversmodel.h"
#include "driverslist.h"

#include "appengine.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    AppEngine appEngine;
    engine.rootContext()->setContextProperty(QStringLiteral("appEngine"), &appEngine);

    qmlRegisterType<DriversModel>("Driver",1,0,"DriverModel");
    qmlRegisterUncreatableType<DriversList>("Driver",1,0,"DriverList",
                                            QStringLiteral("not"));


    DriversList driverList;
    engine.rootContext()->setContextProperty(QStringLiteral("driverList"), &driverList);


    autorization autorizaition;
    engine.rootContext()->setContextProperty(QStringLiteral("autorization"),&autorizaition);

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);
    return app.exec();
}
