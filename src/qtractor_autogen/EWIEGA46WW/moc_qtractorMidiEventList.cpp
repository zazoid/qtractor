/****************************************************************************
** Meta object code from reading C++ file 'qtractorMidiEventList.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorMidiEventList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorMidiEventList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorMidiEventList_t {
    const uint offsetsAndSize[18];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorMidiEventList_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorMidiEventList_t qt_meta_stringdata_qtractorMidiEventList = {
    {
QT_MOC_LITERAL(0, 21), // "qtractorMidiEventList"
QT_MOC_LITERAL(22, 21), // "currentRowChangedSlot"
QT_MOC_LITERAL(44, 0), // ""
QT_MOC_LITERAL(45, 11), // "QModelIndex"
QT_MOC_LITERAL(57, 20), // "selectionChangedSlot"
QT_MOC_LITERAL(78, 14), // "QItemSelection"
QT_MOC_LITERAL(93, 16), // "selectNotifySlot"
QT_MOC_LITERAL(110, 19), // "qtractorMidiEditor*"
QT_MOC_LITERAL(130, 16) // "changeNotifySlot"

    },
    "qtractorMidiEventList\0currentRowChangedSlot\0"
    "\0QModelIndex\0selectionChangedSlot\0"
    "QItemSelection\0selectNotifySlot\0"
    "qtractorMidiEditor*\0changeNotifySlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorMidiEventList[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x09,    1 /* Protected */,
       4,    2,   43,    2, 0x09,    4 /* Protected */,
       6,    1,   48,    2, 0x09,    7 /* Protected */,
       8,    1,   51,    2, 0x09,    9 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    2,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void qtractorMidiEventList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorMidiEventList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentRowChangedSlot((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 1: _t->selectionChangedSlot((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 2: _t->selectNotifySlot((*reinterpret_cast< std::add_pointer_t<qtractorMidiEditor*>>(_a[1]))); break;
        case 3: _t->changeNotifySlot((*reinterpret_cast< std::add_pointer_t<qtractorMidiEditor*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    }
}

const QMetaObject qtractorMidiEventList::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_qtractorMidiEventList.offsetsAndSize,
    qt_meta_data_qtractorMidiEventList,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorMidiEventList_t
, QtPrivate::TypeAndForceComplete<qtractorMidiEventList, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>, QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qtractorMidiEditor *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qtractorMidiEditor *, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorMidiEventList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorMidiEventList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorMidiEventList.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int qtractorMidiEventList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
