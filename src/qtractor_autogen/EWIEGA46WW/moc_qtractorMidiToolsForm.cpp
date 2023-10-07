/****************************************************************************
** Meta object code from reading C++ file 'qtractorMidiToolsForm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorMidiToolsForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorMidiToolsForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorMidiToolsForm_t {
    const uint offsetsAndSize[34];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorMidiToolsForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorMidiToolsForm_t qt_meta_stringdata_qtractorMidiToolsForm = {
    {
QT_MOC_LITERAL(0, 21), // "qtractorMidiToolsForm"
QT_MOC_LITERAL(22, 13), // "presetChanged"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 7), // "sPreset"
QT_MOC_LITERAL(45, 15), // "presetActivated"
QT_MOC_LITERAL(61, 7), // "iPreset"
QT_MOC_LITERAL(69, 10), // "presetSave"
QT_MOC_LITERAL(80, 12), // "presetDelete"
QT_MOC_LITERAL(93, 23), // "timeshiftSpinBoxChanged"
QT_MOC_LITERAL(117, 1), // "p"
QT_MOC_LITERAL(119, 22), // "timeshiftSliderChanged"
QT_MOC_LITERAL(142, 1), // "i"
QT_MOC_LITERAL(144, 13), // "formatChanged"
QT_MOC_LITERAL(158, 7), // "changed"
QT_MOC_LITERAL(166, 6), // "accept"
QT_MOC_LITERAL(173, 6), // "reject"
QT_MOC_LITERAL(180, 13) // "stabilizeForm"

    },
    "qtractorMidiToolsForm\0presetChanged\0"
    "\0sPreset\0presetActivated\0iPreset\0"
    "presetSave\0presetDelete\0timeshiftSpinBoxChanged\0"
    "p\0timeshiftSliderChanged\0i\0formatChanged\0"
    "changed\0accept\0reject\0stabilizeForm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorMidiToolsForm[] = {

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
       1,    1,   80,    2, 0x09,    1 /* Protected */,
       4,    1,   83,    2, 0x09,    3 /* Protected */,
       6,    0,   86,    2, 0x09,    5 /* Protected */,
       7,    0,   87,    2, 0x09,    6 /* Protected */,
       8,    1,   88,    2, 0x09,    7 /* Protected */,
      10,    1,   91,    2, 0x09,    9 /* Protected */,
      12,    1,   94,    2, 0x09,   11 /* Protected */,
      13,    0,   97,    2, 0x09,   13 /* Protected */,
      14,    0,   98,    2, 0x09,   14 /* Protected */,
      15,    0,   99,    2, 0x09,   15 /* Protected */,
      16,    0,  100,    2, 0x09,   16 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorMidiToolsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorMidiToolsForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->presetChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->presetActivated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->presetSave(); break;
        case 3: _t->presetDelete(); break;
        case 4: _t->timeshiftSpinBoxChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->timeshiftSliderChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->formatChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->changed(); break;
        case 8: _t->accept(); break;
        case 9: _t->reject(); break;
        case 10: _t->stabilizeForm(); break;
        default: ;
        }
    }
}

const QMetaObject qtractorMidiToolsForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qtractorMidiToolsForm.offsetsAndSize,
    qt_meta_data_qtractorMidiToolsForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorMidiToolsForm_t
, QtPrivate::TypeAndForceComplete<qtractorMidiToolsForm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorMidiToolsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorMidiToolsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorMidiToolsForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qtractorMidiToolsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
