/****************************************************************************
** Meta object code from reading C++ file 'qtractorTakeRangeForm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorTakeRangeForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorTakeRangeForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorTakeRangeForm_t {
    const uint offsetsAndSize[14];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorTakeRangeForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorTakeRangeForm_t qt_meta_stringdata_qtractorTakeRangeForm = {
    {
QT_MOC_LITERAL(0, 21), // "qtractorTakeRangeForm"
QT_MOC_LITERAL(22, 12), // "rangeChanged"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 13), // "formatChanged"
QT_MOC_LITERAL(50, 12), // "valueChanged"
QT_MOC_LITERAL(63, 17), // "updateCurrentTake"
QT_MOC_LITERAL(81, 13) // "stabilizeForm"

    },
    "qtractorTakeRangeForm\0rangeChanged\0\0"
    "formatChanged\0valueChanged\0updateCurrentTake\0"
    "stabilizeForm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorTakeRangeForm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x09,    1 /* Protected */,
       3,    1,   45,    2, 0x09,    2 /* Protected */,
       4,    0,   48,    2, 0x09,    4 /* Protected */,
       5,    0,   49,    2, 0x09,    5 /* Protected */,
       6,    0,   50,    2, 0x09,    6 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorTakeRangeForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorTakeRangeForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rangeChanged(); break;
        case 1: _t->formatChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->valueChanged(); break;
        case 3: _t->updateCurrentTake(); break;
        case 4: _t->stabilizeForm(); break;
        default: ;
        }
    }
}

const QMetaObject qtractorTakeRangeForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qtractorTakeRangeForm.offsetsAndSize,
    qt_meta_data_qtractorTakeRangeForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorTakeRangeForm_t
, QtPrivate::TypeAndForceComplete<qtractorTakeRangeForm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorTakeRangeForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorTakeRangeForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorTakeRangeForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qtractorTakeRangeForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
