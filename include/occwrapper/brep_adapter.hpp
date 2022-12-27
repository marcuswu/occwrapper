#include <BRepAdaptor_Curve.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif

BRepAdapterCurve BRepAdapterCurveInit(TopoDSEdge edge) {
    TopoDS_Edge *e = (TopoDS_Edge*)edge;
    BRepAdapter_Curve *ret = new BRepAdapter_Curve(*e);
    return (void *) ret;
};

bool BRepAdapterCurveIsLine(BRepAdapterCurve curve) {
    BRepAdapter_Curve *c = (BRepAdapter_Curve *) curve;
    return c->GetType == GeomAbs_CurveType::GeomAbs_Line;
}

bool BRepAdapterCurveIsCircle(BRepAdapterCurve curve) {
    BRepAdapter_Curve *c = (BRepAdapter_Curve *) curve;
    return c->GetType == GeomAbs_CurveType::GeomAbs_Circle;
}

bool BRepAdapterCurveIsEllipse(BRepAdapterCurve curve) {
    BRepAdapter_Curve *c = (BRepAdapter_Curve *) curve;
    return c->GetType == GeomAbs_CurveType::GeomAbs_Ellipse;
}

gpCirc BRepAdapterCurveToCircle(BRepAdapterCurve curve) {
    BRepAdapter_Curve *c = (BRepAdapter_Curve *) curve;
    gp_Circ circle = curve->Circle();
    gp_Circ *ret = new gp_Circ(circle.Position(), circle.Radius());
    return (void *) ret;
}

#ifdef __cplusplus
}
#endif