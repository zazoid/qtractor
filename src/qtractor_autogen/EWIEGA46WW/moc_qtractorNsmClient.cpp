/****************************************************************************
** Meta object code from reading C++ file 'qtractorNsmClient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorNsmClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorNsmClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorNsmClient_t {
    const uint offsetsAndSize[18];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorNsmClient_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorNsmClient_t qt_meta_stringdata_qtractorNsmClient = {
    {
QT_MOC_LITERAL(0, 17), // "qtractorNsmClient"
QT_MOC_LITERAL(18, 6), // "active"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 9), // "is_active"
QT_MOC_LITERAL(36, 4), // "open"
QT_MOC_LITERAL(41, 4), // "save"
QT_MOC_LITERAL(46, 6), // "loaded"
QT_MOC_LITERAL(53, 4), // "show"
QT_MOC_LITERAL(58, 4) // "hide"

    },
    "qtractorNsmClient\0active\0\0is_active\0"
    "open\0save\0loaded\0show\0hide"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorNsmClient[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    0,   53,    2, 0x06,    3 /* Public */,
       5,    0,   54,    2, 0x06,    4 /* Public */,
       6,    0,   55,    2, 0x06,    5 /* Public */,
       7,    0,   56,    2, 0x06,    6 /* Public */,
       8,    0,   57,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorNsmClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorNsmClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->active((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->open(); break;
        case 2: _t->save(); break;
        case 3: _t->loaded(); break;
        case 4: _t->show(); break;
        case 5: _t->hide(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorNsmClient::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorNsmClient::active)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qtractorNsmClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorNsmClient::open)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qtractorNsmClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorNsmClient::save)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qtractorNsmClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorNsmClient::loaded)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (qtractorNsmClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorNsmClient::show)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (qtractorNsmClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorNsmClient::hide)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject qtractorNsmClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qtractorNsmClient.offsetsAndSize,
    qt_meta_data_qtractorNsmClient,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorNsmClient_t
, QtPrivate::TypeAndForceComplete<qtractorNsmClient, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *qtractorNsmClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorNsmClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorNsmClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qtractorNsmClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void qtractorNsmClient::active(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qtractorNsmClient::open()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void qtractorNsmClient::save()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void qtractorNsmClient::loaded()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void qtractorNsmClient::show()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void qtractorNsmClient::hide()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
