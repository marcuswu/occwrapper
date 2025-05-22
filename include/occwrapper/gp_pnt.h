#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/gp_Pnt.hxx>
extern "C" {
#endif
    gpPnt gpPnt_Init(double x, double y, double z);
    void gpPnt_Free(gpPnt pnt);
    void gpPnt_SetCoord(gpPnt pnt, double x, double y, double z);
    void gpPnt_SetX(gpPnt pnt, double x);
    void gpPnt_SetY(gpPnt pnt, double y);
    void gpPnt_SetZ(gpPnt pnt, double z);
    double gpPnt_X(gpPnt pnt);
    double gpPnt_Y(gpPnt pnt);
    double gpPnt_Z(gpPnt pnt);
    bool gpPnt_IsEqual(gpPnt pnt, gpPnt other, double tolerance);
    double gpPnt_Distance(gpPnt pnt, gpPnt other);
    double gpPnt_SquareDistance(gpPnt pnt, gpPnt other);
    void gpPnt_MirrorCenterPoint(gpPnt pnt, gpPnt center);
    gpPnt gpPnt_MirroredCenterPoint(gpPnt pnt, gpPnt center);
    void gpPnt_MirrorAxis(gpPnt pnt, gpAx1 axis);
    gpPnt gpPnt_MirroredAxis(gpPnt pnt, gpAx1 axis);
    void gpPnt_Rotate(gpPnt pnt, gpAx1 axis, double angle);
    gpPnt gpPnt_Rotated(gpPnt pnt, gpAx1 axis, double angle);
    void gpPnt_Scale(gpPnt pnt, gpPnt other, double scale);
    gpPnt gpPnt_Scaled(gpPnt pnt, gpPnt other, double scale);
    void gpPnt_Transform(gpPnt pnt, gpTrsf transform);
    gpPnt gpPnt_Transformed(gpPnt pnt, gpTrsf transform);
    void gpPnt_Translate(gpPnt pnt, gpVec vector);
    gpPnt gpPnt_Translated(gpPnt pnt, gpVec vector);
    void gpPnt_TranslatePoints(gpPnt pnt, gpPnt pnt1, gpPnt pnt2);
    gpPnt gpPnt_TranslatedPoints(gpPnt pnt, gpPnt pnt1, gpPnt pnt2);
#ifdef __cplusplus
}
#endif