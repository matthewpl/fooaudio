/****************************************************************************
** Meta object code from reading C++ file 'fooplaylist.hpp'
**
** Created: Fri Feb 6 22:38:21 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fooplaylist.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fooplaylist.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FooPlaylist[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x09,
      30,   12,   12,   12, 0x09,
      47,   12,   12,   12, 0x09,
      64,   61,   12,   12, 0x09,
     109,  107,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FooPlaylist[] = {
    "FooPlaylist\0\0removePlaylist()\0"
    "renamePlaylist()\0newPlaylist()\0,,\0"
    "showTabMenu(int,QPoint,QContextMenuEvent*)\0"
    ",\0showTabBarMenu(QPoint,QContextMenuEvent*)\0"
};

const QMetaObject FooPlaylist::staticMetaObject = {
    { &FooTabWidget::staticMetaObject, qt_meta_stringdata_FooPlaylist,
      qt_meta_data_FooPlaylist, 0 }
};

const QMetaObject *FooPlaylist::metaObject() const
{
    return &staticMetaObject;
}

void *FooPlaylist::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FooPlaylist))
        return static_cast<void*>(const_cast< FooPlaylist*>(this));
    return FooTabWidget::qt_metacast(_clname);
}

int FooPlaylist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FooTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: removePlaylist(); break;
        case 1: renamePlaylist(); break;
        case 2: newPlaylist(); break;
        case 3: showTabMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2])),(*reinterpret_cast< QContextMenuEvent*(*)>(_a[3]))); break;
        case 4: showTabBarMenu((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QContextMenuEvent*(*)>(_a[2]))); break;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
