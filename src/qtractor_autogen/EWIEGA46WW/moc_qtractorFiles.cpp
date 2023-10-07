/****************************************************************************
** Meta object code from reading C++ file 'qtractorFiles.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorFiles.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorFiles.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorFiles_t {
    const uint offsetsAndSize[30];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorFiles_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorFiles_t qt_meta_stringdata_qtractorFiles = {
    {
QT_MOC_LITERAL(0, 13), // "qtractorFiles"
QT_MOC_LITERAL(14, 11), // "cutItemSlot"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 12), // "copyItemSlot"
QT_MOC_LITERAL(40, 13), // "pasteItemSlot"
QT_MOC_LITERAL(54, 14), // "removeItemSlot"
QT_MOC_LITERAL(69, 12), // "newGroupSlot"
QT_MOC_LITERAL(82, 12), // "openFileSlot"
QT_MOC_LITERAL(95, 14), // "renameItemSlot"
QT_MOC_LITERAL(110, 8), // "playSlot"
QT_MOC_LITERAL(119, 3), // "bOn"
QT_MOC_LITERAL(123, 11), // "cleanupSlot"
QT_MOC_LITERAL(135, 13), // "pageAudioSlot"
QT_MOC_LITERAL(149, 12), // "pageMidiSlot"
QT_MOC_LITERAL(162, 13) // "stabilizeSlot"

    },
    "qtractorFiles\0cutItemSlot\0\0copyItemSlot\0"
    "pasteItemSlot\0removeItemSlot\0newGroupSlot\0"
    "openFileSlot\0renameItemSlot\0playSlot\0"
    "bOn\0cleanupSlot\0pageAudioSlot\0"
    "pageMidiSlot\0stabilizeSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorFiles[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x0a,    1 /* Public */,
       3,    0,   87,    2, 0x0a,    2 /* Public */,
       4,    0,   88,    2, 0x0a,    3 /* Public */,
       5,    0,   89,    2, 0x0a,    4 /* Public */,
       6,    0,   90,    2, 0x09,    5 /* Protected */,
       7,    0,   91,    2, 0x09,    6 /* Protected */,
       8,    0,   92,    2, 0x09,    7 /* Protected */,
       9,    1,   93,    2, 0x09,    8 /* Protected */,
      11,    0,   96,    2, 0x09,   10 /* Protected */,
      12,    0,   97,    2, 0x09,   11 /* Protected */,
      13,    0,   98,    2, 0x09,   12 /* Protected */,
      14,    0,   99,    2, 0x09,   13 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorFiles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorFiles *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cutItemSlot(); break;
        case 1: _t->copyItemSlot(); break;
        case 2: _t->pasteItemSlot(); break;
        case 3: _t->removeItemSlot(); break;
        case 4: _t->newGroupSlot(); break;
        case 5: _t->openFileSlot(); break;
        case 6: _t->renameItemSlot(); break;
        case 7: _t->playSlot((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->cleanupSlot(); break;
        case 9: _t->pageAudioSlot(); break;
        case 10: _t->pageMidiSlot(); break;
        case 11: _t->stabilizeSlot(); break;
        default: ;
        }
    }
}

const QMetaObject qtractorFiles::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_qtractorFiles.offsetsAndSize,
    qt_meta_data_qtractorFiles,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorFiles_t
, QtPrivate::TypeAndForceComplete<qtractorFiles, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorFiles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorFiles::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorFiles.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int qtractorFiles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
