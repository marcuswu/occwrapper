#include <gp_Pnt.hxx>
#include <occwrapper/gp_Pnt.hpp>

gpPnt gpPntInit(double x, double y, double z) {
    gp_Pnt * ret = new gp_Pnt(x, y, z);
    return (void*) ret;
}

void gpPntSetCoord(gpPnt pnt, double x, double y, double z) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    p->SetCoord(x, y, z);
}

void gpPntSetX(gpPnt pnt, double x) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    p->SetX(x);
}

void gpPntSetY(gpPnt pnt, double y) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    p->SetY(y);
}

void gpPntSetZ(gpPnt pnt, double z) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    p->SetZ(z);
}

double gpPntX(gpPnt pnt) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    return p->X();
}

double gpPntY(gpPnt pnt) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    return p->Y();
}

double gpPntZ(gpPnt pnt) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    return p->Z();
}

bool gpPntIsEqual(gpPnt pnt, gpPnt other, double tolerance) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * o = (gp_Pnt *)other;
    return p->IsEqual(*o, tolerance);
}

double gpPntDistance(gpPnt pnt, gpPnt other) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * o = (gp_Pnt *)other;
    return p->Distance(*o);
}

double gpPntSquareDistance(gpPnt pnt, gpPnt other) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * o = (gp_Pnt *)other;
    return p->SquareDistance(*o);
}

void gpPntMirror(gpPnt pnt, gpPnt center) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * c = (gp_Pnt *)center;
    p->Mirror(*c);
}

gpPnt gpPntMirrored(gpPnt pnt, gpPnt center) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * c = (gp_Pnt *)center;
    gp_Pnt * res = new gp_Pnt();
    *res = p->Mirrored(*c);
    return (void*) res;
}

void gpPntMirror(gpPnt pnt, gpAx1 axis) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Ax1* ax = (gp_Ax1 *)axis;
    p->Mirror(*ax);
}

gpPnt gpPntMirrored(gpPnt pnt, gpAx1 axis) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Ax1* ax = (gp_Ax1 *)axis;
    gp_Pnt * res = new gp_Pnt();
    *res = p->Mirrored(*ax);
    return (void*) res;
}

void gpPntRotate(gpPnt pnt, gpAx1 axis, double angle) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Ax1* ax = (gp_Ax1 *)axis;
    p->Rotate(*ax, angle);
}

gpPnt gpPntRotated(gpPnt pnt, gpAx1 axis, double angle) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Ax1* ax = (gp_Ax1 *)axis;
    gp_Pnt * res = new gp_Pnt();
    *res = p->Rotated(*ax, angle);
    return (void*) res;
}

void gpPntScale(gpPnt pnt, gpPnt other, double scale) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * o = (gp_Pnt *)other;
    p->Scale(*o, scale);
}

gpPnt gpPntScaled(gpPnt pnt, gpPnt other, double scale) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * o = (gp_Pnt *)other;
    gp_Pnt * res = new gp_Pnt();
    *res = p->Scaled(*o, scale);
    return (void*) res;
}

void gpPntTransform(gpPnt pnt, gpTrsf transform) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Trsf * t = (gp_Trsf *)transform;
    p->Transform(*t);
}

gpPnt gpPntTransformed(gpPnt pnt, gpTrsf transform) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Trsf* t = (gp_Trsf *)transform;
    gp_Pnt * res = new gp_Pnt();
    *res = p->Transformed(*t);
    return (void*) res;
}

void gpPntTranslate(gpPnt pnt, gpVec vector) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Vec * v = (gp_Vec*)vector;
    p->Translate(*v);
}

gpPnt gpPntTranslated(gpPnt pnt, gpVec vector) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Vec * v = (gp_Vec*)vector;
    gp_Pnt * res = new gp_Pnt();
    *res = p->Translated(*v);
    return (void*) res;
}

void gpPntTranslate(gpPnt pnt, gpPnt pnt1, gpPnt pnt2) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * p1 = (gp_Pnt*)pnt1;
    gp_Pnt * p2 = (gp_Pnt*)pnt2;
    p->Translate(*p1, *p2);
}

gpPnt gpPntTranslated(gpPnt pnt, gpPnt pnt1, gpPnt pnt2) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * p1 = (gp_Pnt*)pnt1;
    gp_Pnt * p2 = (gp_Pnt*)pnt2;
    gp_Pnt * res = new gp_Pnt();
    *res = p->Translated(*p1, *p2);
    return (void*) res;
}