/****************************************************************************
** Meta object code from reading C++ file 'qtractorPluginSelectForm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorPluginSelectForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorPluginSelectForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorPluginSelectForm_t {
    const uint offsetsAndSize[22];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorPluginSelectForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorPluginSelectForm_t qt_meta_stringdata_qtractorPluginSelectForm = {
    {
QT_MOC_LITERAL(0, 24), // "qtractorPluginSelectForm"
QT_MOC_LITERAL(25, 15), // "typeHintChanged"
QT_MOC_LITERAL(41, 0), // ""
QT_MOC_LITERAL(42, 9), // "iTypeHint"
QT_MOC_LITERAL(52, 5), // "reset"
QT_MOC_LITERAL(58, 6), // "rescan"
QT_MOC_LITERAL(65, 7), // "refresh"
QT_MOC_LITERAL(73, 7), // "scanned"
QT_MOC_LITERAL(81, 8), // "iPercent"
QT_MOC_LITERAL(90, 9), // "stabilize"
QT_MOC_LITERAL(100, 6) // "accept"

    },
    "qtractorPluginSelectForm\0typeHintChanged\0"
    "\0iTypeHint\0reset\0rescan\0refresh\0scanned\0"
    "iPercent\0stabilize\0accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorPluginSelectForm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x09,    1 /* Protected */,
       4,    0,   59,    2, 0x09,    3 /* Protected */,
       5,    0,   60,    2, 0x09,    4 /* Protected */,
       6,    0,   61,    2, 0x09,    5 /* Protected */,
       7,    1,   62,    2, 0x09,    6 /* Protected */,
       9,    0,   65,    2, 0x09,    8 /* Protected */,
      10,    0,   66,    2, 0x09,    9 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorPluginSelectForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorPluginSelectForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->typeHintChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->reset(); break;
        case 2: _t->rescan(); break;
        case 3: _t->refresh(); break;
        case 4: _t->scanned((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->stabilize(); break;
        case 6: _t->accept(); break;
        default: ;
        }
    }
}

const QMetaObject qtractorPluginSelectForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qtractorPluginSelectForm.offsetsAndSize,
    qt_meta_data_qtractorPluginSelectForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorPluginSelectForm_t
, QtPrivate::TypeAndForceComplete<qtractorPluginSelectForm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorPluginSelectForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorPluginSelectForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorPluginSelectForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qtractorPluginSelectForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
