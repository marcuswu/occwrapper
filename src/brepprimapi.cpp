#include <BRepPrimAPI_MakePrism.hxx>
#include <BRepPrimAPI_MakeRevol.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
#include <occwrapper/brepprimapi.h>

BRepPrimAPIMakeRevol BRepPrimAPIMakeRevol_Init(TopoDSFace face, gpAx1 axis, double degrees) {
    TopoDS_Face *f = (TopoDS_Face *)face;
    gp_Ax1 *a = (gp_Ax1 *)axis;
    BRepPrimAPI_MakeRevol *ret = new BRepPrimAPI_MakeRevol(*f, *a, degrees);
    return (void*) ret;

}

TopoDSShape BRepPrimAPIMakeRevol_Shape(BRepPrimAPIMakeRevol makeRevol) {
    BRepPrimAPI_MakeRevol *revol = (BRepPrimAPI_MakeRevol *)makeRevol;

    TopoDS_Shape *ret = new TopoDS_Shape();
    *ret = revol->Shape();
    return ret;
}

void BRepPrimAPIMakeRevol_Free(BRepPrimAPIMakeRevol makeRevol) {
    BRepPrimAPI_MakeRevol *revol = (BRepPrimAPI_MakeRevol *)makeRevol;
    delete revol;
}

BRepPrimAPIMakePrism BRepPrimAPIMakePrism_Init(TopoDSFace face, gpVec vec) {
    TopoDS_Face *f = (TopoDS_Face *)face;
    gp_Vec *v = (gp_Vec *)vec;
    BRepPrimAPI_MakePrism *ret = new BRepPrimAPI_MakePrism(*f, *v);
    return (void*) ret;
}

TopoDSShape BRepPrimAPIMakePrism_Shape(BRepPrimAPIMakePrism makePrism) {
    BRepPrimAPI_MakePrism *prism = (BRepPrimAPI_MakePrism *)makePrism;

    TopoDS_Shape *ret = new TopoDS_Shape();
    *ret = prism->Shape();
    return ret;
}

void BRepPrimAPIMakePrism_Free(BRepPrimAPIMakePrism makePrism) {
    BRepPrimAPI_MakePrism *prism = (BRepPrimAPI_MakePrism *)makePrism;
    delete prism;
}
