#include <gp_Pln.hxx>
#include <occwrapper/gp_pln.h>

gpPln gpPln_Init() {
    gp_Pln * ret = new gp_Pln();
    return (void *) ret;
}

gpPln gpPln_InitAx3(gpAx3 coord) {
    gp_Ax3 * c = (gp_Ax3 *)coord;
    gp_Pln * ret = new gp_Pln(*c);
    return (void *) ret;
}

gpPln gpPln_InitPntDir(gpPnt origin, gpDir dir) {
    gp_Pnt * o = (gp_Pnt *) origin;
    gp_Dir * d = (gp_Dir *) dir;
    gp_Pln * ret = new gp_Pln(*o, *d);
    return (void *) ret;
}

gpAx1 gpPln_Axis(gpPln plane) {
    gp_Pln * p = (gp_Pln *) plane;
    gp_Ax1 * ax1 = new gp_Ax1();
    *ax1 = p->Axis();
    return (void *) ax1;
}

gpAx3 gpPln_Position(gpPln plane) {
    gp_Pln * p = (gp_Pln *) plane;
    gp_Ax3 * ax3 = new gp_Ax3();
    *ax3 = p->Position();
    return (void *) ax3;
}

bool gpPln_ContainsPoint(gpPln plane, gpPnt point, double tolerance) {
    gp_Pln * p = (gp_Pln *) plane;
    gp_Pnt * pnt = (gp_Pnt *) point;
    return p->Contains(*pnt, tolerance);
}

void gpPln_Free(gpPln plane) {
    gp_Pln * p = (gp_Pln *) plane;
    delete p;
}