#include "driversmodel.h"
#include "driverslist.h"

DriversModel::DriversModel(QObject *parent)
    : QAbstractListModel(parent)
    , mList(nullptr)
{
}

int DriversModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    return mList->items().size();
}

QVariant DriversModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    const DriverItem item = mList->items().at(index.row());
    switch (role) {
    case IdRole:
        return QVariant(item.id);
    case NameRole:
        return QVariant(item.name);
    case MiddleNameRole:
        return QVariant(item.middleName);
    case PassportSerialRole:
        return QVariant(item.passportSerial);
    case PostcodeRole:
        return QVariant(item.postcode);
    case AddressRole:
        return QVariant(item.address);
    case AddressLifeRole:
        return QVariant(item.addressLife);
    case CompanyRole:
        return QVariant(item.company);
    case JobnameRole:
        return QVariant(item.jobname);
    case PhoneRole:
        return QVariant(item.phone);
    case EmailRole:
        return QVariant(item.email);
    case PhotoRole:
        return QVariant(item.photo);
    case DescriptionRole:
        return QVariant(item.description);
    }

    return QVariant();
}

bool DriversModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if(!mList)
        return false;
    DriverItem item = mList->items().at(index.row());
    switch (role) {
    case IdRole:
        item.id = value.toInt();
        break;
    case NameRole:
        item.name = value.toString();
        break;
    case MiddleNameRole:
        item.middleName = value.toString();
        break;
    case PassportSerialRole:
        item.passportSerial = value.toString();
        break;
    case PostcodeRole:
        item.postcode = value.toString();
        break;
    case AddressRole:
        item.address = value.toString();
        break;
    case AddressLifeRole:
        item.addressLife = value.toString();
        break;
    case CompanyRole:
        item.company = value.toString();
        break;
    case JobnameRole:
        item.jobname = value.toString();
        break;
    case PhoneRole:
        item.phone = value.toString();
        break;
    case EmailRole:
        item.email = value.toString();
        break;
    case PhotoRole:
        item.photo = value.toString();
        break;
    case DescriptionRole:
        item.description = value.toString();
        break;
    }

    if (mList->setItemAt(index.row(), item)) {
        emit dataChanged(index, index, QVector<int>() << role);
        return true;
    }

    return false;
}

Qt::ItemFlags DriversModel::flags(const QModelIndex &index) const
{
    if(!index.isValid())
        return Qt::NoItemFlags;
    return Qt::ItemIsEditable;
}

QHash<int, QByteArray> DriversModel::roleNames() const
{
    QHash<int,QByteArray> names;
    names[IdRole] = "id";
    names[NameRole] = "name";
    names[MiddleNameRole] = "middleName";
    names[PassportSerialRole] = "passportSerial";
    names[PostcodeRole] = "postCode";
    names[AddressRole] = "address";
    names[AddressLifeRole] = "addressLife";
    names[CompanyRole] = "company";
    names[JobnameRole] = "jobname";
    names[PhoneRole] = "phone";
    names[EmailRole] = "email";
    names[PhotoRole] = "photo";
    names[DescriptionRole] = "description";
    return names;
}

DriversList *DriversModel::list() const
{
    return mList;
}

void DriversModel::setList(DriversList *list)
{
    if(mList)
        mList->disconnect(this);

    mList = list;

    if (mList) {
        connect(mList, &DriversList::changeValue, this, [=]() {
            emit layoutChanged();
        });
    }
    endResetModel();
}
