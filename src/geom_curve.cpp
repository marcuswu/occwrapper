#include <GC_MakeCircle.hxx>
#include <GC_MakeArcOfCircle.hxx>
#include <GC_MakeSegment.hxx>

#include <occwrapper/geom_curve.h>

gcTrimmedCurve gcMakeCircle(gpAx2 center, double radius) {
    gp_Ax2 * c = (gp_Ax2 *)center;
    // transfer ownership of circle transient to new handle
    // use new handle as our void* pointer
    Handle(Geom_Circle) *ret = new Handle(Geom_Circle)(GC_MakeCircle(*c, radius));
    return (void*) ret;
}

gcTrimmedCurve gcMakeArcOfCircle(gpCirc circle, gpPnt pt1, gpPnt pt2, bool sense) {
    gp_Circ *c = (gp_Circ *)circle;
    gp_Pnt *pnt1 = (gp_Pnt *)pt1;
    gp_Pnt *pnt2 = (gp_Pnt *)pt2;

    Handle(Geom_TrimmedCurve) *ret = new Handle(Geom_TrimmedCurve)(GC_MakeArcOfCircle(*c, *pnt1, *pnt2, sense));
    return (void*) ret;
}

gcTrimmedCurve gcMakeArcOfCirclePts(gpPnt pt1, gpPnt pt2, gpPnt pt3) {
    gp_Pnt *pnt1 = (gp_Pnt *)pt1;
    gp_Pnt *pnt2 = (gp_Pnt *)pt2;
    gp_Pnt *pnt3 = (gp_Pnt *)pt3;

    Handle(Geom_TrimmedCurve) *ret = new Handle(Geom_TrimmedCurve)(GC_MakeArcOfCircle(*pnt1, *pnt2, *pnt3));
    return (void*) ret;
}

void gcTrimmedCurve_Free(gcTrimmedCurve arc) {
    Handle(Geom_TrimmedCurve) *a = (Handle(Geom_TrimmedCurve) *)arc;
    delete a;
}

gcTrimmedCurve gcMakeSegment(gpPnt start, gpPnt end) {
    gp_Pnt *s= (gp_Pnt *)start;
    gp_Pnt *e= (gp_Pnt *)end;

    Handle(Geom_TrimmedCurve) *ret = new Handle(Geom_TrimmedCurve)(GC_MakeSegment(*s, *e));
    return (void*) ret;
}

GeomCurve gcTrimmedCurve_ToGeomCurve(gcTrimmedCurve curve) {
    return (void*) curve;
}

