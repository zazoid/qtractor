/****************************************************************************
** Meta object code from reading C++ file 'qtractorTracks.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorTracks.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorTracks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorTracks_t {
    const uint offsetsAndSize[16];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorTracks_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorTracks_t qt_meta_stringdata_qtractorTracks = {
    {
QT_MOC_LITERAL(0, 14), // "qtractorTracks"
QT_MOC_LITERAL(15, 15), // "updateTrackView"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 20), // "horizontalZoomInSlot"
QT_MOC_LITERAL(53, 21), // "horizontalZoomOutSlot"
QT_MOC_LITERAL(75, 18), // "verticalZoomInSlot"
QT_MOC_LITERAL(94, 19), // "verticalZoomOutSlot"
QT_MOC_LITERAL(114, 17) // "viewZoomResetSlot"

    },
    "qtractorTracks\0updateTrackView\0\0"
    "horizontalZoomInSlot\0horizontalZoomOutSlot\0"
    "verticalZoomInSlot\0verticalZoomOutSlot\0"
    "viewZoomResetSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorTracks[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x0a,    1 /* Public */,
       3,    0,   51,    2, 0x09,    2 /* Protected */,
       4,    0,   52,    2, 0x09,    3 /* Protected */,
       5,    0,   53,    2, 0x09,    4 /* Protected */,
       6,    0,   54,    2, 0x09,    5 /* Protected */,
       7,    0,   55,    2, 0x09,    6 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorTracks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorTracks *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateTrackView(); break;
        case 1: _t->horizontalZoomInSlot(); break;
        case 2: _t->horizontalZoomOutSlot(); break;
        case 3: _t->verticalZoomInSlot(); break;
        case 4: _t->verticalZoomOutSlot(); break;
        case 5: _t->viewZoomResetSlot(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject qtractorTracks::staticMetaObject = { {
    QMetaObject::SuperData::link<QSplitter::staticMetaObject>(),
    qt_meta_stringdata_qtractorTracks.offsetsAndSize,
    qt_meta_data_qtractorTracks,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorTracks_t
, QtPrivate::TypeAndForceComplete<qtractorTracks, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorTracks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorTracks::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorTracks.stringdata0))
        return static_cast<void*>(this);
    return QSplitter::qt_metacast(_clname);
}

int qtractorTracks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
