/****************************************************************************
** Meta object code from reading C++ file 'DownloadManager.h'
**
** Created: Tue Jan 27 16:06:58 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "DownloadManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DownloadManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_V3dUrlDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_V3dUrlDialog[] = {
    "V3dUrlDialog\0\0on_lineEdit_textChanged()\0"
};

const QMetaObject V3dUrlDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_V3dUrlDialog,
      qt_meta_data_V3dUrlDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &V3dUrlDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *V3dUrlDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *V3dUrlDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_V3dUrlDialog))
        return static_cast<void*>(const_cast< V3dUrlDialog*>(this));
    if (!strcmp(_clname, "Ui::V3dUrlDialog"))
        return static_cast< Ui::V3dUrlDialog*>(const_cast< V3dUrlDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int V3dUrlDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lineEdit_textChanged(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_DownloadManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      61,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     108,   16,   16,   16, 0x0a,
     154,  129,   16,   16, 0x0a,
     196,  190,   16,   16, 0x09,
     245,  233,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DownloadManager[] = {
    "DownloadManager\0\0"
    "url,fileName,b_cacheFile,bforceopen3dviewer\0"
    "downloadFinishedSignal(QUrl,QString,bool,bool)\0"
    "cancelDownloadSlot()\0bytesReceived,bytesTotal\0"
    "downloadProgressSlot(qint64,qint64)\0"
    "reply\0finishedDownloadSlot(QNetworkReply*)\0"
    "headerReply\0gotHeaderSlot(QNetworkReply*)\0"
};

const QMetaObject DownloadManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DownloadManager,
      qt_meta_data_DownloadManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DownloadManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DownloadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DownloadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadManager))
        return static_cast<void*>(const_cast< DownloadManager*>(this));
    return QObject::qt_metacast(_clname);
}

int DownloadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: downloadFinishedSignal((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 1: cancelDownloadSlot(); break;
        case 2: downloadProgressSlot((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: finishedDownloadSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: gotHeaderSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DownloadManager::downloadFinishedSignal(QUrl _t1, QString _t2, bool _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
