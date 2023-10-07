/****************************************************************************
** Meta object code from reading C++ file 'qtractorShortcutForm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorShortcutForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorShortcutForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorShortcutTableItemEdit_t {
    const uint offsetsAndSize[6];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorShortcutTableItemEdit_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorShortcutTableItemEdit_t qt_meta_stringdata_qtractorShortcutTableItemEdit = {
    {
QT_MOC_LITERAL(0, 29), // "qtractorShortcutTableItemEdit"
QT_MOC_LITERAL(30, 15), // "editingCanceled"
QT_MOC_LITERAL(46, 0) // ""

    },
    "qtractorShortcutTableItemEdit\0"
    "editingCanceled\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorShortcutTableItemEdit[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void qtractorShortcutTableItemEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorShortcutTableItemEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->editingCanceled(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorShortcutTableItemEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorShortcutTableItemEdit::editingCanceled)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject qtractorShortcutTableItemEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_qtractorShortcutTableItemEdit.offsetsAndSize,
    qt_meta_data_qtractorShortcutTableItemEdit,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorShortcutTableItemEdit_t
, QtPrivate::TypeAndForceComplete<qtractorShortcutTableItemEdit, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *qtractorShortcutTableItemEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorShortcutTableItemEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorShortcutTableItemEdit.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int qtractorShortcutTableItemEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void qtractorShortcutTableItemEdit::editingCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_qtractorShortcutTableItemEditor_t {
    const uint offsetsAndSize[16];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorShortcutTableItemEditor_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorShortcutTableItemEditor_t qt_meta_stringdata_qtractorShortcutTableItemEditor = {
    {
QT_MOC_LITERAL(0, 31), // "qtractorShortcutTableItemEditor"
QT_MOC_LITERAL(32, 15), // "editingFinished"
QT_MOC_LITERAL(48, 0), // ""
QT_MOC_LITERAL(49, 15), // "editingCanceled"
QT_MOC_LITERAL(65, 5), // "clear"
QT_MOC_LITERAL(71, 6), // "finish"
QT_MOC_LITERAL(78, 6), // "cancel"
QT_MOC_LITERAL(85, 7) // "changed"

    },
    "qtractorShortcutTableItemEditor\0"
    "editingFinished\0\0editingCanceled\0clear\0"
    "finish\0cancel\0changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorShortcutTableItemEditor[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   52,    2, 0x0a,    3 /* Public */,
       5,    0,   53,    2, 0x09,    4 /* Protected */,
       6,    0,   54,    2, 0x09,    5 /* Protected */,
       7,    1,   55,    2, 0x09,    6 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void qtractorShortcutTableItemEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorShortcutTableItemEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->editingFinished(); break;
        case 1: _t->editingCanceled(); break;
        case 2: _t->clear(); break;
        case 3: _t->finish(); break;
        case 4: _t->cancel(); break;
        case 5: _t->changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qtractorShortcutTableItemEditor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorShortcutTableItemEditor::editingFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qtractorShortcutTableItemEditor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qtractorShortcutTableItemEditor::editingCanceled)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject qtractorShortcutTableItemEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qtractorShortcutTableItemEditor.offsetsAndSize,
    qt_meta_data_qtractorShortcutTableItemEditor,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorShortcutTableItemEditor_t
, QtPrivate::TypeAndForceComplete<qtractorShortcutTableItemEditor, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorShortcutTableItemEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorShortcutTableItemEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorShortcutTableItemEditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qtractorShortcutTableItemEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void qtractorShortcutTableItemEditor::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void qtractorShortcutTableItemEditor::editingCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_qtractorShortcutTableItemDelegate_t {
    const uint offsetsAndSize[6];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorShortcutTableItemDelegate_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorShortcutTableItemDelegate_t qt_meta_stringdata_qtractorShortcutTableItemDelegate = {
    {
QT_MOC_LITERAL(0, 33), // "qtractorShortcutTableItemDele..."
QT_MOC_LITERAL(34, 12), // "commitEditor"
QT_MOC_LITERAL(47, 0) // ""

    },
    "qtractorShortcutTableItemDelegate\0"
    "commitEditor\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorShortcutTableItemDelegate[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x09,    1 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void qtractorShortcutTableItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorShortcutTableItemDelegate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->commitEditor(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject qtractorShortcutTableItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_qtractorShortcutTableItemDelegate.offsetsAndSize,
    qt_meta_data_qtractorShortcutTableItemDelegate,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorShortcutTableItemDelegate_t
, QtPrivate::TypeAndForceComplete<qtractorShortcutTableItemDelegate, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorShortcutTableItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorShortcutTableItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorShortcutTableItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int qtractorShortcutTableItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_qtractorShortcutForm_t {
    const uint offsetsAndSize[20];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorShortcutForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorShortcutForm_t qt_meta_stringdata_qtractorShortcutForm = {
    {
QT_MOC_LITERAL(0, 20), // "qtractorShortcutForm"
QT_MOC_LITERAL(21, 23), // "actionShortcutActivated"
QT_MOC_LITERAL(45, 0), // ""
QT_MOC_LITERAL(46, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(63, 21), // "actionShortcutChanged"
QT_MOC_LITERAL(85, 26), // "actionControlMenuRequested"
QT_MOC_LITERAL(112, 22), // "actionControlActivated"
QT_MOC_LITERAL(135, 21), // "actionControlAccepted"
QT_MOC_LITERAL(157, 6), // "accept"
QT_MOC_LITERAL(164, 6) // "reject"

    },
    "qtractorShortcutForm\0actionShortcutActivated\0"
    "\0QTreeWidgetItem*\0actionShortcutChanged\0"
    "actionControlMenuRequested\0"
    "actionControlActivated\0actionControlAccepted\0"
    "accept\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorShortcutForm[] = {

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
       1,    2,   56,    2, 0x09,    1 /* Protected */,
       4,    2,   61,    2, 0x09,    4 /* Protected */,
       5,    1,   66,    2, 0x09,    7 /* Protected */,
       6,    0,   69,    2, 0x09,    9 /* Protected */,
       7,    0,   70,    2, 0x09,   10 /* Protected */,
       8,    0,   71,    2, 0x09,   11 /* Protected */,
       9,    0,   72,    2, 0x09,   12 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorShortcutForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorShortcutForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actionShortcutActivated((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->actionShortcutChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->actionControlMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 3: _t->actionControlActivated(); break;
        case 4: _t->actionControlAccepted(); break;
        case 5: _t->accept(); break;
        case 6: _t->reject(); break;
        default: ;
        }
    }
}

const QMetaObject qtractorShortcutForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qtractorShortcutForm.offsetsAndSize,
    qt_meta_data_qtractorShortcutForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorShortcutForm_t
, QtPrivate::TypeAndForceComplete<qtractorShortcutForm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorShortcutForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorShortcutForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorShortcutForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qtractorShortcutForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
