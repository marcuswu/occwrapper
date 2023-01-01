#include <gp_Ax1.hxx>
#include <occwrapper/gp_Ax1.hpp>

gpAx1 gpAx1Init(gpPnt origin, gpDir dir) {
    gp_Pnt * o = (gp_Pnt *)origin;
    gp_Dir * d = (gp_Dir *)dir;
    gp_Ax1 * ret = new gp_Ax1(*o, *d);
    return (void*) ret;
}

gpDir gpAx1Direction(gpAx1 axis) {
    gp_Ax1 * a = (gp_Ax1 *)axis;
    gp_Dir *ret = new gp_Dir();
    *ret = a->Direction();
    return (void*) ret;
}