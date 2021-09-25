#ifndef APPENGINE_H
#define APPENGINE_H

#include <QObject>

class AppEngine : public QObject
{
    Q_OBJECT
public:
    static AppEngine &appEngineOn(){
        static AppEngine initialization;
        return initialization;
    }

signals:
    void toAllDriversFormSignal();
    void toAllDriversFormAfterAutorizationSignal();
    void toCardDriverFormSignal();

    void toRootModeSignal();

public slots:
    void toAllDriversFormSlot();
    void toAllDriversFormAfterAutorizationSlot();
    void toCardDriverFormSlot();

    void toRootModeSlot();

private:
    explicit AppEngine(QObject *parent = nullptr);
    AppEngine(AppEngine const&);
};

#endif // APPENGINE_H
