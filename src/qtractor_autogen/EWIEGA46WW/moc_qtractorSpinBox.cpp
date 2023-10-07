/****************************************************************************
** Meta object code from reading C++ file 'qtractorSpinBox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorSpinBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorSpinBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorSpinBox_t {
    const uint offsetsAndSize[12];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorSpinBox_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorSpinBox_t qt_meta_stringdata_qtractorSpinBox = {
    {
QT_MOC_LITERAL(0, 15), // "qtractorSpinBox"
QT_MOC_LITERAL(16, 14), // "valueChangedEx"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 19), // "lineEditTextChanged"
QT_MOC_LITERAL(52, 22), // "spinBoxEditingFinished"
QT_MOC_LITERAL(75, 19) // "spinBoxValueChanged"

    },
    "qtractorSpinBox\0valueChangedEx\0\0"
    "lineEditTextChanged\0spinBoxEditingFinished\0"
    "spinBoxValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorSpinBox[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   41,    2, 0x09,    3 /* Protected */,
       4,    0,   44,    2, 0x09,    5 /* Protected */,
       5,    1,   45,    2, 0x09,    6 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void qtractorSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorSpinBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChangedEx((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->lineEditTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->spinBoxEditingFinished(); break;
        case 3: _t->spinBoxValueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorSpinBox::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorSpinBox::valueChangedEx)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qtractorSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QDoubleSpinBox::staticMetaObject>(),
    qt_meta_stringdata_qtractorSpinBox.offsetsAndSize,
    qt_meta_data_qtractorSpinBox,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorSpinBox_t
, QtPrivate::TypeAndForceComplete<qtractorSpinBox, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QDoubleSpinBox::qt_metacast(_clname);
}

int qtractorSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
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
void qtractorSpinBox::valueChangedEx(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qtractorTimeSpinBox_t {
    const uint offsetsAndSize[12];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorTimeSpinBox_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorTimeSpinBox_t qt_meta_stringdata_qtractorTimeSpinBox = {
    {
QT_MOC_LITERAL(0, 19), // "qtractorTimeSpinBox"
QT_MOC_LITERAL(20, 12), // "valueChanged"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 20), // "displayFormatChanged"
QT_MOC_LITERAL(55, 19), // "editingFinishedSlot"
QT_MOC_LITERAL(75, 16) // "valueChangedSlot"

    },
    "qtractorTimeSpinBox\0valueChanged\0\0"
    "displayFormatChanged\0editingFinishedSlot\0"
    "valueChangedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorTimeSpinBox[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       1,    1,   47,    2, 0x06,    3 /* Public */,
       3,    1,   50,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   53,    2, 0x09,    7 /* Protected */,
       5,    1,   54,    2, 0x09,    8 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULong,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void qtractorTimeSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorTimeSpinBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<ulong>>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->displayFormatChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->editingFinishedSlot(); break;
        case 4: _t->valueChangedSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorTimeSpinBox::*)(unsigned long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorTimeSpinBox::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qtractorTimeSpinBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorTimeSpinBox::valueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qtractorTimeSpinBox::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorTimeSpinBox::displayFormatChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject qtractorTimeSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractSpinBox::staticMetaObject>(),
    qt_meta_stringdata_qtractorTimeSpinBox.offsetsAndSize,
    qt_meta_data_qtractorTimeSpinBox,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorTimeSpinBox_t
, QtPrivate::TypeAndForceComplete<qtractorTimeSpinBox, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned long, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorTimeSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorTimeSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorTimeSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSpinBox::qt_metacast(_clname);
}

int qtractorTimeSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
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
void qtractorTimeSpinBox::valueChanged(unsigned long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qtractorTimeSpinBox::valueChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qtractorTimeSpinBox::displayFormatChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_qtractorTempoSpinBox_t {
    const uint offsetsAndSize[10];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorTempoSpinBox_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorTempoSpinBox_t qt_meta_stringdata_qtractorTempoSpinBox = {
    {
QT_MOC_LITERAL(0, 20), // "qtractorTempoSpinBox"
QT_MOC_LITERAL(21, 12), // "valueChanged"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 16), // "valueChangedSlot"
QT_MOC_LITERAL(52, 19) // "editingFinishedSlot"

    },
    "qtractorTempoSpinBox\0valueChanged\0\0"
    "valueChangedSlot\0editingFinishedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorTempoSpinBox[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   38,    2, 0x06,    1 /* Public */,
       1,    1,   45,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   48,    2, 0x09,    7 /* Protected */,
       4,    0,   51,    2, 0x09,    9 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::UShort, QMetaType::UShort,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void qtractorTempoSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorTempoSpinBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ushort>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ushort>>(_a[3]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->valueChangedSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->editingFinishedSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorTempoSpinBox::*)(float , unsigned short , unsigned short );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorTempoSpinBox::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qtractorTempoSpinBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorTempoSpinBox::valueChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject qtractorTempoSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractSpinBox::staticMetaObject>(),
    qt_meta_stringdata_qtractorTempoSpinBox.offsetsAndSize,
    qt_meta_data_qtractorTempoSpinBox,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorTempoSpinBox_t
, QtPrivate::TypeAndForceComplete<qtractorTempoSpinBox, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned short, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned short, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorTempoSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorTempoSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorTempoSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSpinBox::qt_metacast(_clname);
}

int qtractorTempoSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
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
void qtractorTempoSpinBox::valueChanged(float _t1, unsigned short _t2, unsigned short _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qtractorTempoSpinBox::valueChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
