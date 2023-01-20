
#include <TopExp_Explorer.hxx>
#include <occwrapper/topexp_explorer.hpp>

TopExpExplorer TopExpExplorerInit(TopoDSShape shape, TopAbsShapeEnum toFind) {
    TopoDS_Shape *s = (TopoDS_Shape *) shape;
    TopExp_Explorer *exp = new TopExp_Explorer(*s, TopAbs_ShapeEnum(toFind));
    return (void *) exp;
}

bool TopExpExplorerMore(TopExpExplorer exp) {
    TopExp_Explorer *e = (TopExp_Explorer *) exp;
    return e->More();
}

void TopExpExplorerNext(TopExpExplorer exp) {
    TopExp_Explorer *e = (TopExp_Explorer *) exp;
    e->Next();
}

TopoDSShape TopExpExplorerCurrent(TopExpExplorer exp) {
    TopExp_Explorer *e = (TopExp_Explorer *) exp;
    TopoDS_Shape *ret = new TopoDS_Shape();
    *ret = e->Current();
    return ret;
}

int TopExpExplorerDepth(TopExpExplorer exp) {
    TopExp_Explorer *e = (TopExp_Explorer *) exp;
    return e->Depth();
}