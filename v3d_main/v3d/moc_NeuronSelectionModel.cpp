/****************************************************************************
** Meta object code from reading C++ file 'NeuronSelectionModel.h'
**
** Created: Tue Jan 27 16:06:59 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/data_model/NeuronSelectionModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NeuronSelectionModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NeuronSelectionModel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      49,   36,   21,   21, 0x05,
      84,   36,   21,   21, 0x05,
     118,   21,   21,   21, 0x05,
     152,  146,   21,   21, 0x05,
     179,   21,   21,   21, 0x05,
     199,  146,   21,   21, 0x05,
     229,   21,   21,   21, 0x05,
     248,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     267,   21,   21,   21, 0x0a,
     299,   36,  294,   21, 0x0a,
     326,   36,  294,   21, 0x0a,
     350,   21,  294,   21, 0x0a,
     367,   21,  294,   21, 0x0a,
     385,  146,  294,   21, 0x0a,
     404,  146,  294,   21, 0x0a,
     423,   21,  294,   21, 0x0a,
     448,  146,  294,   21, 0x0a,
     474,   21,  294,   21, 0x0a,
     500,   21,  294,   21, 0x0a,
     529,   21,  294,   21, 0x0a,
     543,   21,  294,   21, 0x0a,
     581,   21,  294,   21, 0x0a,
     621,   21,  294,   21, 0x0a,
     660,   21,  294,   21, 0x0a,
     712,  146,  294,   21, 0x0a,
     740,   21,  294,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NeuronSelectionModel[] = {
    "NeuronSelectionModel\0\0initialized()\0"
    "index,status\0overlayVisibilityChanged(int,bool)\0"
    "neuronVisibilityChanged(int,bool)\0"
    "multipleVisibilityChanged()\0index\0"
    "exactlyOneNeuronShown(int)\0"
    "visibilityChanged()\0exactlyOneNeuronSelected(int)\0"
    "selectionCleared()\0selectionChanged()\0"
    "initializeSelectionModel()\0bool\0"
    "updateNeuronMask(int,bool)\0"
    "updateOverlay(int,bool)\0showAllNeurons()\0"
    "clearAllNeurons()\0hideOneNeuron(int)\0"
    "showOneNeuron(int)\0showOverlays(QList<int>)\0"
    "showExactlyOneNeuron(int)\0"
    "showFirstSelectedNeuron()\0"
    "showAllNeuronsInEmptySpace()\0showNothing()\0"
    "showExactlyOneNeuronInEmptySpace(int)\0"
    "showExactlyOneNeuronWithBackground(int)\0"
    "showExactlyOneNeuronWithReference(int)\0"
    "showExactlyOneNeuronWithBackgroundAndReference(int)\0"
    "selectExactlyOneNeuron(int)\0"
    "clearSelection()\0"
};

const QMetaObject NeuronSelectionModel::staticMetaObject = {
    { &NaLockableData::staticMetaObject, qt_meta_stringdata_NeuronSelectionModel,
      qt_meta_data_NeuronSelectionModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NeuronSelectionModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NeuronSelectionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NeuronSelectionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NeuronSelectionModel))
        return static_cast<void*>(const_cast< NeuronSelectionModel*>(this));
    return NaLockableData::qt_metacast(_clname);
}

int NeuronSelectionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NaLockableData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initialized(); break;
        case 1: overlayVisibilityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: neuronVisibilityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: multipleVisibilityChanged(); break;
        case 4: exactlyOneNeuronShown((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: visibilityChanged(); break;
        case 6: exactlyOneNeuronSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: selectionCleared(); break;
        case 8: selectionChanged(); break;
        case 9: initializeSelectionModel(); break;
        case 10: { bool _r = updateNeuronMask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = updateOverlay((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = showAllNeurons();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = clearAllNeurons();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = hideOneNeuron((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = showOneNeuron((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = showOverlays((*reinterpret_cast< const QList<int>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = showExactlyOneNeuron((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = showFirstSelectedNeuron();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = showAllNeuronsInEmptySpace();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = showNothing();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = showExactlyOneNeuronInEmptySpace((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = showExactlyOneNeuronWithBackground((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = showExactlyOneNeuronWithReference((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = showExactlyOneNeuronWithBackgroundAndReference((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = selectExactlyOneNeuron((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = clearSelection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void NeuronSelectionModel::initialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void NeuronSelectionModel::overlayVisibilityChanged(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NeuronSelectionModel::neuronVisibilityChanged(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NeuronSelectionModel::multipleVisibilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void NeuronSelectionModel::exactlyOneNeuronShown(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NeuronSelectionModel::visibilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void NeuronSelectionModel::exactlyOneNeuronSelected(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void NeuronSelectionModel::selectionCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void NeuronSelectionModel::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
QT_END_MOC_NAMESPACE
