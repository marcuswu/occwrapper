#include <gp_Vec.hxx>
#include <occwrapper/gp_Vec.hpp>

gpVec gpVecInit(double x, double y, double z) {
    gp_Vec * ret = new gp_Vec(x, y, z);
    return (void*) ret;
}

gpVec gpVecInitDir(gpDir dir) {
    gp_Dir * d = (gp_Dir *)dir;
    gp_Vec * ret = new gp_Vec(*d);
    return (void*) ret;
}

gpVec gpVecInitPoints(gpPnt start, gpPnt end) {
    gp_Pnt * s = (gp_Pnt *)start;
    gp_Pnt * e = (gp_Pnt *)end;
    gp_Vec * ret = new gp_Vec(*s, *e);
    return (void*) ret;
}

gpVec gpVecMultiplied(gpVec v, double dist) {
    gp_Vec * vec = (gp_Vec *)v;
    gp_Vec * ret = new gp_Vec();
    *ret = vec->Multiplied(dist);
    return (void*) ret;
}

gpVec gpVecCrossed(gpVec v, gpVec other) {
    gp_Vec * vec = (gp_Vec *)v;
    gp_Vec * o = (gp_Vec *)other;
    gp_Vec * ret = new gp_Vec();
    *ret = vec->Crossed(*o);
    return (void*) ret;
}

gpVec gpVecNormalized(gpVec v) {
    gp_Vec * vec = (gp_Vec *)v;
    gp_Vec * ret = new gp_Vec();
    *ret = vec->Normalized();
    return (void*) ret;
}

double gpVecMagnitude(gpVec v) {
    gp_Vec * vec = (gp_Vec *)v;
    return vec->Magnitude();
}
