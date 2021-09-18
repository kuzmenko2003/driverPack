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
    usersDatabase.setHostName("127.0.0.1");
    usersDatabase.setDatabaseName("driverpack");
    usersDatabase.setUserName("mysql");
    usersDatabase.setPassword("mysql");
    usersDatabase.setPort(3306);
}
