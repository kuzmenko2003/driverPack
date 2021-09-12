#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QTimer>
#include <QtCore/QCoreApplication>
#include <QFile>

#include <QDate>
#include <QTime>
#include <QDateTime>

#include "autorization.h"

QSqlDatabase autorization_database;
QTimer *timerAutorization;
int attempts;
bool isCanAutorization;

autorization::autorization()
{
    checkTimerAtTimer();

    /*
        connect to the database that contains users data
    */
    autorization_database = QSqlDatabase::addDatabase("QMYSQL");
    autorization_database.setHostName("127.0.0.1");
    autorization_database.setDatabaseName("driverpack");
    autorization_database.setUserName("mysql");
    autorization_database.setPassword("mysql");
    autorization_database.setPort(3306);

    /*
        set the defaul values
    */
}

autorization::~autorization()
{
    /*
        if user close the applications block save
    */
    if(!isCanAutorization)
        saveResultTimerAtCloseApplication(QString::number(timerAutorization->remainingTime()));
}

/*
    if there is a file then the value is read from it and passed to the timer
*/
void autorization::checkTimerAtTimer()
{
    QFile file(QCoreApplication::applicationDirPath()+"/block.txt");
    QByteArray data;
    if(file.open(QIODevice::ReadOnly)){
        data = file.readAll();
        file.close();

        QString dataStr = QString(data);
        dataStr.remove(" ");
        isCanAutorization = dataStr.isEmpty()?true:false;

        if(!dataStr.isEmpty()){
            setTimerToUnblockAutorization(dataStr.toInt()*1000);
            attempts = isCanAutorization?0:3;
        }
    }else {
        isCanAutorization = true;
    }
}

/*
    it is triggered when the user can try to log in to the account again after failed attempts
*/
void autorization::updateTimerToReturnAutorization()
{
    timerAutorization->stop();
    attempts = 0;
    isCanAutorization = true;
    sentMessage("введите логин и пароль");
    QFile file (QCoreApplication::applicationDirPath()+"/block.txt");
    if(file.open(QIODevice::WriteOnly)){
        file.remove();
        file.close();
    }
}

/*
    a timer is cerated to block the input
*/
void autorization::setTimerToUnblockAutorization(int time)
{
    timerAutorization = new QTimer(this);
    timerAutorization->start(time);
    isCanAutorization = false;
    connect(timerAutorization,SIGNAL(timeout()),this,SLOT(updateTimerToReturnAutorization()));
}

/*
    write value timer to a file
*/
void autorization::writeTimerTimeToFile(QString time)
{
    QFile file (QCoreApplication::applicationDirPath()+"/block.txt");
    if(!file.open(QIODevice::WriteOnly))
        return;
    file.write(time.toLocal8Bit());
    file.close();
}

/*
    save value timer when application was closing
*/
void autorization::saveResultTimerAtCloseApplication(QString time)
{
    QString remainingTime = time;

    if(remainingTime.count() == 5)
        remainingTime.remove(2,3);
    else
        remainingTime.remove(1,3);
    writeTimerTimeToFile(remainingTime);
}

/*
    it is triggered when user can try to log in to the account
*/
void autorization::toAutorization(QString login, QString passwd)
{
    autorization_database.open();
    QSqlQuery query;
    query.exec("SELECT login,password FROM users");
    while (query.next()) {
        if(query.value(0).toString() == login && query.value(1).toString() == passwd && isCanAutorization){
            /*
                user log in to acccount
            */
            qDebug()<<"come in ";
        }else{
            if(attempts>=3){
                /*
                    user losed all attempts
                    if user has spent attempts now the timer starts for a minute
                    and if the timer is already started the user is shows how long he has to wait
                */
                if(isCanAutorization){
                    setTimerToUnblockAutorization(1000*60);
                    sentMessage("вы ввели пароль неправильно 3 раза , подождите минуту");
                }else {
                    QString remainingTime = QString::number(timerAutorization->remainingTime());

                    if(remainingTime.count() == 5)
                        remainingTime.remove(2,3);
                    else
                        remainingTime.remove(1,3);

                    sentMessage("вы ввели пароль неправильно 3 раза , подождите "+remainingTime+" сек");
                }
            }else{
                /*
                    user enter invalid login or password
                */
                qDebug()<<"мимо";
                attempts++;
                sentMessage("логин или пароль не правельный");
            }
        }
    }
    autorization_database.close();
}
