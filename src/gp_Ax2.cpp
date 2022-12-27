#include <gp_Ax2.hxx>
#include <occwrapper/gp_Ax2.hpp>

gpAx1 gpAx2Init(gpPnt origin, gpDir dir) {
    gp_Pnt * o = (gp_Pnt *)origin;
    gp_Dir * d = (gp_Dir *)dir;
    gp_Ax2 * ret = new gp_Ax2(*o, *d);
    return (void*) ret;
}