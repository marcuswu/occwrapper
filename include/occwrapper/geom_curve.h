#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/GC_MakeCircle.hxx>
#include <opencascade/GC_MakeSegment.hxx>
#include <opencascade/GC_MakeArcOfCircle.hxx>
extern "C" {
#endif
    gcTrimmedCurve gcMakeCircle(gpAx2 center, double radius);
    gcTrimmedCurve gcMakeArcOfCircle(gpCirc circle, gpPnt pt1, gpPnt pt2, bool sense);
    gcTrimmedCurve gcMakeArcOfCirclePts(gpPnt pt1, gpPnt pt2, gpPnt pt3);
    gcTrimmedCurve gcMakeSegment(gpPnt start, gpPnt end);
    void gcTrimmedCurve_Free(gcTrimmedCurve arc);
    GeomCurve gcTrimmedCurve_ToGeomCurve(gcTrimmedCurve curve);
#ifdef __cplusplus
}
#endif
