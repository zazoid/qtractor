/****************************************************************************
** Meta object code from reading C++ file 'qtractorMidiControlForm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorMidiControlForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorMidiControlForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorMidiControlForm_t {
    const uint offsetsAndSize[32];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorMidiControlForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorMidiControlForm_t qt_meta_stringdata_qtractorMidiControlForm = {
    {
QT_MOC_LITERAL(0, 23), // "qtractorMidiControlForm"
QT_MOC_LITERAL(24, 6), // "reject"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 10), // "importSlot"
QT_MOC_LITERAL(43, 10), // "removeSlot"
QT_MOC_LITERAL(54, 10), // "moveUpSlot"
QT_MOC_LITERAL(65, 12), // "moveDownSlot"
QT_MOC_LITERAL(78, 7), // "mapSlot"
QT_MOC_LITERAL(86, 9), // "unmapSlot"
QT_MOC_LITERAL(96, 8), // "syncSlot"
QT_MOC_LITERAL(105, 10), // "reloadSlot"
QT_MOC_LITERAL(116, 10), // "exportSlot"
QT_MOC_LITERAL(127, 15), // "typeChangedSlot"
QT_MOC_LITERAL(143, 14), // "keyChangedSlot"
QT_MOC_LITERAL(158, 16), // "valueChangedSlot"
QT_MOC_LITERAL(175, 13) // "stabilizeForm"

    },
    "qtractorMidiControlForm\0reject\0\0"
    "importSlot\0removeSlot\0moveUpSlot\0"
    "moveDownSlot\0mapSlot\0unmapSlot\0syncSlot\0"
    "reloadSlot\0exportSlot\0typeChangedSlot\0"
    "keyChangedSlot\0valueChangedSlot\0"
    "stabilizeForm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorMidiControlForm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x09,    1 /* Protected */,
       3,    0,   99,    2, 0x09,    2 /* Protected */,
       4,    0,  100,    2, 0x09,    3 /* Protected */,
       5,    0,  101,    2, 0x09,    4 /* Protected */,
       6,    0,  102,    2, 0x09,    5 /* Protected */,
       7,    0,  103,    2, 0x09,    6 /* Protected */,
       8,    0,  104,    2, 0x09,    7 /* Protected */,
       9,    1,  105,    2, 0x09,    8 /* Protected */,
      10,    0,  108,    2, 0x09,   10 /* Protected */,
      11,    0,  109,    2, 0x09,   11 /* Protected */,
      12,    0,  110,    2, 0x09,   12 /* Protected */,
      13,    0,  111,    2, 0x09,   13 /* Protected */,
      14,    0,  112,    2, 0x09,   14 /* Protected */,
      15,    0,  113,    2, 0x09,   15 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorMidiControlForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorMidiControlForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->reject(); break;
        case 1: _t->importSlot(); break;
        case 2: _t->removeSlot(); break;
        case 3: _t->moveUpSlot(); break;
        case 4: _t->moveDownSlot(); break;
        case 5: _t->mapSlot(); break;
        case 6: _t->unmapSlot(); break;
        case 7: _t->syncSlot((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->reloadSlot(); break;
        case 9: _t->exportSlot(); break;
        case 10: _t->typeChangedSlot(); break;
        case 11: _t->keyChangedSlot(); break;
        case 12: _t->valueChangedSlot(); break;
        case 13: _t->stabilizeForm(); break;
        default: ;
        }
    }
}

const QMetaObject qtractorMidiControlForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qtractorMidiControlForm.offsetsAndSize,
    qt_meta_data_qtractorMidiControlForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorMidiControlForm_t
, QtPrivate::TypeAndForceComplete<qtractorMidiControlForm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorMidiControlForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorMidiControlForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorMidiControlForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qtractorMidiControlForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
