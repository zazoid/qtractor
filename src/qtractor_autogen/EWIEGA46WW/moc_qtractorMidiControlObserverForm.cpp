/****************************************************************************
** Meta object code from reading C++ file 'qtractorMidiControlObserverForm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorMidiControlObserverForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorMidiControlObserverForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorMidiControlObserverForm_t {
    const uint offsetsAndSize[22];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorMidiControlObserverForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorMidiControlObserverForm_t qt_meta_stringdata_qtractorMidiControlObserverForm = {
    {
QT_MOC_LITERAL(0, 31), // "qtractorMidiControlObserverForm"
QT_MOC_LITERAL(32, 6), // "change"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 5), // "click"
QT_MOC_LITERAL(46, 16), // "QAbstractButton*"
QT_MOC_LITERAL(63, 6), // "accept"
QT_MOC_LITERAL(70, 6), // "reject"
QT_MOC_LITERAL(77, 6), // "inputs"
QT_MOC_LITERAL(84, 7), // "outputs"
QT_MOC_LITERAL(92, 5), // "reset"
QT_MOC_LITERAL(98, 13) // "stabilizeForm"

    },
    "qtractorMidiControlObserverForm\0change\0"
    "\0click\0QAbstractButton*\0accept\0reject\0"
    "inputs\0outputs\0reset\0stabilizeForm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorMidiControlObserverForm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x09,    1 /* Protected */,
       3,    1,   63,    2, 0x09,    2 /* Protected */,
       5,    0,   66,    2, 0x09,    4 /* Protected */,
       6,    0,   67,    2, 0x09,    5 /* Protected */,
       7,    0,   68,    2, 0x09,    6 /* Protected */,
       8,    0,   69,    2, 0x09,    7 /* Protected */,
       9,    0,   70,    2, 0x09,    8 /* Protected */,
      10,    0,   71,    2, 0x09,    9 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorMidiControlObserverForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorMidiControlObserverForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->change(); break;
        case 1: _t->click((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 2: _t->accept(); break;
        case 3: _t->reject(); break;
        case 4: _t->inputs(); break;
        case 5: _t->outputs(); break;
        case 6: _t->reset(); break;
        case 7: _t->stabilizeForm(); break;
        default: ;
        }
    }
}

const QMetaObject qtractorMidiControlObserverForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qtractorMidiControlObserverForm.offsetsAndSize,
    qt_meta_data_qtractorMidiControlObserverForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorMidiControlObserverForm_t
, QtPrivate::TypeAndForceComplete<qtractorMidiControlObserverForm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorMidiControlObserverForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorMidiControlObserverForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorMidiControlObserverForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qtractorMidiControlObserverForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
