/****************************************************************************
** Meta object code from reading C++ file 'qtractorMidiEditView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorMidiEditView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorMidiEditView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorMidiEditView_t {
    const uint offsetsAndSize[14];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorMidiEditView_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorMidiEditView_t qt_meta_stringdata_qtractorMidiEditView = {
    {
QT_MOC_LITERAL(0, 20), // "qtractorMidiEditView"
QT_MOC_LITERAL(21, 19), // "contentsXMovingSlot"
QT_MOC_LITERAL(41, 0), // ""
QT_MOC_LITERAL(42, 2), // "cx"
QT_MOC_LITERAL(45, 2), // "cy"
QT_MOC_LITERAL(48, 19), // "contentsYMovingSlot"
QT_MOC_LITERAL(68, 12) // "updatePixmap"

    },
    "qtractorMidiEditView\0contentsXMovingSlot\0"
    "\0cx\0cy\0contentsYMovingSlot\0updatePixmap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorMidiEditView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x09,    1 /* Protected */,
       5,    2,   37,    2, 0x09,    4 /* Protected */,
       6,    2,   42,    2, 0x09,    7 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

       0        // eod
};

void qtractorMidiEditView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorMidiEditView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->contentsXMovingSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->contentsYMovingSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->updatePixmap((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject qtractorMidiEditView::staticMetaObject = { {
    QMetaObject::SuperData::link<qtractorScrollView::staticMetaObject>(),
    qt_meta_stringdata_qtractorMidiEditView.offsetsAndSize,
    qt_meta_data_qtractorMidiEditView,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorMidiEditView_t
, QtPrivate::TypeAndForceComplete<qtractorMidiEditView, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorMidiEditView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorMidiEditView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorMidiEditView.stringdata0))
        return static_cast<void*>(this);
    return qtractorScrollView::qt_metacast(_clname);
}

int qtractorMidiEditView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qtractorScrollView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
