/****************************************************************************
** Meta object code from reading C++ file 'qtractorEditRangeForm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorEditRangeForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorEditRangeForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorEditRangeForm_t {
    const uint offsetsAndSize[16];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorEditRangeForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorEditRangeForm_t qt_meta_stringdata_qtractorEditRangeForm = {
    {
QT_MOC_LITERAL(0, 21), // "qtractorEditRangeForm"
QT_MOC_LITERAL(22, 14), // "optionsChanged"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 12), // "rangeChanged"
QT_MOC_LITERAL(51, 13), // "formatChanged"
QT_MOC_LITERAL(65, 12), // "valueChanged"
QT_MOC_LITERAL(78, 13), // "stabilizeForm"
QT_MOC_LITERAL(92, 6) // "accept"

    },
    "qtractorEditRangeForm\0optionsChanged\0"
    "\0rangeChanged\0formatChanged\0valueChanged\0"
    "stabilizeForm\0accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorEditRangeForm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x09,    1 /* Protected */,
       3,    0,   51,    2, 0x09,    2 /* Protected */,
       4,    1,   52,    2, 0x09,    3 /* Protected */,
       5,    0,   55,    2, 0x09,    5 /* Protected */,
       6,    0,   56,    2, 0x09,    6 /* Protected */,
       7,    0,   57,    2, 0x09,    7 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorEditRangeForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorEditRangeForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->optionsChanged(); break;
        case 1: _t->rangeChanged(); break;
        case 2: _t->formatChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->valueChanged(); break;
        case 4: _t->stabilizeForm(); break;
        case 5: _t->accept(); break;
        default: ;
        }
    }
}

const QMetaObject qtractorEditRangeForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qtractorEditRangeForm.offsetsAndSize,
    qt_meta_data_qtractorEditRangeForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorEditRangeForm_t
, QtPrivate::TypeAndForceComplete<qtractorEditRangeForm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorEditRangeForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorEditRangeForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorEditRangeForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qtractorEditRangeForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
