/****************************************************************************
** Meta object code from reading C++ file 'fooplayer.hpp'
**
** Created: Tue Mar 24 14:24:42 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fooplayer.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fooplayer.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FooPlayer[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      18,   10,   10,   10, 0x0a,
      25,   10,   10,   10, 0x0a,
      32,   10,   10,   10, 0x0a,
      39,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FooPlayer[] = {
    "FooPlayer\0\0play()\0prev()\0stop()\0next()\0"
    "pause()\0"
};

const QMetaObject FooPlayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FooPlayer,
      qt_meta_data_FooPlayer, 0 }
};

const QMetaObject *FooPlayer::metaObject() const
{
    return &staticMetaObject;
}

void *FooPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FooPlayer))
        return static_cast<void*>(const_cast< FooPlayer*>(this));
    return QObject::qt_metacast(_clname);
}

int FooPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: play(); break;
        case 1: prev(); break;
        case 2: stop(); break;
        case 3: next(); break;
        case 4: pause(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE