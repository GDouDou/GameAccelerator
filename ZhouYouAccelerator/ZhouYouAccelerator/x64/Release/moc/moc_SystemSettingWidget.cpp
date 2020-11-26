/****************************************************************************
** Meta object code from reading C++ file 'SystemSettingWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SystemSettingWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SystemSettingWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemSettingWidget_t {
    QByteArrayData data[12];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemSettingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemSettingWidget_t qt_meta_stringdata_SystemSettingWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SystemSettingWidget"
QT_MOC_LITERAL(1, 20, 19), // "SigAutoStartClicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "SigTrayClicked"
QT_MOC_LITERAL(4, 56, 14), // "SigExitCLicked"
QT_MOC_LITERAL(5, 71, 14), // "OnStateChanged"
QT_MOC_LITERAL(6, 86, 5), // "state"
QT_MOC_LITERAL(7, 92, 16), // "OnTrayBtnClicked"
QT_MOC_LITERAL(8, 109, 7), // "OnClose"
QT_MOC_LITERAL(9, 117, 6), // "OnExit"
QT_MOC_LITERAL(10, 124, 26), // "OnSigChangeAutoStartStatus"
QT_MOC_LITERAL(11, 151, 27) // "OnSigChangeExitOrTrayStatus"

    },
    "SystemSettingWidget\0SigAutoStartClicked\0"
    "\0SigTrayClicked\0SigExitCLicked\0"
    "OnStateChanged\0state\0OnTrayBtnClicked\0"
    "OnClose\0OnExit\0OnSigChangeAutoStartStatus\0"
    "OnSigChangeExitOrTrayStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemSettingWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,
       4,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   68,    2, 0x0a /* Public */,
       7,    0,   71,    2, 0x0a /* Public */,
       8,    0,   72,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    1,   74,    2, 0x0a /* Public */,
      11,    1,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void SystemSettingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SystemSettingWidget *_t = static_cast<SystemSettingWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SigAutoStartClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->SigTrayClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SigExitCLicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->OnStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->OnTrayBtnClicked(); break;
        case 5: _t->OnClose(); break;
        case 6: _t->OnExit(); break;
        case 7: _t->OnSigChangeAutoStartStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->OnSigChangeExitOrTrayStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SystemSettingWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SystemSettingWidget::SigAutoStartClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SystemSettingWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SystemSettingWidget::SigTrayClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SystemSettingWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SystemSettingWidget::SigExitCLicked)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SystemSettingWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SystemSettingWidget.data,
      qt_meta_data_SystemSettingWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SystemSettingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemSettingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemSettingWidget.stringdata0))
        return static_cast<void*>(const_cast< SystemSettingWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SystemSettingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SystemSettingWidget::SigAutoStartClicked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SystemSettingWidget::SigTrayClicked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SystemSettingWidget::SigExitCLicked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
