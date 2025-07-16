#include <occwrapper/occutils.h>
#include <occwrapper/gp_pnt.h>

gpPnt gpPnt_Midpoint(gpPnt p1, gpPnt p2) {
    gp_Pnt * point1 = (gp_Pnt *)p1;
    gp_Pnt * point2 = (gp_Pnt *)p2;
    double x = point1->X(), y = point1->Y(), z = point1->Z();
    x += point2->X();
    y += point2->Y();
    z += point2->Z();
    gp_Pnt * ret = new gp_Pnt(x / 2., y / 2., z / 2.);
    return (void*) ret;
}