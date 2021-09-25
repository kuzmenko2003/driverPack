#include "initializationdatabase.h"

initializationDatabase::initializationDatabase(QObject *parent) : QObject(parent)
{
    initializationUserDatabase();
}

QSqlDatabase initializationDatabase::getUserDatabase()
{
    return usersDatabase;
}

void initializationDatabase::initializationUserDatabase()
{
    usersDatabase = QSqlDatabase::addDatabase("QMYSQL");
    usersDatabase.setHostName("localhost");
    usersDatabase.setPort(3307);
    usersDatabase.setDatabaseName("driverpack");
    usersDatabase.setUserName("root");
    usersDatabase.setPassword("root");


    //if use mamp on mac os
    usersDatabase.setConnectOptions("UNIX_SOCKET=/Applications/MAMP/tmp/mysql/mysql.sock");
}
