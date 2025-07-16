#include <BRepAdaptor_Curve.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <occwrapper/brep_adapter.h>

/*-----  BRepAdaptor_Curve -----*/

BRepAdapterCurve BRepAdapterCurve_Init(TopoDSEdge edge) {
    TopoDS_Edge *e = (TopoDS_Edge*)edge;
    BRepAdaptor_Curve *ret = new BRepAdaptor_Curve(*e);
    return (void *) ret;
};

bool BRepAdapterCurve_IsLine(BRepAdapterCurve curve) {
    BRepAdaptor_Curve *c = (BRepAdaptor_Curve *) curve;
    return c->GetType() == GeomAbs_CurveType::GeomAbs_Line;
}

bool BRepAdapterCurve_IsCircle(BRepAdapterCurve curve) {
    BRepAdaptor_Curve *c = (BRepAdaptor_Curve *) curve;
    return c->GetType() == GeomAbs_CurveType::GeomAbs_Circle;
}

bool BRepAdapterCurve_IsEllipse(BRepAdapterCurve curve) {
    BRepAdaptor_Curve *c = (BRepAdaptor_Curve *) curve;
    return c->GetType() == GeomAbs_CurveType::GeomAbs_Ellipse;
}

gpCirc BRepAdapterCurve_ToCircle(BRepAdapterCurve curve) {
    BRepAdaptor_Curve *c = (BRepAdaptor_Curve *) curve;
    gp_Circ circle = c->Circle();
    gp_Circ *ret = new gp_Circ(circle.Position(), circle.Radius());
    return (void *) ret;
}

/*-----  BRepAdaptor_Surface -----*/

BRepAdapterSurface BRepAdapterSurface_Init(TopoDSFace face) {
    TopoDS_Face *f = (TopoDS_Face*)face;
    // restriction defaults to true
    BRepAdaptor_Surface *ret = new BRepAdaptor_Surface(*f);
    return (void *) ret;
}

BRepAdapterSurface BRepAdapterSurface_InitRestriction(TopoDSFace face, bool restriction) {
    TopoDS_Face *f = (TopoDS_Face*)face;
    BRepAdaptor_Surface *ret = new BRepAdaptor_Surface(*f, restriction);
    return (void *) ret;
}

gpDir BRepAdapterSurface_Direction(BRepAdapterSurface surface) {
    BRepAdaptor_Surface *s = (BRepAdaptor_Surface *) surface;
    gp_Dir *dir = new gp_Dir();
    *dir = s->Direction();
    return (void *) dir;
}

gpPln BRepAdapterSurface_Plane(BRepAdapterSurface surface) {
    BRepAdaptor_Surface *s = (BRepAdaptor_Surface *) surface;
    gp_Pln *plane = new gp_Pln();
    *plane = s->Plane();
    return (void *) plane;
}

GeomAbs_SurfaceType BRepAdapterSurface_Type(BRepAdapterSurface surface) {
    BRepAdaptor_Surface *s = (BRepAdaptor_Surface *) surface;
    return s->GetType();
}

void BRepAdapterSurface_Free(BRepAdapterSurface surface) {
    BRepAdaptor_Surface *s = (BRepAdaptor_Surface *) surface;
    delete s;
}