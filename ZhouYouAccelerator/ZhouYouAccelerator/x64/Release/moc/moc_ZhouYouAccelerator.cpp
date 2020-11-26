/****************************************************************************
** Meta object code from reading C++ file 'ZhouYouAccelerator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ZhouYouAccelerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZhouYouAccelerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZhouYouAccelerator_t {
    QByteArrayData data[20];
    char stringdata0[351];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZhouYouAccelerator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZhouYouAccelerator_t qt_meta_stringdata_ZhouYouAccelerator = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ZhouYouAccelerator"
QT_MOC_LITERAL(1, 19, 24), // "SigChangeAutoStartStatus"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 25), // "SigChangeExitOrTrayStatus"
QT_MOC_LITERAL(4, 71, 18), // "OnSigHeadPicActive"
QT_MOC_LITERAL(5, 90, 12), // "OnHeadPicBtn"
QT_MOC_LITERAL(6, 103, 14), // "OnMainLoginBtn"
QT_MOC_LITERAL(7, 118, 20), // "SystemSettingClicked"
QT_MOC_LITERAL(8, 139, 19), // "AboutZhouYouClicked"
QT_MOC_LITERAL(9, 159, 20), // "SwitchAccountClicked"
QT_MOC_LITERAL(10, 180, 16), // "ExitLoginCLicked"
QT_MOC_LITERAL(11, 197, 16), // "OnSigTrayClicked"
QT_MOC_LITERAL(12, 214, 16), // "OnSigExitCLicked"
QT_MOC_LITERAL(13, 231, 21), // "OnSigAutoStartClicked"
QT_MOC_LITERAL(14, 253, 16), // "OnTrayIconAction"
QT_MOC_LITERAL(15, 270, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(16, 304, 6), // "reason"
QT_MOC_LITERAL(17, 311, 14), // "OnMainCloseBtn"
QT_MOC_LITERAL(18, 326, 18), // "OnSigChangeAccount"
QT_MOC_LITERAL(19, 345, 5) // "phone"

    },
    "ZhouYouAccelerator\0SigChangeAutoStartStatus\0"
    "\0SigChangeExitOrTrayStatus\0"
    "OnSigHeadPicActive\0OnHeadPicBtn\0"
    "OnMainLoginBtn\0SystemSettingClicked\0"
    "AboutZhouYouClicked\0SwitchAccountClicked\0"
    "ExitLoginCLicked\0OnSigTrayClicked\0"
    "OnSigExitCLicked\0OnSigAutoStartClicked\0"
    "OnTrayIconAction\0QSystemTrayIcon::ActivationReason\0"
    "reason\0OnMainCloseBtn\0OnSigChangeAccount\0"
    "phone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZhouYouAccelerator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       3,    1,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   95,    2, 0x0a /* Public */,
       5,    0,   96,    2, 0x0a /* Public */,
       6,    0,   97,    2, 0x0a /* Public */,
       7,    0,   98,    2, 0x0a /* Public */,
       8,    0,   99,    2, 0x0a /* Public */,
       9,    0,  100,    2, 0x0a /* Public */,
      10,    0,  101,    2, 0x0a /* Public */,
      11,    1,  102,    2, 0x0a /* Public */,
      12,    1,  105,    2, 0x0a /* Public */,
      13,    1,  108,    2, 0x0a /* Public */,
      14,    1,  111,    2, 0x0a /* Public */,
      17,    0,  114,    2, 0x0a /* Public */,
      18,    1,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void ZhouYouAccelerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZhouYouAccelerator *_t = static_cast<ZhouYouAccelerator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SigChangeAutoStartStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->SigChangeExitOrTrayStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->OnSigHeadPicActive(); break;
        case 3: _t->OnHeadPicBtn(); break;
        case 4: _t->OnMainLoginBtn(); break;
        case 5: _t->SystemSettingClicked(); break;
        case 6: _t->AboutZhouYouClicked(); break;
        case 7: _t->SwitchAccountClicked(); break;
        case 8: _t->ExitLoginCLicked(); break;
        case 9: _t->OnSigTrayClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->OnSigExitCLicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->OnSigAutoStartClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->OnTrayIconAction((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 13: _t->OnMainCloseBtn(); break;
        case 14: _t->OnSigChangeAccount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ZhouYouAccelerator::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZhouYouAccelerator::SigChangeAutoStartStatus)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ZhouYouAccelerator::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZhouYouAccelerator::SigChangeExitOrTrayStatus)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ZhouYouAccelerator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ZhouYouAccelerator.data,
      qt_meta_data_ZhouYouAccelerator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ZhouYouAccelerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZhouYouAccelerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZhouYouAccelerator.stringdata0))
        return static_cast<void*>(const_cast< ZhouYouAccelerator*>(this));
    return QWidget::qt_metacast(_clname);
}

int ZhouYouAccelerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void ZhouYouAccelerator::SigChangeAutoStartStatus(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ZhouYouAccelerator::SigChangeExitOrTrayStatus(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
