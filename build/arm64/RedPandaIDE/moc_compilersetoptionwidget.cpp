/****************************************************************************
** Meta object code from reading C++ file 'compilersetoptionwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RedPandaIDE/settingsdialog/compilersetoptionwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'compilersetoptionwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23CompilerSetOptionWidgetE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN23CompilerSetOptionWidgetE = QtMocHelpers::stringData(
    "CompilerSetOptionWidget",
    "on_cbCompilerSet_currentIndexChanged",
    "",
    "index",
    "on_btnFindCompilers_clicked",
    "on_btnAddBlankCompilerSet_clicked",
    "on_btnAddCompilerSetByFolder_clicked",
    "on_btnCopyCompilerSet_clicked",
    "on_btnRenameCompilerSet_clicked",
    "on_btnRemoveCompilerSet_clicked",
    "on_cbEncoding_currentTextChanged",
    "arg1",
    "on_cbEncodingDetails_currentTextChanged",
    "on_btnChooseCCompiler_clicked",
    "on_btnChooseCppCompiler_clicked",
    "on_btnChooseMake_clicked",
    "on_btnChooseGDB_clicked",
    "on_btnChooseGDBServer_clicked",
    "on_btnChooseResourceCompiler_clicked",
    "on_btnAddCompilerSetByFile_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN23CompilerSetOptionWidgetE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x08,    1 /* Private */,
       4,    0,  113,    2, 0x08,    3 /* Private */,
       5,    0,  114,    2, 0x08,    4 /* Private */,
       6,    0,  115,    2, 0x08,    5 /* Private */,
       7,    0,  116,    2, 0x08,    6 /* Private */,
       8,    0,  117,    2, 0x08,    7 /* Private */,
       9,    0,  118,    2, 0x08,    8 /* Private */,
      10,    1,  119,    2, 0x08,    9 /* Private */,
      12,    1,  122,    2, 0x08,   11 /* Private */,
      13,    0,  125,    2, 0x08,   13 /* Private */,
      14,    0,  126,    2, 0x08,   14 /* Private */,
      15,    0,  127,    2, 0x08,   15 /* Private */,
      16,    0,  128,    2, 0x08,   16 /* Private */,
      17,    0,  129,    2, 0x08,   17 /* Private */,
      18,    0,  130,    2, 0x08,   18 /* Private */,
      19,    0,  131,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CompilerSetOptionWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN23CompilerSetOptionWidgetE.offsetsAndSizes,
    qt_meta_data_ZN23CompilerSetOptionWidgetE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN23CompilerSetOptionWidgetE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CompilerSetOptionWidget, std::true_type>,
        // method 'on_cbCompilerSet_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btnFindCompilers_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAddBlankCompilerSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAddCompilerSetByFolder_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnCopyCompilerSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnRenameCompilerSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnRemoveCompilerSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cbEncoding_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_cbEncodingDetails_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_btnChooseCCompiler_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnChooseCppCompiler_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnChooseMake_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnChooseGDB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnChooseGDBServer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnChooseResourceCompiler_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAddCompilerSetByFile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CompilerSetOptionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CompilerSetOptionWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_cbCompilerSet_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_btnFindCompilers_clicked(); break;
        case 2: _t->on_btnAddBlankCompilerSet_clicked(); break;
        case 3: _t->on_btnAddCompilerSetByFolder_clicked(); break;
        case 4: _t->on_btnCopyCompilerSet_clicked(); break;
        case 5: _t->on_btnRenameCompilerSet_clicked(); break;
        case 6: _t->on_btnRemoveCompilerSet_clicked(); break;
        case 7: _t->on_cbEncoding_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->on_cbEncodingDetails_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_btnChooseCCompiler_clicked(); break;
        case 10: _t->on_btnChooseCppCompiler_clicked(); break;
        case 11: _t->on_btnChooseMake_clicked(); break;
        case 12: _t->on_btnChooseGDB_clicked(); break;
        case 13: _t->on_btnChooseGDBServer_clicked(); break;
        case 14: _t->on_btnChooseResourceCompiler_clicked(); break;
        case 15: _t->on_btnAddCompilerSetByFile_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *CompilerSetOptionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompilerSetOptionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN23CompilerSetOptionWidgetE.stringdata0))
        return static_cast<void*>(this);
    return SettingsWidget::qt_metacast(_clname);
}

int CompilerSetOptionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
