/****************************************************************************
** Meta object code from reading C++ file 'video_to_pic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../FFMPEG_gui/video_to_pic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'video_to_pic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_video_to_pic_t {
    QByteArrayData data[13];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_video_to_pic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_video_to_pic_t qt_meta_stringdata_video_to_pic = {
    {
QT_MOC_LITERAL(0, 0, 12), // "video_to_pic"
QT_MOC_LITERAL(1, 13, 20), // "on_set_video_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "on_set_frame_clicked"
QT_MOC_LITERAL(4, 56, 25), // "on_set_output_dir_clicked"
QT_MOC_LITERAL(5, 82, 23), // "on_set_pic_name_clicked"
QT_MOC_LITERAL(6, 106, 38), // "on_set_pic_quality_currentInd..."
QT_MOC_LITERAL(7, 145, 5), // "index"
QT_MOC_LITERAL(8, 151, 26), // "on_Start_transform_clicked"
QT_MOC_LITERAL(9, 178, 24), // "on_select_ffmpeg_clicked"
QT_MOC_LITERAL(10, 203, 10), // "showoutput"
QT_MOC_LITERAL(11, 214, 9), // "showerror"
QT_MOC_LITERAL(12, 224, 25) // "on_stop_transform_clicked"

    },
    "video_to_pic\0on_set_video_clicked\0\0"
    "on_set_frame_clicked\0on_set_output_dir_clicked\0"
    "on_set_pic_name_clicked\0"
    "on_set_pic_quality_currentIndexChanged\0"
    "index\0on_Start_transform_clicked\0"
    "on_select_ffmpeg_clicked\0showoutput\0"
    "showerror\0on_stop_transform_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_video_to_pic[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void video_to_pic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<video_to_pic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_set_video_clicked(); break;
        case 1: _t->on_set_frame_clicked(); break;
        case 2: _t->on_set_output_dir_clicked(); break;
        case 3: _t->on_set_pic_name_clicked(); break;
        case 4: _t->on_set_pic_quality_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_Start_transform_clicked(); break;
        case 6: _t->on_select_ffmpeg_clicked(); break;
        case 7: _t->showoutput(); break;
        case 8: _t->showerror(); break;
        case 9: _t->on_stop_transform_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject video_to_pic::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_video_to_pic.data,
    qt_meta_data_video_to_pic,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *video_to_pic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *video_to_pic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_video_to_pic.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int video_to_pic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
