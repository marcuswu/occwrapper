#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <BRepAdaptor_Curve.hxx>
extern "C" {
#endif

#ifndef _GeomAbs_SurfaceType_HeaderFile
typedef int GeomAbs_SurfaceType;
#endif

BRepAdapterCurve BRepAdapterCurve_Init(TopoDSEdge edge);
bool BRepAdapterCurve_IsLine(BRepAdapterCurve curve);
bool BRepAdapterCurve_IsCircle(BRepAdapterCurve curve);
bool BRepAdapterCurve_IsEllipse(BRepAdapterCurve curve);
gpCirc BRepAdapterCurve_ToCircle(BRepAdapterCurve curve);

BRepAdapterSurface BRepAdapterSurface_Init(TopoDSFace face);
BRepAdapterSurface BRepAdapterSurface_InitRestriction(TopoDSFace face, bool restriction);
gpPln BRepAdapterSurface_Plane(BRepAdapterSurface surface);
GeomAbs_SurfaceType BRepAdapterSurface_Type(BRepAdapterSurface surface);
void BRepAdapterSurface_Free(BRepAdapterSurface surface);

#ifdef __cplusplus
}
#endif
