/****************************************************************************
** Meta object code from reading C++ file 'NaLockableData.h'
**
** Created: Tue Jan 27 16:06:58 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/data_model/NaLockableData.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NaLockableData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NaLockableData[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      34,   30,   15,   15, 0x05,
      66,   15,   15,   15, 0x05,
      92,   30,   15,   15, 0x05,
     117,   15,   15,   15, 0x05,
     137,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     151,   15,   15,   15, 0x0a,
     160,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NaLockableData[] = {
    "NaLockableData\0\0dataChanged()\0msg\0"
    "progressMessageChanged(QString)\0"
    "progressValueChanged(int)\0"
    "progressAborted(QString)\0progressCompleted()\0"
    "invalidated()\0update()\0invalidate()\0"
};

const QMetaObject NaLockableData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NaLockableData,
      qt_meta_data_NaLockableData, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NaLockableData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NaLockableData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NaLockableData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NaLockableData))
        return static_cast<void*>(const_cast< NaLockableData*>(this));
    return QObject::qt_metacast(_clname);
}

int NaLockableData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dataChanged(); break;
        case 1: progressMessageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: progressValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: progressAborted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: progressCompleted(); break;
        case 5: invalidated(); break;
        case 6: update(); break;
        case 7: invalidate(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void NaLockableData::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void NaLockableData::progressMessageChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NaLockableData::progressValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NaLockableData::progressAborted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NaLockableData::progressCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void NaLockableData::invalidated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
