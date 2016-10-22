/****************************************************************************
** Meta object code from reading C++ file 'modifypassengerdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modifypassengerdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifypassengerdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModifyPassengerDlg_t {
    QByteArrayData data[7];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModifyPassengerDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModifyPassengerDlg_t qt_meta_stringdata_ModifyPassengerDlg = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ModifyPassengerDlg"
QT_MOC_LITERAL(1, 19, 14), // "getModifyColum"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 1), // "i"
QT_MOC_LITERAL(4, 37, 13), // "getUsername_2"
QT_MOC_LITERAL(5, 51, 8), // "username"
QT_MOC_LITERAL(6, 60, 21) // "on_pushButton_clicked"

    },
    "ModifyPassengerDlg\0getModifyColum\0\0i\0"
    "getUsername_2\0username\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyPassengerDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void ModifyPassengerDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifyPassengerDlg *_t = static_cast<ModifyPassengerDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getModifyColum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->getUsername_2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ModifyPassengerDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ModifyPassengerDlg.data,
      qt_meta_data_ModifyPassengerDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModifyPassengerDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyPassengerDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyPassengerDlg.stringdata0))
        return static_cast<void*>(const_cast< ModifyPassengerDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ModifyPassengerDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
