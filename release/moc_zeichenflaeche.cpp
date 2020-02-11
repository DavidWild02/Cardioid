/****************************************************************************
** Meta object code from reading C++ file 'zeichenflaeche.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtProjects/Cardioid/zeichenflaeche.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zeichenflaeche.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Zeichenflaeche_t {
    QByteArrayData data[10];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Zeichenflaeche_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Zeichenflaeche_t qt_meta_stringdata_Zeichenflaeche = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Zeichenflaeche"
QT_MOC_LITERAL(1, 15, 13), // "pointsChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "newPoints"
QT_MOC_LITERAL(4, 40, 13), // "factorChanged"
QT_MOC_LITERAL(5, 54, 9), // "newFactor"
QT_MOC_LITERAL(6, 64, 9), // "setPoints"
QT_MOC_LITERAL(7, 74, 1), // "n"
QT_MOC_LITERAL(8, 76, 9), // "setFactor"
QT_MOC_LITERAL(9, 86, 6) // "factor"

    },
    "Zeichenflaeche\0pointsChanged\0\0newPoints\0"
    "factorChanged\0newFactor\0setPoints\0n\0"
    "setFactor\0factor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Zeichenflaeche[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Double,    9,

       0        // eod
};

void Zeichenflaeche::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Zeichenflaeche *_t = static_cast<Zeichenflaeche *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pointsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->factorChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setPoints((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setFactor((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Zeichenflaeche::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Zeichenflaeche::pointsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Zeichenflaeche::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Zeichenflaeche::factorChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Zeichenflaeche::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Zeichenflaeche.data,
      qt_meta_data_Zeichenflaeche,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Zeichenflaeche::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Zeichenflaeche::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Zeichenflaeche.stringdata0))
        return static_cast<void*>(const_cast< Zeichenflaeche*>(this));
    return QWidget::qt_metacast(_clname);
}

int Zeichenflaeche::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Zeichenflaeche::pointsChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Zeichenflaeche::factorChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
