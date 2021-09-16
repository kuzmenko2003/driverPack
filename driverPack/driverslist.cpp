#include "driverslist.h"

DriversList::DriversList(QObject *parent) : QObject(parent)
{
    for(int i =0;i<100;i++)
        mItems.append({1,"Some@Name","SomeMiddleName","","","","","","","","","",""});
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
