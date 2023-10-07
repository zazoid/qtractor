/****************************************************************************
** Meta object code from reading C++ file 'qtractorFileListView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorFileListView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorFileListView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorFileListView_t {
    const uint offsetsAndSize[32];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorFileListView_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorFileListView_t qt_meta_stringdata_qtractorFileListView = {
    {
QT_MOC_LITERAL(0, 20), // "qtractorFileListView"
QT_MOC_LITERAL(21, 8), // "selected"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 9), // "sFilename"
QT_MOC_LITERAL(41, 13), // "iTrackChannel"
QT_MOC_LITERAL(55, 7), // "bSelect"
QT_MOC_LITERAL(63, 9), // "activated"
QT_MOC_LITERAL(73, 15), // "contentsChanged"
QT_MOC_LITERAL(89, 15), // "itemClickedSlot"
QT_MOC_LITERAL(105, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(122, 5), // "pItem"
QT_MOC_LITERAL(128, 17), // "itemActivatedSlot"
QT_MOC_LITERAL(146, 16), // "itemExpandedSlot"
QT_MOC_LITERAL(163, 17), // "itemCollapsedSlot"
QT_MOC_LITERAL(181, 15), // "itemRenamedSlot"
QT_MOC_LITERAL(197, 11) // "timeoutSlot"

    },
    "qtractorFileListView\0selected\0\0sFilename\0"
    "iTrackChannel\0bSelect\0activated\0"
    "contentsChanged\0itemClickedSlot\0"
    "QTreeWidgetItem*\0pItem\0itemActivatedSlot\0"
    "itemExpandedSlot\0itemCollapsedSlot\0"
    "itemRenamedSlot\0timeoutSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorFileListView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   68,    2, 0x06,    1 /* Public */,
       6,    2,   75,    2, 0x06,    5 /* Public */,
       7,    0,   80,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   81,    2, 0x09,    9 /* Protected */,
      11,    1,   84,    2, 0x09,   11 /* Protected */,
      12,    1,   87,    2, 0x09,   13 /* Protected */,
      13,    1,   90,    2, 0x09,   15 /* Protected */,
      14,    0,   93,    2, 0x09,   17 /* Protected */,
      15,    0,   94,    2, 0x09,   18 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorFileListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorFileListView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 1: _t->activated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->contentsChanged(); break;
        case 3: _t->itemClickedSlot((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 4: _t->itemActivatedSlot((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 5: _t->itemExpandedSlot((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 6: _t->itemCollapsedSlot((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 7: _t->itemRenamedSlot(); break;
        case 8: _t->timeoutSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorFileListView::*)(const QString & , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorFileListView::selected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qtractorFileListView::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorFileListView::activated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qtractorFileListView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorFileListView::contentsChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject qtractorFileListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_qtractorFileListView.offsetsAndSize,
    qt_meta_data_qtractorFileListView,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorFileListView_t
, QtPrivate::TypeAndForceComplete<qtractorFileListView, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorFileListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorFileListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorFileListView.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int qtractorFileListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
void qtractorFileListView::selected(const QString & _t1, int _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qtractorFileListView::activated(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qtractorFileListView::contentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
