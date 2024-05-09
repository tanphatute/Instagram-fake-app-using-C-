/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../menu.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMenuENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMenuENDCLASS = QtMocHelpers::stringData(
    "Menu",
    "on_SearchAccount_clicked",
    "",
    "on_UpdateAccount_clicked",
    "on_DeleteAccount_clicked",
    "on_Follow_clicked",
    "on_Messages_clicked",
    "on_Followers_clicked",
    "on_Following_clicked",
    "on_RecentMessages_clicked",
    "on_RateApp_clicked",
    "on_AppRating_clicked",
    "on_OldMessages_clicked",
    "on_BlockUser_clicked",
    "on_BlockedUser_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMenuENDCLASS[] = {

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
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    0,   94,    2, 0x08,    3 /* Private */,
       5,    0,   95,    2, 0x08,    4 /* Private */,
       6,    0,   96,    2, 0x08,    5 /* Private */,
       7,    0,   97,    2, 0x08,    6 /* Private */,
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

Q_CONSTINIT const QMetaObject Menu::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSMenuENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMenuENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMenuENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Menu, std::true_type>,
        // method 'on_SearchAccount_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_UpdateAccount_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DeleteAccount_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Follow_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Messages_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Followers_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Following_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_RecentMessages_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_RateApp_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_AppRating_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_OldMessages_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_BlockUser_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_BlockedUser_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Menu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_SearchAccount_clicked(); break;
        case 1: _t->on_UpdateAccount_clicked(); break;
        case 2: _t->on_DeleteAccount_clicked(); break;
        case 3: _t->on_Follow_clicked(); break;
        case 4: _t->on_Messages_clicked(); break;
        case 5: _t->on_Followers_clicked(); break;
        case 6: _t->on_Following_clicked(); break;
        case 7: _t->on_RecentMessages_clicked(); break;
        case 8: _t->on_RateApp_clicked(); break;
        case 9: _t->on_AppRating_clicked(); break;
        case 10: _t->on_OldMessages_clicked(); break;
        case 11: _t->on_BlockUser_clicked(); break;
        case 12: _t->on_BlockedUser_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMenuENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
