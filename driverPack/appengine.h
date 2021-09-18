#ifndef APPENGINE_H
#define APPENGINE_H

#include <QObject>

class AppEngine : public QObject
{
    Q_OBJECT
public:
    explicit AppEngine(QObject *parent = nullptr);

signals:
    void toAllDriversFormSignal();
    void toCardDriverFormSignal();

public slots:
    void toAllDriversFormSlot();
    void toCardDriverFormSlot();
};

#endif // APPENGINE_H
