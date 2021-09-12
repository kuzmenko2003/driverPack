#ifndef AUTORIZATION_H
#define AUTORIZATION_H

#include <QObject>

class autorization : public QObject
{
    Q_OBJECT
public:
    autorization();
    ~autorization();

    void checkTimerAtTimer();

    void setTimerToUnblockAutorization(int time);
    void writeTimerTimeToFile(QString time);

    void saveResultTimerAtCloseApplication(QString time);

public slots:
    void updateTimerToReturnAutorization();

    void toAutorization(QString login,QString passwd);
signals:
    void sentMessage(QString message);
};

#endif // AUTORIZATION_H
