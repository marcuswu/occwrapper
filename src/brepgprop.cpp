#include <GProp_GProps.hxx>
#include <BRepGProp.hxx>
#include <occwrapper/brepgprop.h>

void BRepGProp_SurfaceProperties(TopoDSShape shape, GPropGProps sprops, bool skipShared, bool useTriangulation) {
    TopoDS_Shape *s = (TopoDS_Shape *)shape;
    GProp_GProps *p = (GProp_GProps *)sprops;
    BRepGProp::SurfaceProperties(*s, *p, skipShared, useTriangulation);
}

void BRepGProp_LinearProperties(TopoDSShape shape, GPropGProps lprops, bool skipShared, bool useTriangulation) {
    TopoDS_Shape *s = (TopoDS_Shape *)shape;
    GProp_GProps *l = (GProp_GProps *)lprops;
    BRepGProp::LinearProperties(*s, *l, skipShared, useTriangulation);
}