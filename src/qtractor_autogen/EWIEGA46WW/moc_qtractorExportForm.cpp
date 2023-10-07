/****************************************************************************
** Meta object code from reading C++ file 'qtractorExportForm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorExportForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorExportForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorExportForm_t {
    const uint offsetsAndSize[18];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorExportForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorExportForm_t qt_meta_stringdata_qtractorExportForm = {
    {
QT_MOC_LITERAL(0, 18), // "qtractorExportForm"
QT_MOC_LITERAL(19, 17), // "exportPathChanged"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 17), // "exportPathClicked"
QT_MOC_LITERAL(56, 22), // "audioExportTypeChanged"
QT_MOC_LITERAL(79, 12), // "rangeChanged"
QT_MOC_LITERAL(92, 13), // "formatChanged"
QT_MOC_LITERAL(106, 12), // "valueChanged"
QT_MOC_LITERAL(119, 13) // "stabilizeForm"

    },
    "qtractorExportForm\0exportPathChanged\0"
    "\0exportPathClicked\0audioExportTypeChanged\0"
    "rangeChanged\0formatChanged\0valueChanged\0"
    "stabilizeForm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorExportForm[] = {

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
       3,    0,   59,    2, 0x09,    3 /* Protected */,
       4,    1,   60,    2, 0x09,    4 /* Protected */,
       5,    0,   63,    2, 0x09,    6 /* Protected */,
       6,    1,   64,    2, 0x09,    7 /* Protected */,
       7,    0,   67,    2, 0x09,    9 /* Protected */,
       8,    0,   68,    2, 0x09,   10 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorExportForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorExportForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->exportPathChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->exportPathClicked(); break;
        case 2: _t->audioExportTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->rangeChanged(); break;
        case 4: _t->formatChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->valueChanged(); break;
        case 6: _t->stabilizeForm(); break;
        default: ;
        }
    }
}

const QMetaObject qtractorExportForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qtractorExportForm.offsetsAndSize,
    qt_meta_data_qtractorExportForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorExportForm_t
, QtPrivate::TypeAndForceComplete<qtractorExportForm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorExportForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorExportForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorExportForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qtractorExportForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_qtractorExportTrackForm_t {
    const uint offsetsAndSize[10];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorExportTrackForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorExportTrackForm_t qt_meta_stringdata_qtractorExportTrackForm = {
    {
QT_MOC_LITERAL(0, 23), // "qtractorExportTrackForm"
QT_MOC_LITERAL(24, 6), // "accept"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 6), // "reject"
QT_MOC_LITERAL(39, 13) // "stabilizeForm"

    },
    "qtractorExportTrackForm\0accept\0\0reject\0"
    "stabilizeForm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorExportTrackForm[] = {

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
       1,    0,   32,    2, 0x09,    1 /* Protected */,
       3,    0,   33,    2, 0x09,    2 /* Protected */,
       4,    0,   34,    2, 0x09,    3 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorExportTrackForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorExportTrackForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: _t->stabilizeForm(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject qtractorExportTrackForm::staticMetaObject = { {
    QMetaObject::SuperData::link<qtractorExportForm::staticMetaObject>(),
    qt_meta_stringdata_qtractorExportTrackForm.offsetsAndSize,
    qt_meta_data_qtractorExportTrackForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorExportTrackForm_t
, QtPrivate::TypeAndForceComplete<qtractorExportTrackForm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorExportTrackForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorExportTrackForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorExportTrackForm.stringdata0))
        return static_cast<void*>(this);
    return qtractorExportForm::qt_metacast(_clname);
}

int qtractorExportTrackForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qtractorExportForm::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_qtractorExportClipForm_t {
    const uint offsetsAndSize[6];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorExportClipForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorExportClipForm_t qt_meta_stringdata_qtractorExportClipForm = {
    {
QT_MOC_LITERAL(0, 22), // "qtractorExportClipForm"
QT_MOC_LITERAL(23, 6), // "accept"
QT_MOC_LITERAL(30, 0) // ""

    },
    "qtractorExportClipForm\0accept\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorExportClipForm[] = {

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

void qtractorExportClipForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorExportClipForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accept(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject qtractorExportClipForm::staticMetaObject = { {
    QMetaObject::SuperData::link<qtractorExportForm::staticMetaObject>(),
    qt_meta_stringdata_qtractorExportClipForm.offsetsAndSize,
    qt_meta_data_qtractorExportClipForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorExportClipForm_t
, QtPrivate::TypeAndForceComplete<qtractorExportClipForm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorExportClipForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorExportClipForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorExportClipForm.stringdata0))
        return static_cast<void*>(this);
    return qtractorExportForm::qt_metacast(_clname);
}

int qtractorExportClipForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qtractorExportForm::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
