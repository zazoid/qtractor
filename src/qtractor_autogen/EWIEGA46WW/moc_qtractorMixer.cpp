/****************************************************************************
** Meta object code from reading C++ file 'qtractorMixer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorMixer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorMixer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorMonitorButton_t {
    const uint offsetsAndSize[8];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorMonitorButton_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorMonitorButton_t qt_meta_stringdata_qtractorMonitorButton = {
    {
QT_MOC_LITERAL(0, 21), // "qtractorMonitorButton"
QT_MOC_LITERAL(22, 11), // "toggledSlot"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 3) // "bOn"

    },
    "qtractorMonitorButton\0toggledSlot\0\0"
    "bOn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorMonitorButton[] = {

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

void qtractorMonitorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorMonitorButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toggledSlot((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject qtractorMonitorButton::staticMetaObject = { {
    QMetaObject::SuperData::link<qtractorMidiControlButton::staticMetaObject>(),
    qt_meta_stringdata_qtractorMonitorButton.offsetsAndSize,
    qt_meta_data_qtractorMonitorButton,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorMonitorButton_t
, QtPrivate::TypeAndForceComplete<qtractorMonitorButton, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorMonitorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorMonitorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorMonitorButton.stringdata0))
        return static_cast<void*>(this);
    return qtractorMidiControlButton::qt_metacast(_clname);
}

int qtractorMonitorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_qtractorMixerStrip_t {
    const uint offsetsAndSize[10];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorMixerStrip_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorMixerStrip_t qt_meta_stringdata_qtractorMixerStrip = {
    {
QT_MOC_LITERAL(0, 18), // "qtractorMixerStrip"
QT_MOC_LITERAL(19, 13), // "busButtonSlot"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 18), // "panningChangedSlot"
QT_MOC_LITERAL(53, 15) // "gainChangedSlot"

    },
    "qtractorMixerStrip\0busButtonSlot\0\0"
    "panningChangedSlot\0gainChangedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorMixerStrip[] = {

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
       3,    1,   33,    2, 0x09,    2 /* Protected */,
       4,    1,   36,    2, 0x09,    4 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

       0        // eod
};

void qtractorMixerStrip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorMixerStrip *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->busButtonSlot(); break;
        case 1: _t->panningChangedSlot((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 2: _t->gainChangedSlot((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject qtractorMixerStrip::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_qtractorMixerStrip.offsetsAndSize,
    qt_meta_data_qtractorMixerStrip,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorMixerStrip_t
, QtPrivate::TypeAndForceComplete<qtractorMixerStrip, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorMixerStrip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorMixerStrip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorMixerStrip.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int qtractorMixerStrip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_qtractorMixerRackWidget_t {
    const uint offsetsAndSize[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorMixerRackWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorMixerRackWidget_t qt_meta_stringdata_qtractorMixerRackWidget = {
    {
QT_MOC_LITERAL(0, 23) // "qtractorMixerRackWidget"

    },
    "qtractorMixerRackWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorMixerRackWidget[] = {

 // content:
      10,       // revision
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

void qtractorMixerRackWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject qtractorMixerRackWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_meta_stringdata_qtractorMixerRackWidget.offsetsAndSize,
    qt_meta_data_qtractorMixerRackWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorMixerRackWidget_t
, QtPrivate::TypeAndForceComplete<qtractorMixerRackWidget, std::true_type>



>,
    nullptr
} };


const QMetaObject *qtractorMixerRackWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorMixerRackWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorMixerRackWidget.stringdata0))
        return static_cast<void*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int qtractorMixerRackWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_qtractorMixerRack_t {
    const uint offsetsAndSize[14];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorMixerRack_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorMixerRack_t qt_meta_stringdata_qtractorMixerRack = {
    {
QT_MOC_LITERAL(0, 17), // "qtractorMixerRack"
QT_MOC_LITERAL(18, 16), // "selectionChanged"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 13), // "busInputsSlot"
QT_MOC_LITERAL(50, 14), // "busOutputsSlot"
QT_MOC_LITERAL(65, 14), // "busMonitorSlot"
QT_MOC_LITERAL(80, 17) // "busPropertiesSlot"

    },
    "qtractorMixerRack\0selectionChanged\0\0"
    "busInputsSlot\0busOutputsSlot\0"
    "busMonitorSlot\0busPropertiesSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorMixerRack[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x0a,    2 /* Public */,
       4,    0,   46,    2, 0x0a,    3 /* Public */,
       5,    0,   47,    2, 0x0a,    4 /* Public */,
       6,    0,   48,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorMixerRack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorMixerRack *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->busInputsSlot(); break;
        case 2: _t->busOutputsSlot(); break;
        case 3: _t->busMonitorSlot(); break;
        case 4: _t->busPropertiesSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorMixerRack::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorMixerRack::selectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject qtractorMixerRack::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_qtractorMixerRack.offsetsAndSize,
    qt_meta_data_qtractorMixerRack,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorMixerRack_t
, QtPrivate::TypeAndForceComplete<qtractorMixerRack, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorMixerRack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorMixerRack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorMixerRack.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int qtractorMixerRack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void qtractorMixerRack::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_qtractorMixer_t {
    const uint offsetsAndSize[2];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorMixer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorMixer_t qt_meta_stringdata_qtractorMixer = {
    {
QT_MOC_LITERAL(0, 13) // "qtractorMixer"

    },
    "qtractorMixer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorMixer[] = {

 // content:
      10,       // revision
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

void qtractorMixer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject qtractorMixer::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_qtractorMixer.offsetsAndSize,
    qt_meta_data_qtractorMixer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorMixer_t
, QtPrivate::TypeAndForceComplete<qtractorMixer, std::true_type>



>,
    nullptr
} };


const QMetaObject *qtractorMixer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorMixer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorMixer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int qtractorMixer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
