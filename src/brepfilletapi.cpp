#include <opencascade/BRepFilletAPI_MakeChamfer.hxx>
#include <opencascade/BRepFilletAPI_MakeFillet.hxx>
#include <occwrapper/brepfilletapi.h>

BRepFilletAPIMakeFillet BRepFilletAPIMakeFillet_Init(TopoDSShape shape) {
    TopoDS_Shape *s = (TopoDS_Shape*)shape;
    BRepFilletAPI_MakeFillet *ret = new BRepFilletAPI_MakeFillet(*s);
    return (void*) ret;
}

void BRepFilletAPIMakeFillet_Add(BRepFilletAPIMakeFillet f, TopoDSEdge e, double radius) {
    BRepFilletAPI_MakeFillet *fillet = (BRepFilletAPI_MakeFillet*)f;
    TopoDS_Edge *edge = (TopoDS_Edge*)e;
    fillet->Add(radius, *edge);
}

TopoDSShape BRepFilletAPIMakeFillet_Shape(BRepFilletAPIMakeFillet f) {
    BRepFilletAPI_MakeFillet *fillet = (BRepFilletAPI_MakeFillet*)f;
    
    TopoDS_Shape *ret = new TopoDS_Shape();
    *ret = fillet->Shape();
    return (void*) ret;
}

void BRepFilletAPIMakeFillet_Free(BRepFilletAPIMakeFillet f) {
    BRepFilletAPI_MakeFillet *fillet = (BRepFilletAPI_MakeFillet*)f;
    delete fillet;
}

BRepFilletAPIMakeChamfer BRepFilletAPIMakeChamfer_Init(TopoDSShape shape) {
    TopoDS_Shape *s = (TopoDS_Shape*)shape;
    BRepFilletAPI_MakeChamfer *ret = new BRepFilletAPI_MakeChamfer(*s);
    return (void*) ret;
}

void BRepFilletAPIMakeChamfer_Add(BRepFilletAPIMakeChamfer f, TopoDSEdge e, double radius) {
    BRepFilletAPI_MakeChamfer *chamfer = (BRepFilletAPI_MakeChamfer*)f;
    TopoDS_Edge *edge = (TopoDS_Edge*)e;
    chamfer->Add(radius, *edge);
}

TopoDSShape BRepFilletAPIMakeChamfer_Shape(BRepFilletAPIMakeChamfer f) {
    BRepFilletAPI_MakeChamfer *chamfer = (BRepFilletAPI_MakeChamfer*)f;
    
    TopoDS_Shape *ret = new TopoDS_Shape();
    *ret = chamfer->Shape();
    return (void*) ret;
}

void BRepFilletAPIMakeChamfer_Free(BRepFilletAPIMakeChamfer f) {
    BRepFilletAPI_MakeChamfer *chamfer = (BRepFilletAPI_MakeChamfer*)f;
    delete chamfer;
}