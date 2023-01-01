#include <BRepPrimAPI_MakePrism.hxx>
#include <BRepPrimAPI_MakeRevol.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
#include <occwrapper/brepprimapi.hpp>

BRepPrimAPIMakeRevol BRepPrimAPIMakeRevolInit(TopoDSFace face, gpAx1 axis, double degrees) {
    TopoDS_Face *f = (TopoDS_Face *)face;
    gp_Ax1 *a = (gp_Ax1 *)axis;
    BRepPrimAPI_MakeRevol *ret = new BRepPrimAPI_MakeRevol(*f, *a, degrees);
    return (void*) ret;

}

BRepPrimAPIMakePrism BRepPrimAPIMakePrismInit(TopoDSFace face, gpVec vec) {
    TopoDS_Face *f = (TopoDS_Face *)face;
    gp_Vec *v = (gp_Vec *)vec;
    BRepPrimAPI_MakePrism *ret = new BRepPrimAPI_MakePrism(*f, *v);
    return (void*) ret;
}