#include <TopExp_Explorer.hxx>
#include <occwrapper/topexp_explorer.hpp>

TopExpExplorer TopExpExplorer_Init(TopoDSShape shape, TopAbsShapeEnum toFind) {
    TopoDS_Shape *s = (TopoDS_Shape *) shape;
    TopExp_Explorer *exp = new TopExp_Explorer(*s, TopAbs_ShapeEnum(toFind));
    return (void *) exp;
}

void TopExpExplorer_Free(TopExpExplorer exp) {
    TopExp_Explorer *e = (TopExp_Explorer *) exp;
    delete e;
}

bool TopExpExplorer_More(TopExpExplorer exp) {
    TopExp_Explorer *e = (TopExp_Explorer *) exp;
    return e->More();
}

void TopExpExplorer_Next(TopExpExplorer exp) {
    TopExp_Explorer *e = (TopExp_Explorer *) exp;
    e->Next();
}

TopoDSShape TopExpExplorer_Current(TopExpExplorer exp) {
    TopExp_Explorer *e = (TopExp_Explorer *) exp;
    TopoDS_Shape *ret = new TopoDS_Shape();
    *ret = e->Current();
    return ret;
}

int TopExpExplorer_Depth(TopExpExplorer exp) {
    TopExp_Explorer *e = (TopExp_Explorer *) exp;
    return e->Depth();
}