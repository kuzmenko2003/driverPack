/****************************************************************************
** Meta object code from reading C++ file 'appengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../driverPack/appengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppEngine_t {
    QByteArrayData data[10];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppEngine_t qt_meta_stringdata_AppEngine = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AppEngine"
QT_MOC_LITERAL(1, 10, 22), // "toAllDriversFormSignal"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 39), // "toAllDriversFormAfterAutoriza..."
QT_MOC_LITERAL(4, 74, 22), // "toCardDriverFormSignal"
QT_MOC_LITERAL(5, 97, 16), // "toRootModeSignal"
QT_MOC_LITERAL(6, 114, 20), // "toAllDriversFormSlot"
QT_MOC_LITERAL(7, 135, 37), // "toAllDriversFormAfterAutoriza..."
QT_MOC_LITERAL(8, 173, 20), // "toCardDriverFormSlot"
QT_MOC_LITERAL(9, 194, 14) // "toRootModeSlot"

    },
    "AppEngine\0toAllDriversFormSignal\0\0"
    "toAllDriversFormAfterAutorizationSignal\0"
    "toCardDriverFormSignal\0toRootModeSignal\0"
    "toAllDriversFormSlot\0"
    "toAllDriversFormAfterAutorizationSlot\0"
    "toCardDriverFormSlot\0toRootModeSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppEngine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AppEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toAllDriversFormSignal(); break;
        case 1: _t->toAllDriversFormAfterAutorizationSignal(); break;
        case 2: _t->toCardDriverFormSignal(); break;
        case 3: _t->toRootModeSignal(); break;
        case 4: _t->toAllDriversFormSlot(); break;
        case 5: _t->toAllDriversFormAfterAutorizationSlot(); break;
        case 6: _t->toCardDriverFormSlot(); break;
        case 7: _t->toRootModeSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppEngine::toAllDriversFormSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AppEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppEngine::toAllDriversFormAfterAutorizationSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AppEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppEngine::toCardDriverFormSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AppEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppEngine::toRootModeSignal)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AppEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AppEngine.data,
    qt_meta_data_AppEngine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AppEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AppEngine::toAllDriversFormSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AppEngine::toAllDriversFormAfterAutorizationSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AppEngine::toCardDriverFormSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AppEngine::toRootModeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
