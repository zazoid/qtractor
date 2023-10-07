/****************************************************************************
** Meta object code from reading C++ file 'qtractorPaletteForm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtractorPaletteForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtractorPaletteForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtractorPaletteForm_t {
    const uint offsetsAndSize[30];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorPaletteForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorPaletteForm_t qt_meta_stringdata_qtractorPaletteForm = {
    {
QT_MOC_LITERAL(0, 19), // "qtractorPaletteForm"
QT_MOC_LITERAL(20, 16), // "nameComboChanged"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 4), // "name"
QT_MOC_LITERAL(43, 17), // "saveButtonClicked"
QT_MOC_LITERAL(61, 19), // "deleteButtonClicked"
QT_MOC_LITERAL(81, 21), // "generateButtonChanged"
QT_MOC_LITERAL(103, 18), // "resetButtonClicked"
QT_MOC_LITERAL(122, 19), // "detailsCheckClicked"
QT_MOC_LITERAL(142, 19), // "importButtonClicked"
QT_MOC_LITERAL(162, 19), // "exportButtonClicked"
QT_MOC_LITERAL(182, 14), // "paletteChanged"
QT_MOC_LITERAL(197, 3), // "pal"
QT_MOC_LITERAL(201, 6), // "accept"
QT_MOC_LITERAL(208, 6) // "reject"

    },
    "qtractorPaletteForm\0nameComboChanged\0"
    "\0name\0saveButtonClicked\0deleteButtonClicked\0"
    "generateButtonChanged\0resetButtonClicked\0"
    "detailsCheckClicked\0importButtonClicked\0"
    "exportButtonClicked\0paletteChanged\0"
    "pal\0accept\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorPaletteForm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x09,    1 /* Protected */,
       4,    0,   83,    2, 0x09,    3 /* Protected */,
       5,    0,   84,    2, 0x09,    4 /* Protected */,
       6,    0,   85,    2, 0x09,    5 /* Protected */,
       7,    0,   86,    2, 0x09,    6 /* Protected */,
       8,    0,   87,    2, 0x09,    7 /* Protected */,
       9,    0,   88,    2, 0x09,    8 /* Protected */,
      10,    0,   89,    2, 0x09,    9 /* Protected */,
      11,    1,   90,    2, 0x09,   10 /* Protected */,
      13,    0,   93,    2, 0x09,   12 /* Protected */,
      14,    0,   94,    2, 0x09,   13 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPalette,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qtractorPaletteForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtractorPaletteForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameComboChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->saveButtonClicked(); break;
        case 2: _t->deleteButtonClicked(); break;
        case 3: _t->generateButtonChanged(); break;
        case 4: _t->resetButtonClicked(); break;
        case 5: _t->detailsCheckClicked(); break;
        case 6: _t->importButtonClicked(); break;
        case 7: _t->exportButtonClicked(); break;
        case 8: _t->paletteChanged((*reinterpret_cast< std::add_pointer_t<QPalette>>(_a[1]))); break;
        case 9: _t->accept(); break;
        case 10: _t->reject(); break;
        default: ;
        }
    }
}

const QMetaObject qtractorPaletteForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qtractorPaletteForm.offsetsAndSize,
    qt_meta_data_qtractorPaletteForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorPaletteForm_t
, QtPrivate::TypeAndForceComplete<qtractorPaletteForm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPalette &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorPaletteForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorPaletteForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorPaletteForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qtractorPaletteForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
struct qt_meta_stringdata_qtractorPaletteForm__PaletteModel_t {
    const uint offsetsAndSize[12];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorPaletteForm__PaletteModel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorPaletteForm__PaletteModel_t qt_meta_stringdata_qtractorPaletteForm__PaletteModel = {
    {
QT_MOC_LITERAL(0, 33), // "qtractorPaletteForm::PaletteM..."
QT_MOC_LITERAL(34, 14), // "paletteChanged"
QT_MOC_LITERAL(49, 0), // ""
QT_MOC_LITERAL(50, 7), // "palette"
QT_MOC_LITERAL(58, 9), // "colorRole"
QT_MOC_LITERAL(68, 19) // "QPalette::ColorRole"

    },
    "qtractorPaletteForm::PaletteModel\0"
    "paletteChanged\0\0palette\0colorRole\0"
    "QPalette::ColorRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorPaletteForm__PaletteModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPalette,    3,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00015009, uint(-1), 0,

       0        // eod
};

void qtractorPaletteForm::PaletteModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaletteModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->paletteChanged((*reinterpret_cast< std::add_pointer_t<QPalette>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaletteModel::*)(const QPalette & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteModel::paletteChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PaletteModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPalette::ColorRole*>(_v) = _t->colorRole(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_qtractorPaletteForm__PaletteModel[] = {
    QMetaObject::SuperData::link<QPalette::staticMetaObject>(),
    nullptr
};

const QMetaObject qtractorPaletteForm::PaletteModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_qtractorPaletteForm__PaletteModel.offsetsAndSize,
    qt_meta_data_qtractorPaletteForm__PaletteModel,
    qt_static_metacall,
    qt_meta_extradata_qtractorPaletteForm__PaletteModel,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorPaletteForm__PaletteModel_t
, QtPrivate::TypeAndForceComplete<QPalette::ColorRole, std::true_type>, QtPrivate::TypeAndForceComplete<PaletteModel, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPalette &, std::false_type>



>,
    nullptr
} };


const QMetaObject *qtractorPaletteForm::PaletteModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorPaletteForm::PaletteModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorPaletteForm__PaletteModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int qtractorPaletteForm::PaletteModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qtractorPaletteForm::PaletteModel::paletteChanged(const QPalette & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qtractorPaletteForm__ColorButton_t {
    const uint offsetsAndSize[10];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorPaletteForm__ColorButton_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorPaletteForm__ColorButton_t qt_meta_stringdata_qtractorPaletteForm__ColorButton = {
    {
QT_MOC_LITERAL(0, 32), // "qtractorPaletteForm::ColorButton"
QT_MOC_LITERAL(33, 7), // "changed"
QT_MOC_LITERAL(41, 0), // ""
QT_MOC_LITERAL(42, 11), // "chooseColor"
QT_MOC_LITERAL(54, 5) // "brush"

    },
    "qtractorPaletteForm::ColorButton\0"
    "changed\0\0chooseColor\0brush"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorPaletteForm__ColorButton[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   27,    2, 0x09,    3 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QBrush, 0x00015103, uint(-1), 0,

       0        // eod
};

void qtractorPaletteForm::ColorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->chooseColor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorButton::changed)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColorButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColorButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

const QMetaObject qtractorPaletteForm::ColorButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_qtractorPaletteForm__ColorButton.offsetsAndSize,
    qt_meta_data_qtractorPaletteForm__ColorButton,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorPaletteForm__ColorButton_t
, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<ColorButton, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorPaletteForm::ColorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorPaletteForm::ColorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorPaletteForm__ColorButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int qtractorPaletteForm::ColorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qtractorPaletteForm::ColorButton::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_qtractorPaletteForm__ColorEditor_t {
    const uint offsetsAndSize[12];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorPaletteForm__ColorEditor_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorPaletteForm__ColorEditor_t qt_meta_stringdata_qtractorPaletteForm__ColorEditor = {
    {
QT_MOC_LITERAL(0, 32), // "qtractorPaletteForm::ColorEditor"
QT_MOC_LITERAL(33, 7), // "changed"
QT_MOC_LITERAL(41, 0), // ""
QT_MOC_LITERAL(42, 8), // "QWidget*"
QT_MOC_LITERAL(51, 6), // "widget"
QT_MOC_LITERAL(58, 12) // "colorChanged"

    },
    "qtractorPaletteForm::ColorEditor\0"
    "changed\0\0QWidget*\0widget\0colorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorPaletteForm__ColorEditor[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   29,    2, 0x09,    3 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void qtractorPaletteForm::ColorEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 1: _t->colorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorEditor::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorEditor::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qtractorPaletteForm::ColorEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qtractorPaletteForm__ColorEditor.offsetsAndSize,
    qt_meta_data_qtractorPaletteForm__ColorEditor,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorPaletteForm__ColorEditor_t
, QtPrivate::TypeAndForceComplete<ColorEditor, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorPaletteForm::ColorEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorPaletteForm::ColorEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorPaletteForm__ColorEditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qtractorPaletteForm::ColorEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void qtractorPaletteForm::ColorEditor::changed(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qtractorPaletteForm__RoleEditor_t {
    const uint offsetsAndSize[12];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_qtractorPaletteForm__RoleEditor_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_qtractorPaletteForm__RoleEditor_t qt_meta_stringdata_qtractorPaletteForm__RoleEditor = {
    {
QT_MOC_LITERAL(0, 31), // "qtractorPaletteForm::RoleEditor"
QT_MOC_LITERAL(32, 7), // "changed"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 8), // "QWidget*"
QT_MOC_LITERAL(50, 6), // "widget"
QT_MOC_LITERAL(57, 13) // "resetProperty"

    },
    "qtractorPaletteForm::RoleEditor\0changed\0"
    "\0QWidget*\0widget\0resetProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtractorPaletteForm__RoleEditor[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   29,    2, 0x09,    3 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void qtractorPaletteForm::RoleEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoleEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 1: _t->resetProperty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RoleEditor::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoleEditor::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qtractorPaletteForm::RoleEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qtractorPaletteForm__RoleEditor.offsetsAndSize,
    qt_meta_data_qtractorPaletteForm__RoleEditor,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_qtractorPaletteForm__RoleEditor_t
, QtPrivate::TypeAndForceComplete<RoleEditor, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *qtractorPaletteForm::RoleEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtractorPaletteForm::RoleEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtractorPaletteForm__RoleEditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qtractorPaletteForm::RoleEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void qtractorPaletteForm::RoleEditor::changed(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
