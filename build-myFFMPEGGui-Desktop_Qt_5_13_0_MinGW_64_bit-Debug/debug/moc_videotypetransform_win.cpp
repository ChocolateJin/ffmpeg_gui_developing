/****************************************************************************
** Meta object code from reading C++ file 'videotypetransform_win.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../myFFMPEGGui/videotypetransform_win.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videotypetransform_win.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoTypeTransform_win_t {
    QByteArrayData data[8];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoTypeTransform_win_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoTypeTransform_win_t qt_meta_stringdata_VideoTypeTransform_win = {
    {
QT_MOC_LITERAL(0, 0, 22), // "VideoTypeTransform_win"
QT_MOC_LITERAL(1, 23, 24), // "on_step_1_button_clicked"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 24), // "on_step_2_button_clicked"
QT_MOC_LITERAL(4, 74, 24), // "on_step_3_button_clicked"
QT_MOC_LITERAL(5, 99, 24), // "on_step_4_button_clicked"
QT_MOC_LITERAL(6, 124, 24), // "on_step_5_button_clicked"
QT_MOC_LITERAL(7, 149, 10) // "showoutput"

    },
    "VideoTypeTransform_win\0on_step_1_button_clicked\0"
    "\0on_step_2_button_clicked\0"
    "on_step_3_button_clicked\0"
    "on_step_4_button_clicked\0"
    "on_step_5_button_clicked\0showoutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoTypeTransform_win[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VideoTypeTransform_win::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoTypeTransform_win *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_step_1_button_clicked(); break;
        case 1: _t->on_step_2_button_clicked(); break;
        case 2: _t->on_step_3_button_clicked(); break;
        case 3: _t->on_step_4_button_clicked(); break;
        case 4: _t->on_step_5_button_clicked(); break;
        case 5: _t->showoutput(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VideoTypeTransform_win::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_VideoTypeTransform_win.data,
    qt_meta_data_VideoTypeTransform_win,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VideoTypeTransform_win::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoTypeTransform_win::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoTypeTransform_win.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int VideoTypeTransform_win::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
