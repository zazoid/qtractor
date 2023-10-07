/****************************************************************************
** Meta object code from reading C++ file 'qtractorTimeScaleForm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorTimeScaleForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorTimeScaleForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorTimeScaleForm_t {
    const uint offsetsAndSize[40];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorTimeScaleForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorTimeScaleForm_t qt_meta_stringdata_qtractorTimeScaleForm = {
    {
QT_MOC_LITERAL(0, 21), // "qtractorTimeScaleForm"
QT_MOC_LITERAL(22, 6), // "reject"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 7), // "refresh"
QT_MOC_LITERAL(38, 10), // "selectItem"
QT_MOC_LITERAL(49, 7), // "addItem"
QT_MOC_LITERAL(57, 10), // "updateItem"
QT_MOC_LITERAL(68, 10), // "removeItem"
QT_MOC_LITERAL(79, 12), // "refreshItems"
QT_MOC_LITERAL(92, 10), // "barChanged"
QT_MOC_LITERAL(103, 11), // "timeChanged"
QT_MOC_LITERAL(115, 12), // "tempoChanged"
QT_MOC_LITERAL(128, 18), // "accidentalsChanged"
QT_MOC_LITERAL(147, 11), // "modeChanged"
QT_MOC_LITERAL(159, 7), // "changed"
QT_MOC_LITERAL(167, 8), // "tempoTap"
QT_MOC_LITERAL(176, 11), // "tempoFactor"
QT_MOC_LITERAL(188, 11), // "markerColor"
QT_MOC_LITERAL(200, 11), // "contextMenu"
QT_MOC_LITERAL(212, 13) // "stabilizeForm"

    },
    "qtractorTimeScaleForm\0reject\0\0refresh\0"
    "selectItem\0addItem\0updateItem\0removeItem\0"
    "refreshItems\0barChanged\0timeChanged\0"
    "tempoChanged\0accidentalsChanged\0"
    "modeChanged\0changed\0tempoTap\0tempoFactor\0"
    "markerColor\0contextMenu\0stabilizeForm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorTimeScaleForm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x09,    1 /* Protected */,
       3,    0,  123,    2, 0x09,    2 /* Protected */,
       4,    0,  124,    2, 0x09,    3 /* Protected */,
       5,    0,  125,    2, 0x09,    4 /* Protected */,
       6,    0,  126,    2, 0x09,    5 /* Protected */,
       7,    0,  127,    2, 0x09,    6 /* Protected */,
       8,    0,  128,    2, 0x09,    7 /* Protected */,
       9,    1,  129,    2, 0x09,    8 /* Protected */,
      10,    1,  132,    2, 0x09,   10 /* Protected */,
      11,    0,  135,    2, 0x09,   12 /* Protected */,
      12,    1,  136,    2, 0x09,   13 /* Protected */,
      13,    1,  139,    2, 0x09,   15 /* Protected */,
      14,    0,  142,    2, 0x09,   17 /* Protected */,
      15,    0,  143,    2, 0x09,   18 /* Protected */,
      16,    0,  144,    2, 0x09,   19 /* Protected */,
      17,    0,  145,    2, 0x09,   20 /* Protected */,
      18,    1,  146,    2, 0x09,   21 /* Protected */,
      19,    0,  149,    2, 0x09,   23 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::ULong,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,

       0        // eod
};

void qtractorTimeScaleForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorTimeScaleForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->reject(); break;
        case 1: _t->refresh(); break;
        case 2: _t->selectItem(); break;
        case 3: _t->addItem(); break;
        case 4: _t->updateItem(); break;
        case 5: _t->removeItem(); break;
        case 6: _t->refreshItems(); break;
        case 7: _t->barChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->timeChanged((*reinterpret_cast< std::add_pointer_t<ulong>>(_a[1]))); break;
        case 9: _t->tempoChanged(); break;
        case 10: _t->accidentalsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->modeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->changed(); break;
        case 13: _t->tempoTap(); break;
        case 14: _t->tempoFactor(); break;
        case 15: _t->markerColor(); break;
        case 16: _t->contextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 17: _t->stabilizeForm(); break;
        default: ;
        }
    }
}

const QMetaObject qtractorTimeScaleForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qtractorTimeScaleForm.offsetsAndSize,
    qt_meta_data_qtractorTimeScaleForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorTimeScaleForm_t
, QtPrivate::TypeAndForceComplete<qtractorTimeScaleForm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned long, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorTimeScaleForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorTimeScaleForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorTimeScaleForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qtractorTimeScaleForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
