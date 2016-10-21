/****************************************************************************
** Meta object code from reading C++ file 'admindlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../admindlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admindlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdminDlg_t {
    QByteArrayData data[17];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminDlg_t qt_meta_stringdata_AdminDlg = {
    {
QT_MOC_LITERAL(0, 0, 8), // "AdminDlg"
QT_MOC_LITERAL(1, 9, 12), // "sendTrainnum"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "trainnum"
QT_MOC_LITERAL(4, 32, 14), // "sendTrainnum_2"
QT_MOC_LITERAL(5, 47, 12), // "sendUsername"
QT_MOC_LITERAL(6, 60, 8), // "username"
QT_MOC_LITERAL(7, 69, 24), // "on_pushButton_12_clicked"
QT_MOC_LITERAL(8, 94, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 116, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(10, 140, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(11, 165, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(12, 189, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(13, 213, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(14, 237, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(15, 261, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(16, 285, 24) // "on_pushButton_15_clicked"

    },
    "AdminDlg\0sendTrainnum\0\0trainnum\0"
    "sendTrainnum_2\0sendUsername\0username\0"
    "on_pushButton_12_clicked\0on_pushButton_clicked\0"
    "on_pushButton_7_clicked\0"
    "on_pushButton_10_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_5_clicked\0"
    "on_pushButton_6_clicked\0on_pushButton_8_clicked\0"
    "on_pushButton_9_clicked\0"
    "on_pushButton_15_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       5,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   88,    2, 0x08 /* Private */,
       8,    0,   89,    2, 0x08 /* Private */,
       9,    0,   90,    2, 0x08 /* Private */,
      10,    0,   91,    2, 0x08 /* Private */,
      11,    0,   92,    2, 0x08 /* Private */,
      12,    0,   93,    2, 0x08 /* Private */,
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminDlg *_t = static_cast<AdminDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendTrainnum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendTrainnum_2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendUsername((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_12_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_pushButton_7_clicked(); break;
        case 6: _t->on_pushButton_10_clicked(); break;
        case 7: _t->on_pushButton_3_clicked(); break;
        case 8: _t->on_pushButton_5_clicked(); break;
        case 9: _t->on_pushButton_6_clicked(); break;
        case 10: _t->on_pushButton_8_clicked(); break;
        case 11: _t->on_pushButton_9_clicked(); break;
        case 12: _t->on_pushButton_15_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AdminDlg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdminDlg::sendTrainnum)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AdminDlg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdminDlg::sendTrainnum_2)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AdminDlg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdminDlg::sendUsername)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject AdminDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AdminDlg.data,
      qt_meta_data_AdminDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AdminDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AdminDlg.stringdata0))
        return static_cast<void*>(const_cast< AdminDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int AdminDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void AdminDlg::sendTrainnum(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AdminDlg::sendTrainnum_2(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AdminDlg::sendUsername(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
