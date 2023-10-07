/****************************************************************************
** Meta object code from reading C++ file 'qtractorFileSystem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorFileSystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorFileSystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorFileSystem_t {
    const uint offsetsAndSize[34];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorFileSystem_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorFileSystem_t qt_meta_stringdata_qtractorFileSystem = {
    {
QT_MOC_LITERAL(0, 18), // "qtractorFileSystem"
QT_MOC_LITERAL(19, 9), // "activated"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 9), // "sFilename"
QT_MOC_LITERAL(40, 11), // "homeClicked"
QT_MOC_LITERAL(52, 11), // "cdUpClicked"
QT_MOC_LITERAL(64, 17), // "rootPathActivated"
QT_MOC_LITERAL(82, 9), // "sRootPath"
QT_MOC_LITERAL(92, 17), // "treeViewActivated"
QT_MOC_LITERAL(110, 11), // "QModelIndex"
QT_MOC_LITERAL(122, 5), // "index"
QT_MOC_LITERAL(128, 13), // "filterChanged"
QT_MOC_LITERAL(142, 19), // "restoreStateLoading"
QT_MOC_LITERAL(162, 5), // "sPath"
QT_MOC_LITERAL(168, 19), // "restoreStateTimeout"
QT_MOC_LITERAL(188, 8), // "playSlot"
QT_MOC_LITERAL(197, 3) // "bOn"

    },
    "qtractorFileSystem\0activated\0\0sFilename\0"
    "homeClicked\0cdUpClicked\0rootPathActivated\0"
    "sRootPath\0treeViewActivated\0QModelIndex\0"
    "index\0filterChanged\0restoreStateLoading\0"
    "sPath\0restoreStateTimeout\0playSlot\0"
    "bOn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorFileSystem[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   71,    2, 0x09,    3 /* Protected */,
       5,    0,   72,    2, 0x09,    4 /* Protected */,
       6,    1,   73,    2, 0x09,    5 /* Protected */,
       8,    1,   76,    2, 0x09,    7 /* Protected */,
      11,    0,   79,    2, 0x09,    9 /* Protected */,
      12,    1,   80,    2, 0x09,   10 /* Protected */,
      14,    0,   83,    2, 0x09,   12 /* Protected */,
      15,    1,   84,    2, 0x09,   13 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void qtractorFileSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorFileSystem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->homeClicked(); break;
        case 2: _t->cdUpClicked(); break;
        case 3: _t->rootPathActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->treeViewActivated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 5: _t->filterChanged(); break;
        case 6: _t->restoreStateLoading((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->restoreStateTimeout(); break;
        case 8: _t->playSlot((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorFileSystem::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorFileSystem::activated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qtractorFileSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_qtractorFileSystem.offsetsAndSize,
    qt_meta_data_qtractorFileSystem,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorFileSystem_t
, QtPrivate::TypeAndForceComplete<qtractorFileSystem, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorFileSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorFileSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorFileSystem.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int qtractorFileSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void qtractorFileSystem::activated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
