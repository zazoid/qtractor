/****************************************************************************
** Meta object code from reading C++ file 'qtractorSessionForm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorSessionForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorSessionForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorSessionForm_t {
    const uint offsetsAndSize[24];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorSessionForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorSessionForm_t qt_meta_stringdata_qtractorSessionForm = {
    {
QT_MOC_LITERAL(0, 19), // "qtractorSessionForm"
QT_MOC_LITERAL(20, 6), // "accept"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 6), // "reject"
QT_MOC_LITERAL(35, 7), // "changed"
QT_MOC_LITERAL(43, 17), // "changeSessionName"
QT_MOC_LITERAL(61, 12), // "sSessionName"
QT_MOC_LITERAL(74, 20), // "changeAutoSessionDir"
QT_MOC_LITERAL(95, 3), // "bOn"
QT_MOC_LITERAL(99, 16), // "changeSessionDir"
QT_MOC_LITERAL(116, 11), // "sSessionDir"
QT_MOC_LITERAL(128, 16) // "browseSessionDir"

    },
    "qtractorSessionForm\0accept\0\0reject\0"
    "changed\0changeSessionName\0sSessionName\0"
    "changeAutoSessionDir\0bOn\0changeSessionDir\0"
    "sSessionDir\0browseSessionDir"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorSessionForm[] = {

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
       1,    0,   56,    2, 0x09,    1 /* Protected */,
       3,    0,   57,    2, 0x09,    2 /* Protected */,
       4,    0,   58,    2, 0x09,    3 /* Protected */,
       5,    1,   59,    2, 0x09,    4 /* Protected */,
       7,    1,   62,    2, 0x09,    6 /* Protected */,
       9,    1,   65,    2, 0x09,    8 /* Protected */,
      11,    0,   68,    2, 0x09,   10 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,

       0        // eod
};

void qtractorSessionForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorSessionForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: _t->changed(); break;
        case 3: _t->changeSessionName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->changeAutoSessionDir((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->changeSessionDir((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->browseSessionDir(); break;
        default: ;
        }
    }
}

const QMetaObject qtractorSessionForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qtractorSessionForm.offsetsAndSize,
    qt_meta_data_qtractorSessionForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorSessionForm_t
, QtPrivate::TypeAndForceComplete<qtractorSessionForm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorSessionForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorSessionForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorSessionForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qtractorSessionForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
