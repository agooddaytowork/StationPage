/****************************************************************************
** Meta object code from reading C++ file 'main.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "main.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StationObject_t {
    QByteArrayData data[8];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StationObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StationObject_t qt_meta_stringdata_StationObject = {
    {
QT_MOC_LITERAL(0, 0, 13), // "StationObject"
QT_MOC_LITERAL(1, 14, 18), // "stationNameChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10), // "topChanged"
QT_MOC_LITERAL(4, 45, 11), // "leftChanged"
QT_MOC_LITERAL(5, 57, 11), // "stationName"
QT_MOC_LITERAL(6, 69, 3), // "top"
QT_MOC_LITERAL(7, 73, 4) // "left"

    },
    "StationObject\0stationNameChanged\0\0"
    "topChanged\0leftChanged\0stationName\0"
    "top\0left"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StationObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,
       6, QMetaType::Double, 0x00495103,
       7, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void StationObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StationObject *_t = static_cast<StationObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stationNameChanged(); break;
        case 1: _t->topChanged(); break;
        case 2: _t->leftChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StationObject::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StationObject::stationNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (StationObject::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StationObject::topChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (StationObject::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StationObject::leftChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        StationObject *_t = static_cast<StationObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->stationName(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->top(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->left(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        StationObject *_t = static_cast<StationObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStationName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTop(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setLeft(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject StationObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StationObject.data,
      qt_meta_data_StationObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StationObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StationObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StationObject.stringdata0))
        return static_cast<void*>(const_cast< StationObject*>(this));
    return QObject::qt_metacast(_clname);
}

int StationObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StationObject::stationNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void StationObject::topChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void StationObject::leftChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
