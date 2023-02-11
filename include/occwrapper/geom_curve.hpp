#include <GC_MakeCircle.hxx>
#include <GC_MakeSegment.hxx>
#include <GC_MakeArcOfCircle.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gcCircle gcMakeCircle(gpPnt center, double radius);
    void gcCircle_Free(gcCircle circle);
    gcTrimmedCurve gcMakeArcOfCircle(gpCirc circle, gpPnt pt1, gpPnt pt2, bool sense);
    gcTrimmedCurve gcMakeSegment(gpPnt start, gpPnt end);
    void gcTrimmedCurve_Free(gcTrimmedCurve arc);
    GeomCurve gcTrimmedCurve_ToGeomCurve(gcTrimmedCurve curve);
    GeomCurve gcCircle_ToGeomCurve(gcTrimmedCurve curve);
#ifdef __cplusplus
}
#endif