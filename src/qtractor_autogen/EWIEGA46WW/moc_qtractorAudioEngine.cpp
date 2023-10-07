/****************************************************************************
** Meta object code from reading C++ file 'qtractorAudioEngine.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorAudioEngine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorAudioEngine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorAudioEngineProxy_t {
    const uint offsetsAndSize[26];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorAudioEngineProxy_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorAudioEngineProxy_t qt_meta_stringdata_qtractorAudioEngineProxy = {
    {
QT_MOC_LITERAL(0, 24), // "qtractorAudioEngineProxy"
QT_MOC_LITERAL(25, 9), // "shutEvent"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 9), // "xrunEvent"
QT_MOC_LITERAL(46, 9), // "portEvent"
QT_MOC_LITERAL(56, 9), // "buffEvent"
QT_MOC_LITERAL(66, 11), // "iBufferSize"
QT_MOC_LITERAL(78, 9), // "sessEvent"
QT_MOC_LITERAL(88, 12), // "pvSessionArg"
QT_MOC_LITERAL(101, 9), // "syncEvent"
QT_MOC_LITERAL(111, 9), // "iPlayHead"
QT_MOC_LITERAL(121, 8), // "bPlaying"
QT_MOC_LITERAL(130, 9) // "propEvent"

    },
    "qtractorAudioEngineProxy\0shutEvent\0\0"
    "xrunEvent\0portEvent\0buffEvent\0iBufferSize\0"
    "sessEvent\0pvSessionArg\0syncEvent\0"
    "iPlayHead\0bPlaying\0propEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorAudioEngineProxy[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    0,   57,    2, 0x06,    2 /* Public */,
       4,    0,   58,    2, 0x06,    3 /* Public */,
       5,    1,   59,    2, 0x06,    4 /* Public */,
       7,    1,   62,    2, 0x06,    6 /* Public */,
       9,    2,   65,    2, 0x06,    8 /* Public */,
      12,    0,   70,    2, 0x06,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void, QMetaType::VoidStar,    8,
    QMetaType::Void, QMetaType::ULong, QMetaType::Bool,   10,   11,
    QMetaType::Void,

       0        // eod
};

void qtractorAudioEngineProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorAudioEngineProxy *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->shutEvent(); break;
        case 1: _t->xrunEvent(); break;
        case 2: _t->portEvent(); break;
        case 3: _t->buffEvent((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 4: _t->sessEvent((*reinterpret_cast< std::add_pointer_t<void*>>(_a[1]))); break;
        case 5: _t->syncEvent((*reinterpret_cast< std::add_pointer_t<ulong>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 6: _t->propEvent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorAudioEngineProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorAudioEngineProxy::shutEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qtractorAudioEngineProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorAudioEngineProxy::xrunEvent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qtractorAudioEngineProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorAudioEngineProxy::portEvent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qtractorAudioEngineProxy::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorAudioEngineProxy::buffEvent)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (qtractorAudioEngineProxy::*)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorAudioEngineProxy::sessEvent)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (qtractorAudioEngineProxy::*)(unsigned long , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorAudioEngineProxy::syncEvent)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (qtractorAudioEngineProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorAudioEngineProxy::propEvent)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject qtractorAudioEngineProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qtractorAudioEngineProxy.offsetsAndSize,
    qt_meta_data_qtractorAudioEngineProxy,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorAudioEngineProxy_t
, QtPrivate::TypeAndForceComplete<qtractorAudioEngineProxy, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned long, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *qtractorAudioEngineProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorAudioEngineProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorAudioEngineProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qtractorAudioEngineProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void qtractorAudioEngineProxy::shutEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void qtractorAudioEngineProxy::xrunEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void qtractorAudioEngineProxy::portEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void qtractorAudioEngineProxy::buffEvent(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void qtractorAudioEngineProxy::sessEvent(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void qtractorAudioEngineProxy::syncEvent(unsigned long _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void qtractorAudioEngineProxy::propEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
