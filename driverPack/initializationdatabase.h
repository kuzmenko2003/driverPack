#ifndef INITIALIZATIONDATABASE_H
#define INITIALIZATIONDATABASE_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>

class initializationDatabase : public QObject
{
    Q_OBJECT
public:
    static initializationDatabase &instance(){
        static initializationDatabase initialization;
        return initialization;
    }

    QSqlDatabase getUserDatabase();

private:
    explicit initializationDatabase(QObject *parent = nullptr);
    initializationDatabase(initializationDatabase const&);

    QSqlDatabase usersDatabase;

    void initializationUserDatabase();

};

#endif // INITIALIZATIONDATABASE_H
