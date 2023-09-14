#include <gp_Ax3.hxx>
#include <occwrapper/gp_ax3.h>

gpAx3 gpAx3_Init(gpPnt origin, gpDir normal, gpDir xDir) {
    gp_Pnt * o = (gp_Pnt *)origin;
    gp_Dir * n = (gp_Dir *)normal;
    gp_Dir * x = (gp_Dir *)xDir;
    gp_Ax3 * ret = new gp_Ax3(*o, *n, *x);
    return (void*) ret;
}

gpDir gpAx3_XDirection(gpAx3 coord) {
    gp_Ax3 * c = (gp_Ax3 *)coord;
    gp_Dir *ret = new gp_Dir();
    *ret = c->XDirection();
    return (void*) ret;
}

gpDir gpAx3_YDirection(gpAx3 coord) {
    gp_Ax3 * c = (gp_Ax3 *)coord;
    gp_Dir *ret = new gp_Dir();
    *ret = c->YDirection();
    return (void*) ret;
}

gpDir gpAx3_Direction(gpAx3 coord) {
    gp_Ax3 * c = (gp_Ax3 *)coord;
    gp_Dir *ret = new gp_Dir();
    *ret = c->Direction();
    return (void*) ret;
}

gpPnt gpAx3_Location(gpAx3 coord) {
    gp_Ax3 * c = (gp_Ax3 *)coord;
    gp_Pnt *ret = new gp_Pnt();
    *ret = c->Location();
    return (void*) ret;
}

void gpAx3_Rotate(gpAx3 coord, gpAx1 axis, double angle) {
    gp_Ax3 * c = (gp_Ax3 *)coord;
    gp_Ax1 * ax = (gp_Ax1 *)axis;
    c->Rotate(*ax, angle);
}

gpAx3 gpAx3_Translated(gpAx3 coord, gpVec vec) {
    gp_Ax3 * c = (gp_Ax3 *)coord;
    gp_Vec * v = (gp_Vec *)vec;
    gp_Ax3 *ret = new gp_Ax3();
    *ret = c->Translated(*v);
    return (void*) ret;
}

void gpAx3_Free(gpAx3 coord) {
    gp_Ax3 * c = (gp_Ax3 *) coord;
    delete c;
}
