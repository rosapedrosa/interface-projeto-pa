/****************************************************************************
** Meta object code from reading C++ file 'interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Sculptor/interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Interface_t {
    QByteArrayData data[25];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Interface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Interface_t qt_meta_stringdata_Interface = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Interface"
QT_MOC_LITERAL(1, 10, 8), // "value_xy"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "setPutVoxel"
QT_MOC_LITERAL(4, 32, 11), // "setCutVoxel"
QT_MOC_LITERAL(5, 44, 9), // "setPutBox"
QT_MOC_LITERAL(6, 54, 9), // "setCutBox"
QT_MOC_LITERAL(7, 64, 12), // "setPutSphere"
QT_MOC_LITERAL(8, 77, 12), // "setCutSphere"
QT_MOC_LITERAL(9, 90, 15), // "setPutEllipsoid"
QT_MOC_LITERAL(10, 106, 15), // "setCutEllipsoid"
QT_MOC_LITERAL(11, 122, 5), // "mudaX"
QT_MOC_LITERAL(12, 128, 2), // "x_"
QT_MOC_LITERAL(13, 131, 5), // "mudaY"
QT_MOC_LITERAL(14, 137, 2), // "y_"
QT_MOC_LITERAL(15, 140, 5), // "mudaZ"
QT_MOC_LITERAL(16, 146, 2), // "z_"
QT_MOC_LITERAL(17, 149, 8), // "mudaRaio"
QT_MOC_LITERAL(18, 158, 5), // "raio_"
QT_MOC_LITERAL(19, 164, 6), // "mudaRx"
QT_MOC_LITERAL(20, 171, 3), // "rx_"
QT_MOC_LITERAL(21, 175, 6), // "mudaRy"
QT_MOC_LITERAL(22, 182, 3), // "ry_"
QT_MOC_LITERAL(23, 186, 6), // "mudaRz"
QT_MOC_LITERAL(24, 193, 3) // "rz_"

    },
    "Interface\0value_xy\0\0setPutVoxel\0"
    "setCutVoxel\0setPutBox\0setCutBox\0"
    "setPutSphere\0setCutSphere\0setPutEllipsoid\0"
    "setCutEllipsoid\0mudaX\0x_\0mudaY\0y_\0"
    "mudaZ\0z_\0mudaRaio\0raio_\0mudaRx\0rx_\0"
    "mudaRy\0ry_\0mudaRz\0rz_"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Interface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   99,    2, 0x0a /* Public */,
       4,    0,  100,    2, 0x0a /* Public */,
       5,    0,  101,    2, 0x0a /* Public */,
       6,    0,  102,    2, 0x0a /* Public */,
       7,    0,  103,    2, 0x0a /* Public */,
       8,    0,  104,    2, 0x0a /* Public */,
       9,    0,  105,    2, 0x0a /* Public */,
      10,    0,  106,    2, 0x0a /* Public */,
      11,    1,  107,    2, 0x0a /* Public */,
      13,    1,  110,    2, 0x0a /* Public */,
      15,    1,  113,    2, 0x0a /* Public */,
      17,    1,  116,    2, 0x0a /* Public */,
      19,    1,  119,    2, 0x0a /* Public */,
      21,    1,  122,    2, 0x0a /* Public */,
      23,    1,  125,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   24,

       0        // eod
};

void Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Interface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->value_xy((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->setPutVoxel(); break;
        case 2: _t->setCutVoxel(); break;
        case 3: _t->setPutBox(); break;
        case 4: _t->setCutBox(); break;
        case 5: _t->setPutSphere(); break;
        case 6: _t->setCutSphere(); break;
        case 7: _t->setPutEllipsoid(); break;
        case 8: _t->setCutEllipsoid(); break;
        case 9: _t->mudaX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->mudaY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->mudaZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->mudaRaio((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->mudaRx((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->mudaRy((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->mudaRz((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Interface::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Interface::value_xy)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Interface.data,
    qt_meta_data_Interface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Interface.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Interface::value_xy(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
