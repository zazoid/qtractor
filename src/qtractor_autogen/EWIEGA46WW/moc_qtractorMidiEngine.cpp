/****************************************************************************
** Meta object code from reading C++ file 'qtractorMidiEngine.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorMidiEngine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorMidiEngine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorMidiEngineProxy_t {
    const uint offsetsAndSize[26];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorMidiEngineProxy_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorMidiEngineProxy_t qt_meta_stringdata_qtractorMidiEngineProxy = {
    {
QT_MOC_LITERAL(0, 23), // "qtractorMidiEngineProxy"
QT_MOC_LITERAL(24, 8), // "mmcEvent"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 16), // "qtractorMmcEvent"
QT_MOC_LITERAL(51, 4), // "mmce"
QT_MOC_LITERAL(56, 8), // "ctlEvent"
QT_MOC_LITERAL(65, 16), // "qtractorCtlEvent"
QT_MOC_LITERAL(82, 4), // "ctle"
QT_MOC_LITERAL(87, 8), // "sppEvent"
QT_MOC_LITERAL(96, 7), // "iSppCmd"
QT_MOC_LITERAL(104, 8), // "iSongPos"
QT_MOC_LITERAL(113, 8), // "clkEvent"
QT_MOC_LITERAL(122, 6) // "fTempo"

    },
    "qtractorMidiEngineProxy\0mmcEvent\0\0"
    "qtractorMmcEvent\0mmce\0ctlEvent\0"
    "qtractorCtlEvent\0ctle\0sppEvent\0iSppCmd\0"
    "iSongPos\0clkEvent\0fTempo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorMidiEngineProxy[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       5,    1,   41,    2, 0x06,    3 /* Public */,
       8,    2,   44,    2, 0x06,    5 /* Public */,
      11,    1,   49,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::UShort,    9,   10,
    QMetaType::Void, QMetaType::Float,   12,

       0        // eod
};

void qtractorMidiEngineProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorMidiEngineProxy *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mmcEvent((*reinterpret_cast< std::add_pointer_t<qtractorMmcEvent>>(_a[1]))); break;
        case 1: _t->ctlEvent((*reinterpret_cast< std::add_pointer_t<qtractorCtlEvent>>(_a[1]))); break;
        case 2: _t->sppEvent((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ushort>>(_a[2]))); break;
        case 3: _t->clkEvent((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorMidiEngineProxy::*)(const qtractorMmcEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorMidiEngineProxy::mmcEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qtractorMidiEngineProxy::*)(const qtractorCtlEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorMidiEngineProxy::ctlEvent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qtractorMidiEngineProxy::*)(int , unsigned short );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorMidiEngineProxy::sppEvent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qtractorMidiEngineProxy::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorMidiEngineProxy::clkEvent)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject qtractorMidiEngineProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qtractorMidiEngineProxy.offsetsAndSize,
    qt_meta_data_qtractorMidiEngineProxy,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorMidiEngineProxy_t
, QtPrivate::TypeAndForceComplete<qtractorMidiEngineProxy, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const qtractorMmcEvent &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const qtractorCtlEvent &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned short, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>



>,
    nullptr
} };


const QMetaObject *qtractorMidiEngineProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorMidiEngineProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorMidiEngineProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qtractorMidiEngineProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void qtractorMidiEngineProxy::mmcEvent(const qtractorMmcEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qtractorMidiEngineProxy::ctlEvent(const qtractorCtlEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qtractorMidiEngineProxy::sppEvent(int _t1, unsigned short _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qtractorMidiEngineProxy::clkEvent(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
