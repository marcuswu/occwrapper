#include <gp_Ax2.hxx>
#include <occwrapper/gp_ax2.h>

gpAx1 gpAx2_Init(gpPnt origin, gpDir dir) {
    gp_Pnt * o = (gp_Pnt *)origin;
    gp_Dir * d = (gp_Dir *)dir;
    gp_Ax2 * ret = new gp_Ax2(*o, *d);
    return (void*) ret;
}

void gpAx2_Free(gpAx2 axis) {
    gp_Ax2 * a = (gp_Ax2 *)axis;
    delete a;
}