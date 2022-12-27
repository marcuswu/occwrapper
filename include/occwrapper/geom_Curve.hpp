#include <GC_MakeCircle.hxx>
#include <GC_MakeSegment.hxx>
#include <GC_MakeArcOfCircle.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gcCircle gcMakeCircle(gpPnt center, double radius);
    gcTrimmedCurve gcMakeArcOfCircle(gpCirc circle, gpPnt pt1, gpPnt pt2, bool sense);
    gcTrimmedCurve gcMakeSegment(gpPnt start, gpPnt end);
    GeomCurve gcTrimmedCurveToGeomCurve(gcTrimmedCurve curve);
    GeomCurve gcCircleToGeomCurve(gcTrimmedCurve curve);
#ifdef __cplusplus
}
#endif