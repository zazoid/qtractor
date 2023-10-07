/****************************************************************************
** Meta object code from reading C++ file 'qtractorTrackList.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorTrackList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorTrackList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorTrackList_t {
    const uint offsetsAndSize[22];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorTrackList_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorTrackList_t qt_meta_stringdata_qtractorTrackList = {
    {
QT_MOC_LITERAL(0, 17), // "qtractorTrackList"
QT_MOC_LITERAL(18, 16), // "selectionChanged"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 19), // "contentsYMovingSlot"
QT_MOC_LITERAL(56, 2), // "cx"
QT_MOC_LITERAL(59, 2), // "cy"
QT_MOC_LITERAL(62, 12), // "updatePixmap"
QT_MOC_LITERAL(75, 16), // "updateHeaderSize"
QT_MOC_LITERAL(92, 4), // "iCol"
QT_MOC_LITERAL(97, 8), // "iColSize"
QT_MOC_LITERAL(106, 15) // "resetHeaderSize"

    },
    "qtractorTrackList\0selectionChanged\0\0"
    "contentsYMovingSlot\0cx\0cy\0updatePixmap\0"
    "updateHeaderSize\0iCol\0iColSize\0"
    "resetHeaderSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorTrackList[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    2,   45,    2, 0x09,    2 /* Protected */,
       6,    2,   50,    2, 0x09,    5 /* Protected */,
       7,    3,   55,    2, 0x09,    8 /* Protected */,
      10,    1,   62,    2, 0x09,   12 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    2,    9,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void qtractorTrackList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorTrackList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->contentsYMovingSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->updatePixmap((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->updateHeaderSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 4: _t->resetHeaderSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorTrackList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorTrackList::selectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qtractorTrackList::staticMetaObject = { {
    QMetaObject::SuperData::link<qtractorScrollView::staticMetaObject>(),
    qt_meta_stringdata_qtractorTrackList.offsetsAndSize,
    qt_meta_data_qtractorTrackList,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorTrackList_t
, QtPrivate::TypeAndForceComplete<qtractorTrackList, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorTrackList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorTrackList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorTrackList.stringdata0))
        return static_cast<void*>(this);
    return qtractorScrollView::qt_metacast(_clname);
}

int qtractorTrackList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void qtractorTrackList::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
