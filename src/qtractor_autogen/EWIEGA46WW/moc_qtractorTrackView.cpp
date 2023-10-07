/****************************************************************************
** Meta object code from reading C++ file 'qtractorTrackView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorTrackView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorTrackView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorTrackView_t {
    const uint offsetsAndSize[18];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorTrackView_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorTrackView_t qt_meta_stringdata_qtractorTrackView = {
    {
QT_MOC_LITERAL(0, 17), // "qtractorTrackView"
QT_MOC_LITERAL(18, 19), // "contentsYMovingSlot"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 2), // "cx"
QT_MOC_LITERAL(42, 2), // "cy"
QT_MOC_LITERAL(45, 12), // "updatePixmap"
QT_MOC_LITERAL(58, 11), // "dragTimeout"
QT_MOC_LITERAL(70, 20), // "editCurveNodeChanged"
QT_MOC_LITERAL(91, 21) // "editCurveNodeFinished"

    },
    "qtractorTrackView\0contentsYMovingSlot\0"
    "\0cx\0cy\0updatePixmap\0dragTimeout\0"
    "editCurveNodeChanged\0editCurveNodeFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorTrackView[] = {

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
       1,    2,   44,    2, 0x09,    1 /* Protected */,
       5,    2,   49,    2, 0x09,    4 /* Protected */,
       6,    0,   54,    2, 0x09,    7 /* Protected */,
       7,    0,   55,    2, 0x09,    8 /* Protected */,
       8,    0,   56,    2, 0x09,    9 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorTrackView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorTrackView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->contentsYMovingSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->updatePixmap((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->dragTimeout(); break;
        case 3: _t->editCurveNodeChanged(); break;
        case 4: _t->editCurveNodeFinished(); break;
        default: ;
        }
    }
}

const QMetaObject qtractorTrackView::staticMetaObject = { {
    QMetaObject::SuperData::link<qtractorScrollView::staticMetaObject>(),
    qt_meta_stringdata_qtractorTrackView.offsetsAndSize,
    qt_meta_data_qtractorTrackView,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorTrackView_t
, QtPrivate::TypeAndForceComplete<qtractorTrackView, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorTrackView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorTrackView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorTrackView.stringdata0))
        return static_cast<void*>(this);
    return qtractorScrollView::qt_metacast(_clname);
}

int qtractorTrackView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qtractorScrollView::qt_metacall(_c, _id, _a);
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
