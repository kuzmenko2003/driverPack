#ifndef DRIVERSLIST_H
#define DRIVERSLIST_H

#include <QObject>
#include <QString>
#include <QVector>

struct DriverItem{
    int id;
    QString name;
    QString middleName;
    QString passportSerial;
    QString passportNumber;
    QString postcode;
    QString address;
    QString addressLife;
    QString company;
    QString jobname;
    QString phone;
    QString email;
    QString photo;
    QString description;
};

class DriversList : public QObject
{
    Q_OBJECT
public:
    static DriversList &instanse(){
        static DriversList initialization;
        return initialization;
    }

    QVector<DriverItem> items() const;
    bool setItemAt(int index, const DriverItem &item);

signals:
    void changeValue();

    void getDetails(int _idDriver,QString _name,QString _middleName,QString _passportSerial,QString _passportNumber,
                    QString _postcode, QString _address,QString _addressLife,QString _company,
                    QString _jobname,QString _phone, QString _email, QString _photo,QString _description);
    void setProfileImageSignal(QString photos,int countPhotos);

public slots:
    void moreDetails(int idDriver);
    void saveDataUser(int _idDriver,QString _name,QString _middleName,QString _passportSerial,QString _passportNumber,
                      QString _postcode, QString _address,QString _addressLife,QString _company,
                      QString _jobname,QString _phone, QString _email, QString _photo,QString _description);
    void setProfileImageSlot();

private:
    explicit DriversList(QObject *parent = nullptr);
    DriversList(DriversList const&);

    void fillUsersList();

    QVector<DriverItem> mItems;

};

#endif // DRIVERSLIST_H
