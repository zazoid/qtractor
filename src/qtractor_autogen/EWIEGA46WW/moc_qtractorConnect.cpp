/****************************************************************************
** Meta object code from reading C++ file 'qtractorConnect.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorConnect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorConnect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorClientListView_t {
    const uint offsetsAndSize[6];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorClientListView_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorClientListView_t qt_meta_stringdata_qtractorClientListView = {
    {
QT_MOC_LITERAL(0, 22), // "qtractorClientListView"
QT_MOC_LITERAL(23, 11), // "timeoutSlot"
QT_MOC_LITERAL(35, 0) // ""

    },
    "qtractorClientListView\0timeoutSlot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorClientListView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x09,    1 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void qtractorClientListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorClientListView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timeoutSlot(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject qtractorClientListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_qtractorClientListView.offsetsAndSize,
    qt_meta_data_qtractorClientListView,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorClientListView_t
, QtPrivate::TypeAndForceComplete<qtractorClientListView, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorClientListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorClientListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorClientListView.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int qtractorClientListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_qtractorConnectorView_t {
    const uint offsetsAndSize[6];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorConnectorView_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorConnectorView_t qt_meta_stringdata_qtractorConnectorView = {
    {
QT_MOC_LITERAL(0, 21), // "qtractorConnectorView"
QT_MOC_LITERAL(22, 15), // "contentsChanged"
QT_MOC_LITERAL(38, 0) // ""

    },
    "qtractorConnectorView\0contentsChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorConnectorView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x09,    1 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void qtractorConnectorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorConnectorView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->contentsChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject qtractorConnectorView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qtractorConnectorView.offsetsAndSize,
    qt_meta_data_qtractorConnectorView,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorConnectorView_t
, QtPrivate::TypeAndForceComplete<qtractorConnectorView, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorConnectorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorConnectorView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorConnectorView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qtractorConnectorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_qtractorConnect_t {
    const uint offsetsAndSize[24];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorConnect_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorConnect_t qt_meta_stringdata_qtractorConnect = {
    {
QT_MOC_LITERAL(0, 15), // "qtractorConnect"
QT_MOC_LITERAL(16, 15), // "contentsChanged"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 14), // "connectChanged"
QT_MOC_LITERAL(48, 15), // "connectSelected"
QT_MOC_LITERAL(64, 18), // "disconnectSelected"
QT_MOC_LITERAL(83, 13), // "disconnectAll"
QT_MOC_LITERAL(97, 14), // "updateContents"
QT_MOC_LITERAL(112, 6), // "bClear"
QT_MOC_LITERAL(119, 7), // "refresh"
QT_MOC_LITERAL(127, 11), // "contextMenu"
QT_MOC_LITERAL(139, 4) // "gpos"

    },
    "qtractorConnect\0contentsChanged\0\0"
    "connectChanged\0connectSelected\0"
    "disconnectSelected\0disconnectAll\0"
    "updateContents\0bClear\0refresh\0contextMenu\0"
    "gpos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorConnect[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   64,    2, 0x0a,    3 /* Public */,
       5,    0,   65,    2, 0x0a,    4 /* Public */,
       6,    0,   66,    2, 0x0a,    5 /* Public */,
       7,    1,   67,    2, 0x0a,    6 /* Public */,
       9,    0,   70,    2, 0x0a,    8 /* Public */,
      10,    1,   71,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   11,

       0        // eod
};

void qtractorConnect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorConnect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->contentsChanged(); break;
        case 1: _t->connectChanged(); break;
        case 2: { bool _r = _t->connectSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->disconnectSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->disconnectAll();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->updateContents((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->refresh(); break;
        case 7: _t->contextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorConnect::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorConnect::contentsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qtractorConnect::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorConnect::connectChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject qtractorConnect::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qtractorConnect.offsetsAndSize,
    qt_meta_data_qtractorConnect,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorConnect_t
, QtPrivate::TypeAndForceComplete<qtractorConnect, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorConnect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorConnect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorConnect.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qtractorConnect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void qtractorConnect::contentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void qtractorConnect::connectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
