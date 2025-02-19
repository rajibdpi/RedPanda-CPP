/****************************************************************************
** Meta object code from reading C++ file 'editorcolorschemewidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RedPandaIDE/settingsdialog/editorcolorschemewidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editorcolorschemewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN23ColorSchemeItemDelegateE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN23ColorSchemeItemDelegateE = QtMocHelpers::stringData(
    "ColorSchemeItemDelegate"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN23ColorSchemeItemDelegateE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject ColorSchemeItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_ZN23ColorSchemeItemDelegateE.offsetsAndSizes,
    qt_meta_data_ZN23ColorSchemeItemDelegateE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN23ColorSchemeItemDelegateE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ColorSchemeItemDelegate, std::true_type>
    >,
    nullptr
} };

void ColorSchemeItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ColorSchemeItemDelegate *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *ColorSchemeItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorSchemeItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN23ColorSchemeItemDelegateE.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int ColorSchemeItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN23EditorColorSchemeWidgetE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN23EditorColorSchemeWidgetE = QtMocHelpers::stringData(
    "EditorColorSchemeWidget",
    "onItemSelectionChanged",
    "",
    "onSettingChanged",
    "onForegroundChanged",
    "onBackgroundChanged",
    "onFontStyleChanged",
    "changeSchemeComboFont",
    "on_actionCopy_Scheme_triggered",
    "on_btnSchemeMenu_pressed",
    "on_actionImport_Scheme_triggered",
    "on_actionRename_Scheme_triggered",
    "on_actionReset_Scheme_triggered",
    "on_actionExport_Scheme_triggered",
    "on_actionDelete_Scheme_triggered"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN23EditorColorSchemeWidgetE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x0a,    1 /* Public */,
       3,    0,   93,    2, 0x0a,    2 /* Public */,
       4,    0,   94,    2, 0x0a,    3 /* Public */,
       5,    0,   95,    2, 0x0a,    4 /* Public */,
       6,    0,   96,    2, 0x0a,    5 /* Public */,
       7,    0,   97,    2, 0x0a,    6 /* Public */,
       8,    0,   98,    2, 0x08,    7 /* Private */,
       9,    0,   99,    2, 0x08,    8 /* Private */,
      10,    0,  100,    2, 0x08,    9 /* Private */,
      11,    0,  101,    2, 0x08,   10 /* Private */,
      12,    0,  102,    2, 0x08,   11 /* Private */,
      13,    0,  103,    2, 0x08,   12 /* Private */,
      14,    0,  104,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject EditorColorSchemeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN23EditorColorSchemeWidgetE.offsetsAndSizes,
    qt_meta_data_ZN23EditorColorSchemeWidgetE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN23EditorColorSchemeWidgetE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EditorColorSchemeWidget, std::true_type>,
        // method 'onItemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSettingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onForegroundChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBackgroundChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFontStyleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeSchemeComboFont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCopy_Scheme_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSchemeMenu_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionImport_Scheme_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRename_Scheme_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionReset_Scheme_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionExport_Scheme_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDelete_Scheme_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void EditorColorSchemeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditorColorSchemeWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onItemSelectionChanged(); break;
        case 1: _t->onSettingChanged(); break;
        case 2: _t->onForegroundChanged(); break;
        case 3: _t->onBackgroundChanged(); break;
        case 4: _t->onFontStyleChanged(); break;
        case 5: _t->changeSchemeComboFont(); break;
        case 6: _t->on_actionCopy_Scheme_triggered(); break;
        case 7: _t->on_btnSchemeMenu_pressed(); break;
        case 8: _t->on_actionImport_Scheme_triggered(); break;
        case 9: _t->on_actionRename_Scheme_triggered(); break;
        case 10: _t->on_actionReset_Scheme_triggered(); break;
        case 11: _t->on_actionExport_Scheme_triggered(); break;
        case 12: _t->on_actionDelete_Scheme_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *EditorColorSchemeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditorColorSchemeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN23EditorColorSchemeWidgetE.stringdata0))
        return static_cast<void*>(this);
    return SettingsWidget::qt_metacast(_clname);
}

int EditorColorSchemeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
