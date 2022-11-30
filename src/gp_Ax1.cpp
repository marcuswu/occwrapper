#include <gp_Ax1.hxx>
#include <occwrapper/gp_Ax1.hpp>

gpAx1 gpAx1Init(gpPnt origin, gpDir dir) {
    gp_Pnt * o = (gp_Pnt *)origin;
    gp_Dir * d = (gp_Dir *)dir;
    gp_Ax1 * ret = new gp_Ax1(*o, *d);
    return (void*) ret;
}