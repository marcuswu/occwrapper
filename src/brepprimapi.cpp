#include <BRepPrimAPI_MakePrism.hxx>
#include <BRepPrimAPI_MakeRevol.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
#include <BRepPrimAPI_MakeBox.hxx>
#include <BRepPrimAPI_MakeCylinder.hxx>
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

BRepPrimAPIMakeCylinder BRepPrimAPIMakeCylinder_Init(gpAx2 position, double radius, double height) {
    gp_Ax2 *p = (gp_Ax2 *)position;
    BRepPrimAPI_MakeCylinder *ret = new BRepPrimAPI_MakeCylinder(*p, radius, height);
    return (void*) ret;
}

TopoDSShape BRepPrimAPIMakeCylinder_Shape(BRepPrimAPIMakeCylinder makeCylinder) {
    BRepPrimAPI_MakeCylinder *cylinder = (BRepPrimAPI_MakeCylinder *)makeCylinder;

    TopoDS_Shape *ret = new TopoDS_Shape();
    *ret = cylinder->Shape();
    return ret;
}

void BRepPrimAPIMakeCylinder_Free(BRepPrimAPIMakeCylinder makeCylinder) {
    BRepPrimAPI_MakeCylinder *cylinder = (BRepPrimAPI_MakeCylinder *)makeCylinder;
    delete cylinder;
}

BRepPrimAPIMakeBox BRepPrimAPIMakeBox_Init(gpAx2 position, double dx, double dy, double dz) {
    gp_Ax2 *p = (gp_Ax2 *)position;
    BRepPrimAPI_MakeBox *ret = new BRepPrimAPI_MakeBox(*p, dx, dy, dz);
    return (void*) ret;
}

TopoDSShape BRepPrimAPIMakeBox_Shape(BRepPrimAPIMakeBox makeBox) {
    BRepPrimAPI_MakeBox *box = (BRepPrimAPI_MakeBox *)makeBox;

    TopoDS_Shape *ret = new TopoDS_Shape();
    *ret = box->Shape();
    return ret;
}

void BRepPrimAPIMakeBox_Free(BRepPrimAPIMakeBox makeBox) {
    BRepPrimAPI_MakeBox *box = (BRepPrimAPI_MakeBox *)makeBox;
    delete box;
}
