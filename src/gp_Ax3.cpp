#include <gp_Ax3.hxx>
#include <occwrapper/gp_Ax3.hpp>

gpAx3 gpAx3Init(gpPnt origin, gpDir normal, gpDir xDir) {
    gp_Pnt * o = (gp_Pnt *)origin;
    gp_Dir * n = (gp_Dir *)normal;
    gp_Dir * x = (gp_Dir *)xDir;
    gp_Ax3 * ret = new gp_Ax3(*o, *n, *x);
    return (void*) ret;
}

gpDir gpAx3XDirection(gpAx3 coord) {
    gp_Ax3 * c = (gp_Ax3 *)coord;
    gp_Dir *ret = new gp_Dir();
    *ret = c->XDirection();
    return (void*) ret;
}

gpDir gpAx3YDirection(gpAx3 coord) {
    gp_Ax3 * c = (gp_Ax3 *)coord;
    gp_Dir *ret = new gp_Dir();
    *ret = c->YDirection();
    return (void*) ret;
}

gpDir gpAx3Direction(gpAx3 coord) {
    gp_Ax3 * c = (gp_Ax3 *)coord;
    gp_Dir *ret = new gp_Dir();
    *ret = c->Direction();
    return (void*) ret;
}