/****************************************************************************
** Meta object code from reading C++ file 'qtractorObserverWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorObserverWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorObserverWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorObserverCheckBox_t {
    const uint offsetsAndSize[10];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorObserverCheckBox_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorObserverCheckBox_t qt_meta_stringdata_qtractorObserverCheckBox = {
    {
QT_MOC_LITERAL(0, 24), // "qtractorObserverCheckBox"
QT_MOC_LITERAL(25, 12), // "valueChanged"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 15), // "checkBoxChanged"
QT_MOC_LITERAL(55, 6) // "bValue"

    },
    "qtractorObserverCheckBox\0valueChanged\0"
    "\0checkBoxChanged\0bValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorObserverCheckBox[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   29,    2, 0x09,    3 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void qtractorObserverCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorObserverCheckBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 1: _t->checkBoxChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorObserverCheckBox::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorObserverCheckBox::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qtractorObserverCheckBox::staticMetaObject = { {
    QMetaObject::SuperData::link<qtractorObserverWidget<QCheckBox>::staticMetaObject>(),
    qt_meta_stringdata_qtractorObserverCheckBox.offsetsAndSize,
    qt_meta_data_qtractorObserverCheckBox,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorObserverCheckBox_t
, QtPrivate::TypeAndForceComplete<qtractorObserverCheckBox, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorObserverCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorObserverCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorObserverCheckBox.stringdata0))
        return static_cast<void*>(this);
    return qtractorObserverWidget<QCheckBox>::qt_metacast(_clname);
}

int qtractorObserverCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qtractorObserverWidget<QCheckBox>::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void qtractorObserverCheckBox::valueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qtractorObserverSpinBox_t {
    const uint offsetsAndSize[10];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorObserverSpinBox_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorObserverSpinBox_t qt_meta_stringdata_qtractorObserverSpinBox = {
    {
QT_MOC_LITERAL(0, 23), // "qtractorObserverSpinBox"
QT_MOC_LITERAL(24, 12), // "valueChanged"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 14), // "spinBoxChanged"
QT_MOC_LITERAL(53, 5) // "value"

    },
    "qtractorObserverSpinBox\0valueChanged\0"
    "\0spinBoxChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorObserverSpinBox[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   29,    2, 0x09,    3 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    4,

       0        // eod
};

void qtractorObserverSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorObserverSpinBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 1: _t->spinBoxChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorObserverSpinBox::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorObserverSpinBox::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qtractorObserverSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<qtractorObserverWidget<qtractorSpinBox>::staticMetaObject>(),
    qt_meta_stringdata_qtractorObserverSpinBox.offsetsAndSize,
    qt_meta_data_qtractorObserverSpinBox,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorObserverSpinBox_t
, QtPrivate::TypeAndForceComplete<qtractorObserverSpinBox, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorObserverSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorObserverSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorObserverSpinBox.stringdata0))
        return static_cast<void*>(this);
    return qtractorObserverWidget<qtractorSpinBox>::qt_metacast(_clname);
}

int qtractorObserverSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qtractorObserverWidget<qtractorSpinBox>::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void qtractorObserverSpinBox::valueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qtractorObserverSlider_t {
    const uint offsetsAndSize[10];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorObserverSlider_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorObserverSlider_t qt_meta_stringdata_qtractorObserverSlider = {
    {
QT_MOC_LITERAL(0, 22), // "qtractorObserverSlider"
QT_MOC_LITERAL(23, 12), // "valueChanged"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 13), // "sliderChanged"
QT_MOC_LITERAL(51, 6) // "iValue"

    },
    "qtractorObserverSlider\0valueChanged\0"
    "\0sliderChanged\0iValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorObserverSlider[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   29,    2, 0x09,    3 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void qtractorObserverSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorObserverSlider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 1: _t->sliderChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorObserverSlider::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorObserverSlider::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qtractorObserverSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<qtractorObserverWidget<QSlider>::staticMetaObject>(),
    qt_meta_stringdata_qtractorObserverSlider.offsetsAndSize,
    qt_meta_data_qtractorObserverSlider,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorObserverSlider_t
, QtPrivate::TypeAndForceComplete<qtractorObserverSlider, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorObserverSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorObserverSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorObserverSlider.stringdata0))
        return static_cast<void*>(this);
    return qtractorObserverWidget<QSlider>::qt_metacast(_clname);
}

int qtractorObserverSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qtractorObserverWidget<QSlider>::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void qtractorObserverSlider::valueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
