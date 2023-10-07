/****************************************************************************
** Meta object code from reading C++ file 'qtractorTrackButton.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorTrackButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorTrackButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorMidiControlButton_t {
    const uint offsetsAndSize[10];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorMidiControlButton_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorMidiControlButton_t qt_meta_stringdata_qtractorMidiControlButton = {
    {
QT_MOC_LITERAL(0, 25), // "qtractorMidiControlButton"
QT_MOC_LITERAL(26, 21), // "midiControlActionSlot"
QT_MOC_LITERAL(48, 0), // ""
QT_MOC_LITERAL(49, 19), // "midiControlMenuSlot"
QT_MOC_LITERAL(69, 3) // "pos"

    },
    "qtractorMidiControlButton\0"
    "midiControlActionSlot\0\0midiControlMenuSlot\0"
    "pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorMidiControlButton[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x09,    1 /* Protected */,
       3,    1,   27,    2, 0x09,    2 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    4,

       0        // eod
};

void qtractorMidiControlButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorMidiControlButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->midiControlActionSlot(); break;
        case 1: _t->midiControlMenuSlot((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject qtractorMidiControlButton::staticMetaObject = { {
    QMetaObject::SuperData::link<qtractorObserverWidget<QPushButton>::staticMetaObject>(),
    qt_meta_stringdata_qtractorMidiControlButton.offsetsAndSize,
    qt_meta_data_qtractorMidiControlButton,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorMidiControlButton_t
, QtPrivate::TypeAndForceComplete<qtractorMidiControlButton, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorMidiControlButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorMidiControlButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorMidiControlButton.stringdata0))
        return static_cast<void*>(this);
    return qtractorObserverWidget<QPushButton>::qt_metacast(_clname);
}

int qtractorMidiControlButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qtractorObserverWidget<QPushButton>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_qtractorTrackButton_t {
    const uint offsetsAndSize[8];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorTrackButton_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorTrackButton_t qt_meta_stringdata_qtractorTrackButton = {
    {
QT_MOC_LITERAL(0, 19), // "qtractorTrackButton"
QT_MOC_LITERAL(20, 11), // "toggledSlot"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 3) // "bOn"

    },
    "qtractorTrackButton\0toggledSlot\0\0bOn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorTrackButton[] = {

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
       1,    1,   20,    2, 0x09,    1 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void qtractorTrackButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorTrackButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toggledSlot((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject qtractorTrackButton::staticMetaObject = { {
    QMetaObject::SuperData::link<qtractorMidiControlButton::staticMetaObject>(),
    qt_meta_stringdata_qtractorTrackButton.offsetsAndSize,
    qt_meta_data_qtractorTrackButton,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorTrackButton_t
, QtPrivate::TypeAndForceComplete<qtractorTrackButton, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorTrackButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorTrackButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorTrackButton.stringdata0))
        return static_cast<void*>(this);
    return qtractorMidiControlButton::qt_metacast(_clname);
}

int qtractorTrackButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qtractorMidiControlButton::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
