#include <gp_Pnt.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gpPnt gpPntInit(double x, double y, double z);
    void gpPntSetCoord(gpPnt pnt, double x, double y, double z);
    void gpPntSetX(gpPnt pnt, double x);
    void gpPntSetY(gpPnt pnt, double y);
    void gpPntSetZ(gpPnt pnt, double z);
    double gpPntX(gpPnt pnt);
    double gpPntY(gpPnt pnt);
    double gpPntZ(gpPnt pnt);
    bool gpPntIsEqual(gpPnt pnt, gpPnt other, double tolerance);
    double gpPntDistance(gpPnt pnt, gpPnt other);
    double gpPntSquareDistance(gpPnt pnt, gpPnt other);
    void gpPntMirror(gpPnt pnt, gpPnt center);
    gpPnt gpPntMirrored(gpPnt pnt, gpPnt center);
    void gpPntMirror(gpPnt pnt, gpAx1 axis);
    gpPnt gpPntMirrored(gpPnt pnt, gpAx1 axis);
    void gpPntRotate(gpPnt pnt, gpAx1 axis, double angle);
    gpPnt gpPntRotated(gpPnt pnt, gpAx1 axis, double angle);
    void gpPntScale(gpPnt pnt, gpPnt other, double scale);
    gpPnt gpPntScaled(gpPnt pnt, gpPnt other, double scale);
    void gpPntTransform(gpPnt pnt, gpTrsf transform);
    gpPnt gpPntTransformed(gpPnt pnt, gpTrsf transform);
    void gpPntTranslate(gpPnt pnt, gpVec vector);
    gpPnt gpPntTranslated(gpPnt pnt, gpVec vector);
    void gpPntTranslate(gpPnt pnt, gpPnt pnt1, gpPnt pnt2);
    gpPnt gpPntTranslated(gpPnt pnt, gpPnt pnt1, gpPnt pnt2);
#ifdef __cplusplus
}
#endif