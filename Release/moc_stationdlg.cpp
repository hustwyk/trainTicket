/****************************************************************************
** Meta object code from reading C++ file 'stationdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../stationdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stationdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StationDlg_t {
    QByteArrayData data[14];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StationDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StationDlg_t qt_meta_stringdata_StationDlg = {
    {
QT_MOC_LITERAL(0, 0, 10), // "StationDlg"
QT_MOC_LITERAL(1, 11, 14), // "sendTrainnum_2"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "trainnum"
QT_MOC_LITERAL(4, 36, 14), // "sendTrainnum_3"
QT_MOC_LITERAL(5, 51, 13), // "sendModifyNum"
QT_MOC_LITERAL(6, 65, 3), // "num"
QT_MOC_LITERAL(7, 69, 22), // "sendStationPassstation"
QT_MOC_LITERAL(8, 92, 7), // "station"
QT_MOC_LITERAL(9, 100, 11), // "getTrainnum"
QT_MOC_LITERAL(10, 112, 1), // "s"
QT_MOC_LITERAL(11, 114, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 136, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(13, 160, 23) // "on_pushButton_2_clicked"

    },
    "StationDlg\0sendTrainnum_2\0\0trainnum\0"
    "sendTrainnum_3\0sendModifyNum\0num\0"
    "sendStationPassstation\0station\0"
    "getTrainnum\0s\0on_pushButton_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StationDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       5,    1,   60,    2, 0x06 /* Public */,
       7,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   66,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x08 /* Private */,
      12,    0,   70,    2, 0x08 /* Private */,
      13,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StationDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StationDlg *_t = static_cast<StationDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendTrainnum_2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendTrainnum_3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendModifyNum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sendStationPassstation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->getTrainnum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_pushButton_3_clicked(); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StationDlg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StationDlg::sendTrainnum_2)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (StationDlg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StationDlg::sendTrainnum_3)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (StationDlg::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StationDlg::sendModifyNum)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (StationDlg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StationDlg::sendStationPassstation)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject StationDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_StationDlg.data,
      qt_meta_data_StationDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StationDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StationDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StationDlg.stringdata0))
        return static_cast<void*>(const_cast< StationDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int StationDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void StationDlg::sendTrainnum_2(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StationDlg::sendTrainnum_3(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StationDlg::sendModifyNum(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StationDlg::sendStationPassstation(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
