/****************************************************************************
** Meta object code from reading C++ file 'iwindows_xinput_wrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/iwindows_xinput_wrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iwindows_xinput_wrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IWindows_XInput_Wrapper_t {
    QByteArrayData data[31];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IWindows_XInput_Wrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IWindows_XInput_Wrapper_t qt_meta_stringdata_IWindows_XInput_Wrapper = {
    {
QT_MOC_LITERAL(0, 0, 23), // "IWindows_XInput_Wrapper"
QT_MOC_LITERAL(1, 24, 13), // "ButtonPressed"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 3), // "uID"
QT_MOC_LITERAL(4, 43, 21), // "QList<XboxOneButtons>"
QT_MOC_LITERAL(5, 65, 14), // "PressedButtons"
QT_MOC_LITERAL(6, 80, 11), // "LeftTrigger"
QT_MOC_LITERAL(7, 92, 4), // "byte"
QT_MOC_LITERAL(8, 97, 5), // "Value"
QT_MOC_LITERAL(9, 103, 12), // "RightTrigger"
QT_MOC_LITERAL(10, 116, 14), // "LeftThumbStick"
QT_MOC_LITERAL(11, 131, 2), // "LX"
QT_MOC_LITERAL(12, 134, 2), // "LY"
QT_MOC_LITERAL(13, 137, 15), // "RightThumbStick"
QT_MOC_LITERAL(14, 153, 2), // "RX"
QT_MOC_LITERAL(15, 156, 2), // "RY"
QT_MOC_LITERAL(16, 159, 5), // "Setup"
QT_MOC_LITERAL(17, 165, 5), // "Start"
QT_MOC_LITERAL(18, 171, 4), // "Stop"
QT_MOC_LITERAL(19, 176, 17), // "VibrateController"
QT_MOC_LITERAL(20, 194, 4), // "WORD"
QT_MOC_LITERAL(21, 199, 14), // "LeftMotorSpeed"
QT_MOC_LITERAL(22, 214, 15), // "RightMotorSpeed"
QT_MOC_LITERAL(23, 230, 14), // "XInput_Polling"
QT_MOC_LITERAL(24, 245, 16), // "TranslateButtons"
QT_MOC_LITERAL(25, 262, 3), // "bID"
QT_MOC_LITERAL(26, 266, 17), // "TranslateTriggers"
QT_MOC_LITERAL(27, 284, 1), // "X"
QT_MOC_LITERAL(28, 286, 1), // "Y"
QT_MOC_LITERAL(29, 288, 20), // "IWindows_XInput_Enum"
QT_MOC_LITERAL(30, 309, 1) // "e"

    },
    "IWindows_XInput_Wrapper\0ButtonPressed\0"
    "\0uID\0QList<XboxOneButtons>\0PressedButtons\0"
    "LeftTrigger\0byte\0Value\0RightTrigger\0"
    "LeftThumbStick\0LX\0LY\0RightThumbStick\0"
    "RX\0RY\0Setup\0Start\0Stop\0VibrateController\0"
    "WORD\0LeftMotorSpeed\0RightMotorSpeed\0"
    "XInput_Polling\0TranslateButtons\0bID\0"
    "TranslateTriggers\0X\0Y\0IWindows_XInput_Enum\0"
    "e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IWindows_XInput_Wrapper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       6,    2,   79,    2, 0x06 /* Public */,
       9,    2,   84,    2, 0x06 /* Public */,
      10,    3,   89,    2, 0x06 /* Public */,
      13,    3,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  103,    2, 0x0a /* Public */,
      17,    0,  104,    2, 0x0a /* Public */,
      18,    0,  105,    2, 0x0a /* Public */,
      19,    3,  106,    2, 0x0a /* Public */,
      23,    0,  113,    2, 0x08 /* Private */,
      24,    2,  114,    2, 0x08 /* Private */,
      26,    4,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Short, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Short, 0x80000000 | 7,    3,    8,
    QMetaType::Void, QMetaType::Short, 0x80000000 | 7,    3,    8,
    QMetaType::Void, QMetaType::Short, QMetaType::Double, QMetaType::Double,    3,   11,   12,
    QMetaType::Void, QMetaType::Short, QMetaType::Double, QMetaType::Double,    3,   14,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Short, 0x80000000 | 20, 0x80000000 | 20,    3,   21,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Short, 0x80000000 | 20,    3,   25,
    QMetaType::Void, QMetaType::Short, QMetaType::Short, QMetaType::Short, 0x80000000 | 29,    3,   27,   28,   30,

       0        // eod
};

void IWindows_XInput_Wrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IWindows_XInput_Wrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ButtonPressed((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< QList<XboxOneButtons>(*)>(_a[2]))); break;
        case 1: _t->LeftTrigger((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< byte(*)>(_a[2]))); break;
        case 2: _t->RightTrigger((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< byte(*)>(_a[2]))); break;
        case 3: _t->LeftThumbStick((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->RightThumbStick((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 5: _t->Setup(); break;
        case 6: _t->Start(); break;
        case 7: _t->Stop(); break;
        case 8: _t->VibrateController((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< WORD(*)>(_a[2])),(*reinterpret_cast< WORD(*)>(_a[3]))); break;
        case 9: _t->XInput_Polling(); break;
        case 10: _t->TranslateButtons((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< WORD(*)>(_a[2]))); break;
        case 11: _t->TranslateTriggers((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2])),(*reinterpret_cast< short(*)>(_a[3])),(*reinterpret_cast< IWindows_XInput_Enum(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IWindows_XInput_Wrapper::*)(short , QList<XboxOneButtons> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IWindows_XInput_Wrapper::ButtonPressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IWindows_XInput_Wrapper::*)(short , byte );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IWindows_XInput_Wrapper::LeftTrigger)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (IWindows_XInput_Wrapper::*)(short , byte );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IWindows_XInput_Wrapper::RightTrigger)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (IWindows_XInput_Wrapper::*)(short , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IWindows_XInput_Wrapper::LeftThumbStick)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (IWindows_XInput_Wrapper::*)(short , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IWindows_XInput_Wrapper::RightThumbStick)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IWindows_XInput_Wrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_IWindows_XInput_Wrapper.data,
    qt_meta_data_IWindows_XInput_Wrapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IWindows_XInput_Wrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IWindows_XInput_Wrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IWindows_XInput_Wrapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int IWindows_XInput_Wrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void IWindows_XInput_Wrapper::ButtonPressed(short _t1, QList<XboxOneButtons> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IWindows_XInput_Wrapper::LeftTrigger(short _t1, byte _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IWindows_XInput_Wrapper::RightTrigger(short _t1, byte _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void IWindows_XInput_Wrapper::LeftThumbStick(short _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void IWindows_XInput_Wrapper::RightThumbStick(short _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
