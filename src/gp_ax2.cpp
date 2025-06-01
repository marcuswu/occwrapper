#include <gp_Ax2.hxx>
#include <occwrapper/gp_ax2.h>

gpAx1 gpAx2_Init(gpPnt origin, gpDir normal, gpDir xAxis) {
    gp_Pnt * o = (gp_Pnt *)origin;
    gp_Dir * n = (gp_Dir *)normal;
    gp_Dir * x = (gp_Dir *)xAxis;
    gp_Ax2 * ret = new gp_Ax2(*o, *n, *x);
    return (void*) ret;
}

void gpAx2_Free(gpAx2 axis) {
    gp_Ax2 * a = (gp_Ax2 *)axis;
    delete a;
}
