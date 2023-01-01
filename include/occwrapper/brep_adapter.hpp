#include <BRepAdaptor_Curve.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif

BRepAdapterCurve BRepAdapterCurveInit(TopoDSEdge edge);
bool BRepAdapterCurveIsLine(BRepAdapterCurve curve);
bool BRepAdapterCurveIsCircle(BRepAdapterCurve curve);
bool BRepAdapterCurveIsEllipse(BRepAdapterCurve curve);
gpCirc BRepAdapterCurveToCircle(BRepAdapterCurve curve);

BRepAdapterSurface BRepAdapterSurfaceInit(TopoDSFace face);
BRepAdapterSurface BRepAdapterSurfaceInitRestriction(TopoDSFace face, bool restriction);
gpPln BRepAdapterSurfacePlane(BRepAdapterSurface surface);

#ifdef __cplusplus
}
#endif