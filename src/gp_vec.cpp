#include <gp_Vec.hxx>
#include <gp.hxx>
#include <Precision.hxx>
#include <occwrapper/gp_vec.h>

double gpResolution() {
    return gp::Resolution();
}

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

double gpVec_X(gpVec vec) {
    gp_Vec * v = (gp_Vec *)vec;
    return v->X();
}

double gpVec_Y(gpVec vec) {
    gp_Vec * v = (gp_Vec *)vec;
    return v->Y();
}

double gpVec_Z(gpVec vec) {
    gp_Vec * v = (gp_Vec *)vec;
    return v->Z();
}

bool gpVec_IsEqual(gpVec vec, gpVec other) {
    gp_Vec *v = (gp_Vec *)vec;
    gp_Vec *o = (gp_Vec *)other;
    return v->IsEqual(*o, Precision::Confusion(), Precision::Angular());
}

gpVec gpVec_Multiplied(gpVec v, double dist) {
    gp_Vec * vec = (gp_Vec *)v;
    gp_Vec * ret = new gp_Vec();
    *ret = vec->Multiplied(dist);
    return (void*) ret;
}

double gpVec_Dot(gpVec v, gpVec other) {
    gp_Vec * vec = (gp_Vec *)v;
    gp_Vec * o = (gp_Vec *)other;
    return vec->Dot(*o);
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
