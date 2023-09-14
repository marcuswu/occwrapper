#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <GC_MakeCircle.hxx>
#include <GC_MakeSegment.hxx>
#include <GC_MakeArcOfCircle.hxx>
extern "C" {
#endif
    gcTrimmedCurve gcMakeCircle(gpPnt center, double radius);
    gcTrimmedCurve gcMakeArcOfCircle(gpCirc circle, gpPnt pt1, gpPnt pt2, bool sense);
    gcTrimmedCurve gcMakeSegment(gpPnt start, gpPnt end);
    void gcTrimmedCurve_Free(gcTrimmedCurve arc);
    GeomCurve gcTrimmedCurve_ToGeomCurve(gcTrimmedCurve curve);
#ifdef __cplusplus
}
#endif
