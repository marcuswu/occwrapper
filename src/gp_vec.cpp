#include <gp_Vec.hxx>
#include <occwrapper/gp_vec.hpp>

gpVec gpVec_Init(double x, double y, double z) {
    gp_Vec * ret = new gp_Vec(x, y, z);
    return (void*) ret;
}

gpVec gpVec_InitDir(gpDir dir) {
    gp_Dir * d = (gp_Dir *)dir;
    gp_Vec * ret = new gp_Vec(*d);
    return (void*) ret;
}

gpVec gpVec_InitPoints(gpPnt start, gpPnt end) {
    gp_Pnt * s = (gp_Pnt *)start;
    gp_Pnt * e = (gp_Pnt *)end;
    gp_Vec * ret = new gp_Vec(*s, *e);
    return (void*) ret;
}

void gpVec_Free(gpVec vector) {
    gp_Vec * v = (gp_Vec *)vector;
    delete v;
}

gpVec gpVec_Multiplied(gpVec v, double dist) {
    gp_Vec * vec = (gp_Vec *)v;
    gp_Vec * ret = new gp_Vec();
    *ret = vec->Multiplied(dist);
    return (void*) ret;
}

gpVec gpVec_Crossed(gpVec v, gpVec other) {
    gp_Vec * vec = (gp_Vec *)v;
    gp_Vec * o = (gp_Vec *)other;
    gp_Vec * ret = new gp_Vec();
    *ret = vec->Crossed(*o);
    return (void*) ret;
}

gpVec gpVec_Normalized(gpVec v) {
    gp_Vec * vec = (gp_Vec *)v;
    gp_Vec * ret = new gp_Vec();
    *ret = vec->Normalized();
    return (void*) ret;
}

double gpVec_Magnitude(gpVec v) {
    gp_Vec * vec = (gp_Vec *)v;
    return vec->Magnitude();
}
