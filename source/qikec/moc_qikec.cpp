/****************************************************************************
** Meta object code from reading C++ file 'qikec.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qikec.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qikec.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata__qikecRoot_t {
    QByteArrayData data[7];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata__qikecRoot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata__qikecRoot_t qt_meta_stringdata__qikecRoot = {
    {
QT_MOC_LITERAL(0, 0, 10), // "_qikecRoot"
QT_MOC_LITERAL(1, 11, 11), // "customEvent"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "QEvent*"
QT_MOC_LITERAL(4, 32, 1), // "e"
QT_MOC_LITERAL(5, 34, 11), // "siteConnect"
QT_MOC_LITERAL(6, 46, 14) // "siteDisconnect"

    },
    "_qikecRoot\0customEvent\0\0QEvent*\0e\0"
    "siteConnect\0siteDisconnect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data__qikecRoot[] = {

 // content:
       8,       // revision
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
       5,    0,   32,    2, 0x0a /* Public */,
       6,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void _qikecRoot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<_qikecRoot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->customEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 1: _t->siteConnect(); break;
        case 2: _t->siteDisconnect(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject _qikecRoot::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata__qikecRoot.data,
    qt_meta_data__qikecRoot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *_qikecRoot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *_qikecRoot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata__qikecRoot.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ikecRoot"))
        return static_cast< Ui::ikecRoot*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int _qikecRoot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata__qikecBanner_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata__qikecBanner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata__qikecBanner_t qt_meta_stringdata__qikecBanner = {
    {
QT_MOC_LITERAL(0, 0, 12) // "_qikecBanner"

    },
    "_qikecBanner"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data__qikecBanner[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void _qikecBanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject _qikecBanner::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata__qikecBanner.data,
    qt_meta_data__qikecBanner,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *_qikecBanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *_qikecBanner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata__qikecBanner.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ikecBanner"))
        return static_cast< Ui::ikecBanner*>(this);
    return QDialog::qt_metacast(_clname);
}

int _qikecBanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata__qikecFilePass_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata__qikecFilePass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata__qikecFilePass_t qt_meta_stringdata__qikecFilePass = {
    {
QT_MOC_LITERAL(0, 0, 14) // "_qikecFilePass"

    },
    "_qikecFilePass"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data__qikecFilePass[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void _qikecFilePass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject _qikecFilePass::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata__qikecFilePass.data,
    qt_meta_data__qikecFilePass,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *_qikecFilePass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *_qikecFilePass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata__qikecFilePass.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ikecFilePass"))
        return static_cast< Ui::ikecFilePass*>(this);
    return QDialog::qt_metacast(_clname);
}

int _qikecFilePass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
