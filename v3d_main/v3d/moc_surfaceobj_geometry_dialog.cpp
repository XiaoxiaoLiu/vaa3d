/****************************************************************************
** Meta object code from reading C++ file 'surfaceobj_geometry_dialog.h'
**
** Created: Tue Jan 27 16:06:57 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "surfaceobj_geometry_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'surfaceobj_geometry_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SurfaceObjGeometryDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      34,   25,   25,   25, 0x0a,
      43,   41,   25,   25, 0x0a,
      59,   41,   25,   25, 0x0a,
      75,   41,   25,   25, 0x0a,
      91,   41,   25,   25, 0x0a,
     107,   41,   25,   25, 0x0a,
     123,   41,   25,   25, 0x0a,
     139,   41,   25,   25, 0x0a,
     156,   41,   25,   25, 0x0a,
     173,   41,   25,   25, 0x0a,
     190,   41,   25,   25, 0x0a,
     208,  206,   25,   25, 0x0a,
     229,  206,   25,   25, 0x0a,
     250,  206,   25,   25, 0x0a,
     271,  206,   25,   25, 0x0a,
     296,  206,   25,   25, 0x0a,
     308,  206,   25,   25, 0x0a,
     320,  206,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SurfaceObjGeometryDialog[] = {
    "SurfaceObjGeometryDialog\0\0reset()\0"
    "undo()\0s\0shift_x(double)\0shift_y(double)\0"
    "shift_z(double)\0scale_x(double)\0"
    "scale_y(double)\0scale_z(double)\0"
    "gscale_x(double)\0gscale_y(double)\0"
    "gscale_z(double)\0scale_r(double)\0v\0"
    "rotate_around_x(int)\0rotate_around_y(int)\0"
    "rotate_around_z(int)\0change_use_rotation(int)\0"
    "flip_x(int)\0flip_y(int)\0flip_z(int)\0"
};

const QMetaObject SurfaceObjGeometryDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SurfaceObjGeometryDialog,
      qt_meta_data_SurfaceObjGeometryDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SurfaceObjGeometryDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SurfaceObjGeometryDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SurfaceObjGeometryDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SurfaceObjGeometryDialog))
        return static_cast<void*>(const_cast< SurfaceObjGeometryDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SurfaceObjGeometryDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: reset(); break;
        case 1: undo(); break;
        case 2: shift_x((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: shift_y((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: shift_z((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: scale_x((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: scale_y((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: scale_z((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: gscale_x((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: gscale_y((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: gscale_z((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: scale_r((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: rotate_around_x((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: rotate_around_y((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: rotate_around_z((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: change_use_rotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: flip_x((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: flip_y((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: flip_z((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
