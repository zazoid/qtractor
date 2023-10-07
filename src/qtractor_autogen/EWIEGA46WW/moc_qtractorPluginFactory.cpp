/****************************************************************************
** Meta object code from reading C++ file 'qtractorPluginFactory.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorPluginFactory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorPluginFactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorPluginFactory_t {
    const uint offsetsAndSize[8];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorPluginFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorPluginFactory_t qt_meta_stringdata_qtractorPluginFactory = {
    {
QT_MOC_LITERAL(0, 21), // "qtractorPluginFactory"
QT_MOC_LITERAL(22, 7), // "scanned"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 8) // "iPercent"

    },
    "qtractorPluginFactory\0scanned\0\0iPercent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorPluginFactory[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void qtractorPluginFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorPluginFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scanned((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorPluginFactory::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorPluginFactory::scanned)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qtractorPluginFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qtractorPluginFactory.offsetsAndSize,
    qt_meta_data_qtractorPluginFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorPluginFactory_t
, QtPrivate::TypeAndForceComplete<qtractorPluginFactory, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>



>,
    nullptr
} };


const QMetaObject *qtractorPluginFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorPluginFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorPluginFactory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qtractorPluginFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void qtractorPluginFactory::scanned(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qtractorPluginFactory__Scanner_t {
    const uint offsetsAndSize[16];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorPluginFactory__Scanner_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorPluginFactory__Scanner_t qt_meta_stringdata_qtractorPluginFactory__Scanner = {
    {
QT_MOC_LITERAL(0, 30), // "qtractorPluginFactory::Scanner"
QT_MOC_LITERAL(31, 11), // "stdout_slot"
QT_MOC_LITERAL(43, 0), // ""
QT_MOC_LITERAL(44, 11), // "stderr_slot"
QT_MOC_LITERAL(56, 9), // "exit_slot"
QT_MOC_LITERAL(66, 8), // "exitCode"
QT_MOC_LITERAL(75, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(96, 10) // "exitStatus"

    },
    "qtractorPluginFactory::Scanner\0"
    "stdout_slot\0\0stderr_slot\0exit_slot\0"
    "exitCode\0QProcess::ExitStatus\0exitStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorPluginFactory__Scanner[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x09,    1 /* Protected */,
       3,    0,   33,    2, 0x09,    2 /* Protected */,
       4,    2,   34,    2, 0x09,    3 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,

       0        // eod
};

void qtractorPluginFactory::Scanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Scanner *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stdout_slot(); break;
        case 1: _t->stderr_slot(); break;
        case 2: _t->exit_slot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject qtractorPluginFactory::Scanner::staticMetaObject = { {
    QMetaObject::SuperData::link<QProcess::staticMetaObject>(),
    qt_meta_stringdata_qtractorPluginFactory__Scanner.offsetsAndSize,
    qt_meta_data_qtractorPluginFactory__Scanner,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorPluginFactory__Scanner_t
, QtPrivate::TypeAndForceComplete<Scanner, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorPluginFactory::Scanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorPluginFactory::Scanner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorPluginFactory__Scanner.stringdata0))
        return static_cast<void*>(this);
    return QProcess::qt_metacast(_clname);
}

int qtractorPluginFactory::Scanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
