#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>

#include "driverslist.h"
#include "initializationdatabase.h"

QSqlDatabase usersDb;

DriversList::DriversList(QObject *parent) : QObject(parent)
{
    usersDb = initializationDatabase::instance().getUserDatabase();
    fillUsersList();
}

QVector<DriverItem> DriversList::items() const
{
    return mItems;
}

bool DriversList::setItemAt(int index, const DriverItem &item)
{
    if (index < 0 || index >= mItems.size())
           return false;

       const DriverItem &oldItem = mItems.at(index);
       if (item.id == oldItem.id
               && item.middleName == oldItem.middleName
               && item.passportSerial == oldItem.passportSerial
               && item.postcode == oldItem.postcode
               && item.address == oldItem.address
               && item.addressLife == oldItem.addressLife
               && item.company == oldItem.company
               && item.jobname == oldItem.jobname
               && item.phone == oldItem.phone
               && item.email == oldItem.email
               && item.photo == oldItem.photo
               && item.description == oldItem.description)
           return false;

       mItems[index] = item;
       return true;
}

void DriversList::fillUsersList()
{
    usersDb.open();
    QSqlQuery query;
    query.exec("SELECT id,name,middlename,`passport serial`,`passport number`,postcode,"
               "address,`address life`,company,jobname,phone,email,photo,description FROM drivers");
    while (query.next()) {
        DriverItem item;
        item.id = query.value("id").toInt();
        item.name = query.value("name").toString();
        item.middleName = query.value("middlename").toString();
        item.passportSerial = query.value("passport serial").toString();
        item.passportNumber = query.value("passport number").toString();
        item.postcode = query.value("postcode").toString();
        item.address = query.value("address").toString();
        item.addressLife = query.value("address life").toString();
        item.company= query.value("company").toString();
        item.jobname = query.value("jobname").toString();
        item.phone = query.value("phone").toString();
        item.email = query.value("email").toString();
        item.photo = "http://driverpack/photo/"+query.value("photo").toString();
        item.description = query.value("description").toString();
        mItems.append(item);
    }
    changeValue();
    usersDb.close();
}
