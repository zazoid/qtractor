/****************************************************************************
** Meta object code from reading C++ file 'qtractorTempoAdjustForm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorTempoAdjustForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorTempoAdjustForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorTempoAdjustForm_t {
    const uint offsetsAndSize[26];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorTempoAdjustForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorTempoAdjustForm_t qt_meta_stringdata_qtractorTempoAdjustForm = {
    {
QT_MOC_LITERAL(0, 23), // "qtractorTempoAdjustForm"
QT_MOC_LITERAL(24, 12), // "tempoChanged"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 11), // "tempoDetect"
QT_MOC_LITERAL(50, 11), // "tempoAdjust"
QT_MOC_LITERAL(62, 8), // "tempoTap"
QT_MOC_LITERAL(71, 17), // "rangeStartChanged"
QT_MOC_LITERAL(89, 18), // "rangeLengthChanged"
QT_MOC_LITERAL(108, 17), // "rangeBeatsChanged"
QT_MOC_LITERAL(126, 13), // "formatChanged"
QT_MOC_LITERAL(140, 7), // "changed"
QT_MOC_LITERAL(148, 6), // "accept"
QT_MOC_LITERAL(155, 6) // "reject"

    },
    "qtractorTempoAdjustForm\0tempoChanged\0"
    "\0tempoDetect\0tempoAdjust\0tempoTap\0"
    "rangeStartChanged\0rangeLengthChanged\0"
    "rangeBeatsChanged\0formatChanged\0changed\0"
    "accept\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorTempoAdjustForm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x09,    1 /* Protected */,
       3,    0,   81,    2, 0x09,    2 /* Protected */,
       4,    0,   82,    2, 0x09,    3 /* Protected */,
       5,    0,   83,    2, 0x09,    4 /* Protected */,
       6,    1,   84,    2, 0x09,    5 /* Protected */,
       7,    1,   87,    2, 0x09,    7 /* Protected */,
       8,    1,   90,    2, 0x09,    9 /* Protected */,
       9,    1,   93,    2, 0x09,   11 /* Protected */,
      10,    0,   96,    2, 0x09,   13 /* Protected */,
      11,    0,   97,    2, 0x09,   14 /* Protected */,
      12,    0,   98,    2, 0x09,   15 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULong,    2,
    QMetaType::Void, QMetaType::ULong,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorTempoAdjustForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorTempoAdjustForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tempoChanged(); break;
        case 1: _t->tempoDetect(); break;
        case 2: _t->tempoAdjust(); break;
        case 3: _t->tempoTap(); break;
        case 4: _t->rangeStartChanged((*reinterpret_cast< std::add_pointer_t<ulong>>(_a[1]))); break;
        case 5: _t->rangeLengthChanged((*reinterpret_cast< std::add_pointer_t<ulong>>(_a[1]))); break;
        case 6: _t->rangeBeatsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->formatChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->changed(); break;
        case 9: _t->accept(); break;
        case 10: _t->reject(); break;
        default: ;
        }
    }
}

const QMetaObject qtractorTempoAdjustForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qtractorTempoAdjustForm.offsetsAndSize,
    qt_meta_data_qtractorTempoAdjustForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorTempoAdjustForm_t
, QtPrivate::TypeAndForceComplete<qtractorTempoAdjustForm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned long, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned long, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorTempoAdjustForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorTempoAdjustForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorTempoAdjustForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qtractorTempoAdjustForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
