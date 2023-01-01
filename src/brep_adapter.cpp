#include <BRepAdaptor_Curve.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <occwrapper/brep_adapter.hpp>

/*-----  BRepAdaptor_Curve -----*/

BRepAdapterCurve BRepAdapterCurveInit(TopoDSEdge edge) {
    TopoDS_Edge *e = (TopoDS_Edge*)edge;
    BRepAdaptor_Curve *ret = new BRepAdaptor_Curve(*e);
    return (void *) ret;
};

bool BRepAdapterCurveIsLine(BRepAdapterCurve curve) {
    BRepAdaptor_Curve *c = (BRepAdaptor_Curve *) curve;
    return c->GetType() == GeomAbs_CurveType::GeomAbs_Line;
}

bool BRepAdapterCurveIsCircle(BRepAdapterCurve curve) {
    BRepAdaptor_Curve *c = (BRepAdaptor_Curve *) curve;
    return c->GetType() == GeomAbs_CurveType::GeomAbs_Circle;
}

bool BRepAdapterCurveIsEllipse(BRepAdapterCurve curve) {
    BRepAdaptor_Curve *c = (BRepAdaptor_Curve *) curve;
    return c->GetType() == GeomAbs_CurveType::GeomAbs_Ellipse;
}

gpCirc BRepAdapterCurveToCircle(BRepAdapterCurve curve) {
    BRepAdaptor_Curve *c = (BRepAdaptor_Curve *) curve;
    gp_Circ circle = c->Circle();
    gp_Circ *ret = new gp_Circ(circle.Position(), circle.Radius());
    return (void *) ret;
}

/*-----  BRepAdaptor_Surface -----*/

BRepAdapterSurface BRepAdapterSurfaceInit(TopoDSFace face) {
    TopoDS_Face *f = (TopoDS_Face*)face;
    // restriction defaults to true
    BRepAdaptor_Surface *ret = new BRepAdaptor_Surface(*f);
    return (void *) ret;
}

BRepAdapterSurface BRepAdapterSurfaceInitRestriction(TopoDSFace face, bool restriction) {
    TopoDS_Face *f = (TopoDS_Face*)face;
    BRepAdaptor_Surface *ret = new BRepAdaptor_Surface(*f, restriction);
    return (void *) ret;
}

gpPln BRepAdapterSurfacePlane(BRepAdapterSurface surface) {
    BRepAdaptor_Surface *s = (BRepAdaptor_Surface *) surface;
    gp_Pln *plane = new gp_Pln();
    *plane = s->Plane();
    return (void *) plane;
}

GeomAbs_SurfaceType BRepAdapterSurfaceType(BRepAdapterSurface surface) {
    BRepAdaptor_Surface *s = (BRepAdaptor_Surface *) surface;
    return s->GetType();
}