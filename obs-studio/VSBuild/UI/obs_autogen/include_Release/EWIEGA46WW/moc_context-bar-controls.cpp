/****************************************************************************
** Meta object code from reading C++ file 'context-bar-controls.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../UI/context-bar-controls.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'context-bar-controls.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SourceToolbar_t {
    QByteArrayData data[3];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SourceToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SourceToolbar_t qt_meta_stringdata_SourceToolbar = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SourceToolbar"
QT_MOC_LITERAL(1, 14, 6), // "Update"
QT_MOC_LITERAL(2, 21, 0) // ""

    },
    "SourceToolbar\0Update\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SourceToolbar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SourceToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SourceToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Update(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SourceToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SourceToolbar.data,
    qt_meta_data_SourceToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SourceToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SourceToolbar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SourceToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_BrowserToolbar_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BrowserToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BrowserToolbar_t qt_meta_stringdata_BrowserToolbar = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BrowserToolbar"
QT_MOC_LITERAL(1, 15, 18), // "on_refresh_clicked"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "BrowserToolbar\0on_refresh_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrowserToolbar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void BrowserToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowserToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_refresh_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BrowserToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<SourceToolbar::staticMetaObject>(),
    qt_meta_stringdata_BrowserToolbar.data,
    qt_meta_data_BrowserToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BrowserToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrowserToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BrowserToolbar.stringdata0))
        return static_cast<void*>(this);
    return SourceToolbar::qt_metacast(_clname);
}

int BrowserToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SourceToolbar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_ComboSelectToolbar_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComboSelectToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComboSelectToolbar_t qt_meta_stringdata_ComboSelectToolbar = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ComboSelectToolbar"
QT_MOC_LITERAL(1, 19, 29), // "on_device_currentIndexChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 3) // "idx"

    },
    "ComboSelectToolbar\0on_device_currentIndexChanged\0"
    "\0idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComboSelectToolbar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void ComboSelectToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComboSelectToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_device_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ComboSelectToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<SourceToolbar::staticMetaObject>(),
    qt_meta_stringdata_ComboSelectToolbar.data,
    qt_meta_data_ComboSelectToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComboSelectToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComboSelectToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComboSelectToolbar.stringdata0))
        return static_cast<void*>(this);
    return SourceToolbar::qt_metacast(_clname);
}

int ComboSelectToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SourceToolbar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_AudioCaptureToolbar_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioCaptureToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioCaptureToolbar_t qt_meta_stringdata_AudioCaptureToolbar = {
    {
QT_MOC_LITERAL(0, 0, 19) // "AudioCaptureToolbar"

    },
    "AudioCaptureToolbar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioCaptureToolbar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AudioCaptureToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AudioCaptureToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<ComboSelectToolbar::staticMetaObject>(),
    qt_meta_stringdata_AudioCaptureToolbar.data,
    qt_meta_data_AudioCaptureToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AudioCaptureToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioCaptureToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioCaptureToolbar.stringdata0))
        return static_cast<void*>(this);
    return ComboSelectToolbar::qt_metacast(_clname);
}

int AudioCaptureToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComboSelectToolbar::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WindowCaptureToolbar_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowCaptureToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowCaptureToolbar_t qt_meta_stringdata_WindowCaptureToolbar = {
    {
QT_MOC_LITERAL(0, 0, 20) // "WindowCaptureToolbar"

    },
    "WindowCaptureToolbar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowCaptureToolbar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void WindowCaptureToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WindowCaptureToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<ComboSelectToolbar::staticMetaObject>(),
    qt_meta_stringdata_WindowCaptureToolbar.data,
    qt_meta_data_WindowCaptureToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WindowCaptureToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowCaptureToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WindowCaptureToolbar.stringdata0))
        return static_cast<void*>(this);
    return ComboSelectToolbar::qt_metacast(_clname);
}

int WindowCaptureToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComboSelectToolbar::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DisplayCaptureToolbar_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisplayCaptureToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisplayCaptureToolbar_t qt_meta_stringdata_DisplayCaptureToolbar = {
    {
QT_MOC_LITERAL(0, 0, 21) // "DisplayCaptureToolbar"

    },
    "DisplayCaptureToolbar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisplayCaptureToolbar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DisplayCaptureToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DisplayCaptureToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<ComboSelectToolbar::staticMetaObject>(),
    qt_meta_stringdata_DisplayCaptureToolbar.data,
    qt_meta_data_DisplayCaptureToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DisplayCaptureToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisplayCaptureToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DisplayCaptureToolbar.stringdata0))
        return static_cast<void*>(this);
    return ComboSelectToolbar::qt_metacast(_clname);
}

int DisplayCaptureToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComboSelectToolbar::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DeviceCaptureToolbar_t {
    QByteArrayData data[3];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceCaptureToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceCaptureToolbar_t qt_meta_stringdata_DeviceCaptureToolbar = {
    {
QT_MOC_LITERAL(0, 0, 20), // "DeviceCaptureToolbar"
QT_MOC_LITERAL(1, 21, 25), // "on_activateButton_clicked"
QT_MOC_LITERAL(2, 47, 0) // ""

    },
    "DeviceCaptureToolbar\0on_activateButton_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceCaptureToolbar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void DeviceCaptureToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceCaptureToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_activateButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DeviceCaptureToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DeviceCaptureToolbar.data,
    qt_meta_data_DeviceCaptureToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceCaptureToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceCaptureToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceCaptureToolbar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DeviceCaptureToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_GameCaptureToolbar_t {
    QByteArrayData data[5];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameCaptureToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameCaptureToolbar_t qt_meta_stringdata_GameCaptureToolbar = {
    {
QT_MOC_LITERAL(0, 0, 18), // "GameCaptureToolbar"
QT_MOC_LITERAL(1, 19, 27), // "on_mode_currentIndexChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 3), // "idx"
QT_MOC_LITERAL(4, 52, 29) // "on_window_currentIndexChanged"

    },
    "GameCaptureToolbar\0on_mode_currentIndexChanged\0"
    "\0idx\0on_window_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameCaptureToolbar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void GameCaptureToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameCaptureToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_mode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_window_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GameCaptureToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<SourceToolbar::staticMetaObject>(),
    qt_meta_stringdata_GameCaptureToolbar.data,
    qt_meta_data_GameCaptureToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GameCaptureToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameCaptureToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameCaptureToolbar.stringdata0))
        return static_cast<void*>(this);
    return SourceToolbar::qt_metacast(_clname);
}

int GameCaptureToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SourceToolbar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_ImageSourceToolbar_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageSourceToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageSourceToolbar_t qt_meta_stringdata_ImageSourceToolbar = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ImageSourceToolbar"
QT_MOC_LITERAL(1, 19, 17), // "on_browse_clicked"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "ImageSourceToolbar\0on_browse_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageSourceToolbar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ImageSourceToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageSourceToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_browse_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ImageSourceToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<SourceToolbar::staticMetaObject>(),
    qt_meta_stringdata_ImageSourceToolbar.data,
    qt_meta_data_ImageSourceToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageSourceToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageSourceToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageSourceToolbar.stringdata0))
        return static_cast<void*>(this);
    return SourceToolbar::qt_metacast(_clname);
}

int ImageSourceToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SourceToolbar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_ColorSourceToolbar_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorSourceToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorSourceToolbar_t qt_meta_stringdata_ColorSourceToolbar = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ColorSourceToolbar"
QT_MOC_LITERAL(1, 19, 17), // "on_choose_clicked"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "ColorSourceToolbar\0on_choose_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorSourceToolbar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ColorSourceToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorSourceToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_choose_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ColorSourceToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<SourceToolbar::staticMetaObject>(),
    qt_meta_stringdata_ColorSourceToolbar.data,
    qt_meta_data_ColorSourceToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorSourceToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorSourceToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorSourceToolbar.stringdata0))
        return static_cast<void*>(this);
    return SourceToolbar::qt_metacast(_clname);
}

int ColorSourceToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SourceToolbar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_TextSourceToolbar_t {
    QByteArrayData data[5];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextSourceToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextSourceToolbar_t qt_meta_stringdata_TextSourceToolbar = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TextSourceToolbar"
QT_MOC_LITERAL(1, 18, 21), // "on_selectFont_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 22), // "on_selectColor_clicked"
QT_MOC_LITERAL(4, 64, 19) // "on_text_textChanged"

    },
    "TextSourceToolbar\0on_selectFont_clicked\0"
    "\0on_selectColor_clicked\0on_text_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextSourceToolbar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TextSourceToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextSourceToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_selectFont_clicked(); break;
        case 1: _t->on_selectColor_clicked(); break;
        case 2: _t->on_text_textChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TextSourceToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<SourceToolbar::staticMetaObject>(),
    qt_meta_stringdata_TextSourceToolbar.data,
    qt_meta_data_TextSourceToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TextSourceToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextSourceToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextSourceToolbar.stringdata0))
        return static_cast<void*>(this);
    return SourceToolbar::qt_metacast(_clname);
}

int TextSourceToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SourceToolbar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
