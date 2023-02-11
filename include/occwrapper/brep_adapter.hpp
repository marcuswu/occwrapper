#include <BRepAdaptor_Curve.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif

BRepAdapterCurve BRepAdapterCurve_Init(TopoDSEdge edge);
bool BRepAdapterCurve_IsLine(BRepAdapterCurve curve);
bool BRepAdapterCurve_IsCircle(BRepAdapterCurve curve);
bool BRepAdapterCurve_IsEllipse(BRepAdapterCurve curve);
gpCirc BRepAdapterCurve_ToCircle(BRepAdapterCurve curve);

BRepAdapterSurface BRepAdapterSurface_Init(TopoDSFace face);
BRepAdapterSurface BRepAdapterSurface_InitRestriction(TopoDSFace face, bool restriction);
gpPln BRepAdapterSurface_Plane(BRepAdapterSurface surface);
void BRepAdapterSurface_Free(BRepAdapterSurface surface);

#ifdef __cplusplus
}
#endif