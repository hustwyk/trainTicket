/****************************************************************************
** Meta object code from reading C++ file 'inquire.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../inquire.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inquire.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Inquire_t {
    QByteArrayData data[10];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Inquire_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Inquire_t qt_meta_stringdata_Inquire = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Inquire"
QT_MOC_LITERAL(1, 8, 14), // "sendUsername_3"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "username"
QT_MOC_LITERAL(4, 33, 10), // "getAccount"
QT_MOC_LITERAL(5, 44, 7), // "account"
QT_MOC_LITERAL(6, 52, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 76, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 98, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(9, 122, 23) // "on_pushButton_4_clicked"

    },
    "Inquire\0sendUsername_3\0\0username\0"
    "getAccount\0account\0on_pushButton_2_clicked\0"
    "on_pushButton_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Inquire[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Inquire::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Inquire *_t = static_cast<Inquire *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendUsername_3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->getAccount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Inquire::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Inquire::sendUsername_3)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Inquire::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Inquire.data,
      qt_meta_data_Inquire,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Inquire::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Inquire::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Inquire.stringdata0))
        return static_cast<void*>(const_cast< Inquire*>(this));
    return QDialog::qt_metacast(_clname);
}

int Inquire::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void Inquire::sendUsername_3(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
