#include <GProp_GProps.hxx>
#include <BRepGProp.hxx>
#include <occwrapper/brepgprop.hpp>

void BRepGProp_SurfaceProperties(TopoDSShape shape, GPropGProps sprops, bool skipShared, bool useTriangulation) {
    TopoDS_Shape *s = (TopoDS_Shape *)shape;
    GProp_GProps *p = (GProp_GProps *)sprops;
    BRepGProp::SurfaceProperties(*s, *p, skipShared, useTriangulation);
}