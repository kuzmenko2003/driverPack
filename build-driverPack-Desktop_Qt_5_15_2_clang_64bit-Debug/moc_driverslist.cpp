/****************************************************************************
** Meta object code from reading C++ file 'driverslist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../driverPack/driverslist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'driverslist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DriversList_t {
    QByteArrayData data[25];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DriversList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DriversList_t qt_meta_stringdata_DriversList = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DriversList"
QT_MOC_LITERAL(1, 12, 11), // "changeValue"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "getDetails"
QT_MOC_LITERAL(4, 36, 9), // "_idDriver"
QT_MOC_LITERAL(5, 46, 5), // "_name"
QT_MOC_LITERAL(6, 52, 11), // "_middleName"
QT_MOC_LITERAL(7, 64, 15), // "_passportSerial"
QT_MOC_LITERAL(8, 80, 15), // "_passportNumber"
QT_MOC_LITERAL(9, 96, 9), // "_postcode"
QT_MOC_LITERAL(10, 106, 8), // "_address"
QT_MOC_LITERAL(11, 115, 12), // "_addressLife"
QT_MOC_LITERAL(12, 128, 8), // "_company"
QT_MOC_LITERAL(13, 137, 8), // "_jobname"
QT_MOC_LITERAL(14, 146, 6), // "_phone"
QT_MOC_LITERAL(15, 153, 6), // "_email"
QT_MOC_LITERAL(16, 160, 6), // "_photo"
QT_MOC_LITERAL(17, 167, 12), // "_description"
QT_MOC_LITERAL(18, 180, 21), // "setProfileImageSignal"
QT_MOC_LITERAL(19, 202, 6), // "photos"
QT_MOC_LITERAL(20, 209, 11), // "countPhotos"
QT_MOC_LITERAL(21, 221, 11), // "moreDetails"
QT_MOC_LITERAL(22, 233, 8), // "idDriver"
QT_MOC_LITERAL(23, 242, 12), // "saveDataUser"
QT_MOC_LITERAL(24, 255, 19) // "setProfileImageSlot"

    },
    "DriversList\0changeValue\0\0getDetails\0"
    "_idDriver\0_name\0_middleName\0_passportSerial\0"
    "_passportNumber\0_postcode\0_address\0"
    "_addressLife\0_company\0_jobname\0_phone\0"
    "_email\0_photo\0_description\0"
    "setProfileImageSignal\0photos\0countPhotos\0"
    "moreDetails\0idDriver\0saveDataUser\0"
    "setProfileImageSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DriversList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,   14,   45,    2, 0x06 /* Public */,
      18,    2,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    1,   79,    2, 0x0a /* Public */,
      23,   14,   82,    2, 0x0a /* Public */,
      24,    0,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   19,   20,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,   17,
    QMetaType::Void,

       0        // eod
};

void DriversList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DriversList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeValue(); break;
        case 1: _t->getDetails((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< QString(*)>(_a[9])),(*reinterpret_cast< QString(*)>(_a[10])),(*reinterpret_cast< QString(*)>(_a[11])),(*reinterpret_cast< QString(*)>(_a[12])),(*reinterpret_cast< QString(*)>(_a[13])),(*reinterpret_cast< QString(*)>(_a[14]))); break;
        case 2: _t->setProfileImageSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->moreDetails((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->saveDataUser((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< QString(*)>(_a[9])),(*reinterpret_cast< QString(*)>(_a[10])),(*reinterpret_cast< QString(*)>(_a[11])),(*reinterpret_cast< QString(*)>(_a[12])),(*reinterpret_cast< QString(*)>(_a[13])),(*reinterpret_cast< QString(*)>(_a[14]))); break;
        case 5: _t->setProfileImageSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DriversList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DriversList::changeValue)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DriversList::*)(int , QString , QString , QString , QString , QString , QString , QString , QString , QString , QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DriversList::getDetails)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DriversList::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DriversList::setProfileImageSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DriversList::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DriversList.data,
    qt_meta_data_DriversList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DriversList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DriversList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DriversList.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DriversList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DriversList::changeValue()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DriversList::getDetails(int _t1, QString _t2, QString _t3, QString _t4, QString _t5, QString _t6, QString _t7, QString _t8, QString _t9, QString _t10, QString _t11, QString _t12, QString _t13, QString _t14)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t10))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t11))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t12))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t13))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t14))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DriversList::setProfileImageSignal(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
