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
    explicit DriversList(QObject *parent = nullptr);

    QVector<DriverItem> items() const;
    bool setItemAt(int index, const DriverItem &item);

signals:
    void changeValue();

public slots:

private:
    QVector<DriverItem> mItems;

};

#endif // DRIVERSLIST_H
