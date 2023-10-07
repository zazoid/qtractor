/****************************************************************************
** Meta object code from reading C++ file 'qtractorMidiControlTypeGroup.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorMidiControlTypeGroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorMidiControlTypeGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorMidiControlTypeGroup_t {
    const uint offsetsAndSize[14];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorMidiControlTypeGroup_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorMidiControlTypeGroup_t qt_meta_stringdata_qtractorMidiControlTypeGroup = {
    {
QT_MOC_LITERAL(0, 28), // "qtractorMidiControlTypeGroup"
QT_MOC_LITERAL(29, 18), // "controlTypeChanged"
QT_MOC_LITERAL(48, 0), // ""
QT_MOC_LITERAL(49, 19), // "controlParamChanged"
QT_MOC_LITERAL(69, 19), // "activateControlType"
QT_MOC_LITERAL(89, 20), // "activateControlParam"
QT_MOC_LITERAL(110, 24) // "editControlParamFinished"

    },
    "qtractorMidiControlTypeGroup\0"
    "controlTypeChanged\0\0controlParamChanged\0"
    "activateControlType\0activateControlParam\0"
    "editControlParamFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorMidiControlTypeGroup[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       3,    1,   47,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   50,    2, 0x09,    5 /* Protected */,
       5,    1,   53,    2, 0x09,    7 /* Protected */,
       6,    0,   56,    2, 0x09,    9 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void qtractorMidiControlTypeGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorMidiControlTypeGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->controlTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->controlParamChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->activateControlType((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->activateControlParam((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->editControlParamFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorMidiControlTypeGroup::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorMidiControlTypeGroup::controlTypeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qtractorMidiControlTypeGroup::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorMidiControlTypeGroup::controlParamChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject qtractorMidiControlTypeGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qtractorMidiControlTypeGroup.offsetsAndSize,
    qt_meta_data_qtractorMidiControlTypeGroup,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorMidiControlTypeGroup_t
, QtPrivate::TypeAndForceComplete<qtractorMidiControlTypeGroup, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorMidiControlTypeGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorMidiControlTypeGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorMidiControlTypeGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qtractorMidiControlTypeGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void qtractorMidiControlTypeGroup::controlTypeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qtractorMidiControlTypeGroup::controlParamChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
