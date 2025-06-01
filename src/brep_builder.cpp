#include <BRep_Builder.hxx>
#include <TopoDS_Compound.hxx>
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <TopoDS_Wire.hxx>
#include <BRepBuilderAPI.hxx>
#include <occwrapper/brep_builder.h>

BRepBuilder BRepBuilder_Init() {
    BRepBuilder *b = new BRepBuilder();
    return (void *) b;
}

void BRepBuilder_MakeCompound(BRepBuilder builder, TopoDSCompound res) {
    BRep_Builder *b = (BRep_Builder *) builder;
    TopoDS_Compound *c = (TopoDS_Compound *) res;
    b->MakeCompound(*c);
}

void BRepBuilder_Add(BRepBuilder builder, TopoDSShape res, TopoDSShape shape) {
    BRep_Builder *b = (BRep_Builder *) builder;
    TopoDS_Shape *c = (TopoDS_Shape *) res;
    TopoDS_Shape *s = (TopoDS_Shape *) shape;
    b->Add(*c, *s);
}

void BRepBuilder_Free(BRepBuilder builder) {
    BRep_Builder *b = (BRep_Builder *) builder;
    delete b;
}

void BRepBuilderAPI_SetPrecision(double precision) {
    BRepBuilderAPI::Precision(precision);
}

BRepBuilderAPIMakeEdge BRepBuilderAPIMakeEdge_InitWithGeomCurve(GeomCurve curve) {
    Handle(Geom_Curve)* c = (Handle(Geom_Curve)*)curve;
    BRepBuilderAPI_MakeEdge *ret = new BRepBuilderAPI_MakeEdge(*c);
    return (void*) ret;
}

TopoDSEdge BRepBuilderAPIMakeEdge_ToTopoDSEdge(BRepBuilderAPIMakeEdge edge) {
    BRepBuilderAPI_MakeEdge *makeEdge = (BRepBuilderAPI_MakeEdge*)edge;
    TopoDS_Edge *ret = new TopoDS_Edge();
    *ret = makeEdge->Edge();
    return ret;
}

void BRepBuilderAPIMakeEdge_Free(BRepBuilderAPIMakeEdge edge) {
    BRepBuilderAPI_MakeEdge *makeEdge = (BRepBuilderAPI_MakeEdge*) edge;
    delete makeEdge;
}

BRepBuilderAPIMakeWire BRepBuilderAPIMakeWire_Init() {
    BRepBuilderAPI_MakeWire *ret = new BRepBuilderAPI_MakeWire();
    return (void *) ret;
}

BRepBuilderAPIMakeWire BRepBuilderAPIMakeWire_InitWithTopoDSEdge(TopoDSEdge edge) {
    TopoDS_Edge *e = (TopoDS_Edge*)edge;
    BRepBuilderAPI_MakeWire *ret = new BRepBuilderAPI_MakeWire(*e);
    return (void *) ret;
}

void BRepBuilderAPIMakeWire_AddEdge(BRepBuilderAPIMakeWire wire, TopoDSEdge edge) {
    BRepBuilderAPI_MakeWire *makeWire = (BRepBuilderAPI_MakeWire*)wire;
    TopoDS_Edge *e = (TopoDS_Edge*)edge;
    makeWire->Add(*e);
}

void BRepBuilderAPIMakeWire_AddWire(BRepBuilderAPIMakeWire makeWire, TopoDSWire wire) {
    BRepBuilderAPI_MakeWire *mw = (BRepBuilderAPI_MakeWire*)makeWire;
    TopoDS_Wire *w = (TopoDS_Wire*)wire;
    mw->Add(*w);
}

TopoDSWire BRepBuilderAPIMakeWire_ToTopoDSWire(BRepBuilderAPIMakeWire wire) {
    BRepBuilderAPI_MakeWire *makeWire = (BRepBuilderAPI_MakeWire*)wire;
    TopoDS_Shape *ret = new TopoDS_Shape();
    *ret = makeWire->Wire();
    return ret;
}

void BRepBuilderAPIMakeWire_Free(BRepBuilderAPIMakeWire wire) {
    BRepBuilderAPI_MakeWire *makeWire = (BRepBuilderAPI_MakeWire*) wire;
    delete makeWire;
}

BRepBuilderAPIMakeFace BRepBuilderAPIMakeFace_InitWithWire(TopoDSWire wire) {
    TopoDS_Wire *w = (TopoDS_Wire*)wire;
    BRepBuilderAPI_MakeFace *ret = new BRepBuilderAPI_MakeFace(*w);
    return ret;
}

TopoDSFace BRepBuilderAPIMakeFace_ToTopoDSFace(BRepBuilderAPIMakeFace face) {
    BRepBuilderAPI_MakeFace *makeFace = (BRepBuilderAPI_MakeFace*) face;
    TopoDS_Face *ret = new TopoDS_Face();
    *ret = makeFace->Face();
    return ret;
}

void BRepBuilderAPIMakeFace_Free(BRepBuilderAPIMakeFace face) {
    BRepBuilderAPI_MakeFace *makeFace = (BRepBuilderAPI_MakeFace*) face;
    delete makeFace;
}

TopoDSShape BRepBuilderAPIMakeShape_Shape(BRepBuilderAPIMakeShape makeShape) {
    BRepBuilderAPI_MakeShape *s = (BRepBuilderAPI_MakeShape *) makeShape;
    TopoDS_Shape *shape = new TopoDS_Shape();
    *shape = s->Shape();
    return (void*) shape;
}

BRepBuilderAPITransform BRepBuilderAPITransform_InitWithWireTrsf(TopoDSWire wire, gpTrsf trsf) {
    TopoDS_Wire *w = (TopoDS_Wire*)wire;
    gp_Trsf * t = (gp_Trsf *)trsf;
    BRepBuilderAPI_Transform *transform = new BRepBuilderAPI_Transform(*w, *t);
    return transform;
}

TopoDSShape BRepBuilderAPITransform_Shape(BRepBuilderAPITransform breptrsf) {
    BRepBuilderAPI_Transform *t = (BRepBuilderAPI_Transform*)breptrsf;
    TopoDS_Shape *shape = new TopoDS_Shape();
    *shape = t->Shape();
    return (void *) shape;
}

void BRepBuilderAPITransform_Free(BRepBuilderAPITransform breptrsf) {
    BRepBuilderAPI_Transform *t = (BRepBuilderAPI_Transform*)breptrsf;
    delete t;
}
