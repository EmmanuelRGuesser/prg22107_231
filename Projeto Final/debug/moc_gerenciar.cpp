/****************************************************************************
** Meta object code from reading C++ file 'gerenciar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gerenciar.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gerenciar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
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
struct qt_meta_stringdata_CLASSgerenciarENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSgerenciarENDCLASS = QtMocHelpers::stringData(
    "gerenciar",
    "on_addAtendente_clicked",
    "",
    "on_delAtendente_clicked",
    "on_modAtendente_clicked",
    "on_addMedico_clicked",
    "on_delMedico_clicked",
    "on_modMedico_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSgerenciarENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[10];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[24];
    char stringdata5[21];
    char stringdata6[21];
    char stringdata7[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSgerenciarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSgerenciarENDCLASS_t qt_meta_stringdata_CLASSgerenciarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "gerenciar"
        QT_MOC_LITERAL(10, 23),  // "on_addAtendente_clicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 23),  // "on_delAtendente_clicked"
        QT_MOC_LITERAL(59, 23),  // "on_modAtendente_clicked"
        QT_MOC_LITERAL(83, 20),  // "on_addMedico_clicked"
        QT_MOC_LITERAL(104, 20),  // "on_delMedico_clicked"
        QT_MOC_LITERAL(125, 20)   // "on_modMedico_clicked"
    },
    "gerenciar",
    "on_addAtendente_clicked",
    "",
    "on_delAtendente_clicked",
    "on_modAtendente_clicked",
    "on_addMedico_clicked",
    "on_delMedico_clicked",
    "on_modMedico_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSgerenciarENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject gerenciar::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSgerenciarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSgerenciarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSgerenciarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gerenciar, std::true_type>,
        // method 'on_addAtendente_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_delAtendente_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_modAtendente_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addMedico_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_delMedico_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_modMedico_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void gerenciar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gerenciar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_addAtendente_clicked(); break;
        case 1: _t->on_delAtendente_clicked(); break;
        case 2: _t->on_modAtendente_clicked(); break;
        case 3: _t->on_addMedico_clicked(); break;
        case 4: _t->on_delMedico_clicked(); break;
        case 5: _t->on_modMedico_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *gerenciar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gerenciar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSgerenciarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int gerenciar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
