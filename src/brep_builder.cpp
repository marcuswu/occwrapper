#include <BRep_Builder.hxx>
#include <TopoDS_Compound.hxx>
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <TopoDS_Wire.hxx>
#include <occwrapper/brep_builder.hpp>

BRepBuilder BRepBuilderInit() {
    BRepBuilder *b = new BRepBuilder();
    return (void *) b;
}

void BRepBuilderMakeCompound(BRepBuilder builder, TopoDSCompound res) {
    BRep_Builder *b = (BRep_Builder *) builder;
    TopoDS_Compound *c = (TopoDS_Compound *) res;
    b->MakeCompound(*c);
}

void BRepBuilderAdd(BRepBuilder builder, TopoDSShape res, TopoDSShape shape) {
    BRep_Builder *b = (BRep_Builder *) builder;
    TopoDS_Shape *c = (TopoDS_Shape *) res;
    TopoDS_Shape *s = (TopoDS_Shape *) shape;
    b->Add(*c, *s);
}

BRepBuilderAPIMakeEdge MakeEdgeFromGeomCurve(GeomCurve curve) {
    Handle(Geom_Curve)* c = (Handle(Geom_Curve)*)curve;
    BRepBuilderAPI_MakeEdge *ret = new BRepBuilderAPI_MakeEdge(*c);
    return (void*) ret;
}

TopoDSEdge BRepBuilderAPIMakeEdgeToTopoDSEdge(BRepBuilderAPIMakeEdge edge) {
    BRepBuilderAPI_MakeEdge *makeEdge = (BRepBuilderAPI_MakeEdge*)edge;
    TopoDS_Edge *ret = new TopoDS_Edge();
    *ret = makeEdge->Edge();
    return ret;
}

BRepBuilderAPIMakeWire BRepBuilderAPIMakeWireInit() {
    BRepBuilderAPI_MakeWire *ret = new BRepBuilderAPI_MakeWire();
    return (void *) ret;
}

BRepBuilderAPIMakeWire BRepBuilderAPIMakeWireInitWithTopoDSEdge(TopoDSEdge edge) {
    TopoDS_Edge *e = (TopoDS_Edge*)edge;
    BRepBuilderAPI_MakeWire *ret = new BRepBuilderAPI_MakeWire(*e);
    return (void *) ret;
}

void BRepBuilderAPIMakeWireAddEdge(BRepBuilderAPIMakeWire wire, TopoDSEdge edge) {
    BRepBuilderAPI_MakeWire *makeWire = (BRepBuilderAPI_MakeWire*)wire;
    TopoDS_Edge *e = (TopoDS_Edge*)edge;
    makeWire->Add(*e);
}

TopoDSWire BRepBuilderAPIMakeWireToTopoDSWire(BRepBuilderAPIMakeWire wire) {
    BRepBuilderAPI_MakeWire *makeWire = (BRepBuilderAPI_MakeWire*)wire;
    TopoDS_Shape *ret = new TopoDS_Shape();
    *ret = makeWire->Wire();
    return ret;
}

BRepBuilderAPIMakeFace BRepBuilderAPIMakeFaceInitWithWire(TopoDSWire wire) {
    TopoDS_Wire *w = (TopoDS_Wire*)wire;
    BRepBuilderAPI_MakeFace *ret = new BRepBuilderAPI_MakeFace(*w);
    return ret;
}

TopoDSFace BRepBuilderAPIMakeFaceToTopoDSFace(BRepBuilderAPIMakeFace face) {
    BRepBuilderAPI_MakeFace *makeFace = (BRepBuilderAPI_MakeFace*) face;
    TopoDS_Face *ret = new TopoDS_Face();
    *ret = makeFace->Face();
    return ret;
}

TopoDSShape BRepBuilderAPIMakeShapeShape(BRepBuilderAPIMakeShape makeShape) {
    BRepBuilderAPI_MakeShape *s = (BRepBuilderAPI_MakeShape *) makeShape;
    TopoDS_Shape *shape = new TopoDS_Shape();
    *shape = s->Shape();
    return (void*) shape;
}