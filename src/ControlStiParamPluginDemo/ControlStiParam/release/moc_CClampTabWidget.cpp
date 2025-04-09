/****************************************************************************
** Meta object code from reading C++ file 'CClampTabWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../CClampTabWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CClampTabWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CClampTabWidget_t {
    QByteArrayData data[12];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CClampTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CClampTabWidget_t qt_meta_stringdata_CClampTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CClampTabWidget"
QT_MOC_LITERAL(1, 16, 17), // "sigSetClampParams"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "name"
QT_MOC_LITERAL(4, 40, 5), // "value"
QT_MOC_LITERAL(5, 46, 22), // "on_vOffsetAuto_clicked"
QT_MOC_LITERAL(6, 69, 18), // "on_vCpAuto_clicked"
QT_MOC_LITERAL(7, 88, 18), // "on_vCmAuto_clicked"
QT_MOC_LITERAL(8, 107, 18), // "on_vRsAuto_clicked"
QT_MOC_LITERAL(9, 126, 22), // "on_cOffsetAuto_clicked"
QT_MOC_LITERAL(10, 149, 18), // "on_cCpAuto_clicked"
QT_MOC_LITERAL(11, 168, 27) // "on_cBridgeCheckAuto_clicked"

    },
    "CClampTabWidget\0sigSetClampParams\0\0"
    "name\0value\0on_vOffsetAuto_clicked\0"
    "on_vCpAuto_clicked\0on_vCmAuto_clicked\0"
    "on_vRsAuto_clicked\0on_cOffsetAuto_clicked\0"
    "on_cCpAuto_clicked\0on_cBridgeCheckAuto_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CClampTabWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   59,    2, 0x08 /* Private */,
       6,    0,   60,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CClampTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CClampTabWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigSetClampParams((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->on_vOffsetAuto_clicked(); break;
        case 2: _t->on_vCpAuto_clicked(); break;
        case 3: _t->on_vCmAuto_clicked(); break;
        case 4: _t->on_vRsAuto_clicked(); break;
        case 5: _t->on_cOffsetAuto_clicked(); break;
        case 6: _t->on_cCpAuto_clicked(); break;
        case 7: _t->on_cBridgeCheckAuto_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CClampTabWidget::*)(QString , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CClampTabWidget::sigSetClampParams)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CClampTabWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CClampTabWidget.data,
    qt_meta_data_CClampTabWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CClampTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CClampTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CClampTabWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CClampTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void CClampTabWidget::sigSetClampParams(QString _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
