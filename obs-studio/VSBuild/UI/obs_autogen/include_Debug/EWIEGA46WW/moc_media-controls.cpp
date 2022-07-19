/****************************************************************************
** Meta object code from reading C++ file 'media-controls.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../UI/media-controls.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'media-controls.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MediaControls_t {
    QByteArrayData data[26];
    char stringdata0[418];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MediaControls_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MediaControls_t qt_meta_stringdata_MediaControls = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MediaControls"
QT_MOC_LITERAL(1, 14, 26), // "on_playPauseButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(4, 64, 21), // "on_nextButton_clicked"
QT_MOC_LITERAL(5, 86, 25), // "on_previousButton_clicked"
QT_MOC_LITERAL(6, 112, 24), // "on_durationLabel_clicked"
QT_MOC_LITERAL(7, 137, 18), // "MediaSliderClicked"
QT_MOC_LITERAL(8, 156, 19), // "MediaSliderReleased"
QT_MOC_LITERAL(9, 176, 18), // "MediaSliderHovered"
QT_MOC_LITERAL(10, 195, 3), // "val"
QT_MOC_LITERAL(11, 199, 16), // "MediaSliderMoved"
QT_MOC_LITERAL(12, 216, 17), // "SetSliderPosition"
QT_MOC_LITERAL(13, 234, 15), // "SetPlayingState"
QT_MOC_LITERAL(14, 250, 14), // "SetPausedState"
QT_MOC_LITERAL(15, 265, 15), // "SetRestartState"
QT_MOC_LITERAL(16, 281, 12), // "RestartMedia"
QT_MOC_LITERAL(17, 294, 9), // "StopMedia"
QT_MOC_LITERAL(18, 304, 12), // "PlaylistNext"
QT_MOC_LITERAL(19, 317, 16), // "PlaylistPrevious"
QT_MOC_LITERAL(20, 334, 17), // "SeekTimerCallback"
QT_MOC_LITERAL(21, 352, 16), // "MoveSliderFoward"
QT_MOC_LITERAL(22, 369, 7), // "seconds"
QT_MOC_LITERAL(23, 377, 19), // "MoveSliderBackwards"
QT_MOC_LITERAL(24, 397, 9), // "PlayMedia"
QT_MOC_LITERAL(25, 407, 10) // "PauseMedia"

    },
    "MediaControls\0on_playPauseButton_clicked\0"
    "\0on_stopButton_clicked\0on_nextButton_clicked\0"
    "on_previousButton_clicked\0"
    "on_durationLabel_clicked\0MediaSliderClicked\0"
    "MediaSliderReleased\0MediaSliderHovered\0"
    "val\0MediaSliderMoved\0SetSliderPosition\0"
    "SetPlayingState\0SetPausedState\0"
    "SetRestartState\0RestartMedia\0StopMedia\0"
    "PlaylistNext\0PlaylistPrevious\0"
    "SeekTimerCallback\0MoveSliderFoward\0"
    "seconds\0MoveSliderBackwards\0PlayMedia\0"
    "PauseMedia"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MediaControls[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  134,    2, 0x08 /* Private */,
       3,    0,  135,    2, 0x08 /* Private */,
       4,    0,  136,    2, 0x08 /* Private */,
       5,    0,  137,    2, 0x08 /* Private */,
       6,    0,  138,    2, 0x08 /* Private */,
       7,    0,  139,    2, 0x08 /* Private */,
       8,    0,  140,    2, 0x08 /* Private */,
       9,    1,  141,    2, 0x08 /* Private */,
      11,    1,  144,    2, 0x08 /* Private */,
      12,    0,  147,    2, 0x08 /* Private */,
      13,    0,  148,    2, 0x08 /* Private */,
      14,    0,  149,    2, 0x08 /* Private */,
      15,    0,  150,    2, 0x08 /* Private */,
      16,    0,  151,    2, 0x08 /* Private */,
      17,    0,  152,    2, 0x08 /* Private */,
      18,    0,  153,    2, 0x08 /* Private */,
      19,    0,  154,    2, 0x08 /* Private */,
      20,    0,  155,    2, 0x08 /* Private */,
      21,    1,  156,    2, 0x08 /* Private */,
      21,    0,  159,    2, 0x28 /* Private | MethodCloned */,
      23,    1,  160,    2, 0x08 /* Private */,
      23,    0,  163,    2, 0x28 /* Private | MethodCloned */,
      24,    0,  164,    2, 0x0a /* Public */,
      25,    0,  165,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MediaControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MediaControls *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_playPauseButton_clicked(); break;
        case 1: _t->on_stopButton_clicked(); break;
        case 2: _t->on_nextButton_clicked(); break;
        case 3: _t->on_previousButton_clicked(); break;
        case 4: _t->on_durationLabel_clicked(); break;
        case 5: _t->MediaSliderClicked(); break;
        case 6: _t->MediaSliderReleased(); break;
        case 7: _t->MediaSliderHovered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->MediaSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->SetSliderPosition(); break;
        case 10: _t->SetPlayingState(); break;
        case 11: _t->SetPausedState(); break;
        case 12: _t->SetRestartState(); break;
        case 13: _t->RestartMedia(); break;
        case 14: _t->StopMedia(); break;
        case 15: _t->PlaylistNext(); break;
        case 16: _t->PlaylistPrevious(); break;
        case 17: _t->SeekTimerCallback(); break;
        case 18: _t->MoveSliderFoward((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->MoveSliderFoward(); break;
        case 20: _t->MoveSliderBackwards((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->MoveSliderBackwards(); break;
        case 22: _t->PlayMedia(); break;
        case 23: _t->PauseMedia(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MediaControls::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MediaControls.data,
    qt_meta_data_MediaControls,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MediaControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaControls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MediaControls.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MediaControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
