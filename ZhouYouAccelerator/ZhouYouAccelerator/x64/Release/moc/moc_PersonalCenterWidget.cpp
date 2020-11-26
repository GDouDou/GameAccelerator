/****************************************************************************
** Meta object code from reading C++ file 'PersonalCenterWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../PersonalCenterWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PersonalCenterWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PersonalCenterWidget_t {
    QByteArrayData data[8];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PersonalCenterWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PersonalCenterWidget_t qt_meta_stringdata_PersonalCenterWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PersonalCenterWidget"
QT_MOC_LITERAL(1, 21, 16), // "SigChangeAccount"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "phone"
QT_MOC_LITERAL(4, 45, 7), // "OnClose"
QT_MOC_LITERAL(5, 53, 15), // "OnSaveChangeBtn"
QT_MOC_LITERAL(6, 69, 16), // "OnChangePhoneBtn"
QT_MOC_LITERAL(7, 86, 18) // "OnChangeHeadPicBtn"

    },
    "PersonalCenterWidget\0SigChangeAccount\0"
    "\0phone\0OnClose\0OnSaveChangeBtn\0"
    "OnChangePhoneBtn\0OnChangeHeadPicBtn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PersonalCenterWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PersonalCenterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PersonalCenterWidget *_t = static_cast<PersonalCenterWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SigChangeAccount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->OnClose(); break;
        case 2: _t->OnSaveChangeBtn(); break;
        case 3: _t->OnChangePhoneBtn(); break;
        case 4: _t->OnChangeHeadPicBtn(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PersonalCenterWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PersonalCenterWidget::SigChangeAccount)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PersonalCenterWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PersonalCenterWidget.data,
      qt_meta_data_PersonalCenterWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PersonalCenterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PersonalCenterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PersonalCenterWidget.stringdata0))
        return static_cast<void*>(const_cast< PersonalCenterWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PersonalCenterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PersonalCenterWidget::SigChangeAccount(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
