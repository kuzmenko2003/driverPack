#ifndef DRIVERSMODEL_H
#define DRIVERSMODEL_H

#include <QAbstractListModel>

class DriversList;

class DriversModel : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(DriversList *list READ list WRITE setList)

public:
    explicit DriversModel(QObject *parent = nullptr);

    enum{
        IdRole = Qt::UserRole,
        NameRole,
        MiddleNameRole,
        PassportSerialRole,
        PostcodeRole,
        AddressRole,
        AddressLifeRole,
        CompanyRole,
        JobnameRole,
        PhoneRole,
        EmailRole,
        PhotoRole,
        DescriptionRole,
    };

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    bool setData(const QModelIndex &index, const QVariant &value,int role = Qt::EditRole) override;

    Qt::ItemFlags flags(const QModelIndex& index) const override;

    virtual QHash<int, QByteArray> roleNames() const override;


    DriversList *list() const;
    void setList(DriversList *list);

private:
    DriversList *mList;

};

#endif // DRIVERSMODEL_H
