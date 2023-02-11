#include <gp_Pnt.hxx>
#include <occwrapper/gp_pnt.hpp>

gpPnt gpPnt_Init(double x, double y, double z) {
    gp_Pnt * ret = new gp_Pnt(x, y, z);
    return (void*) ret;
}

void gpPnt_Free(gpPnt pnt) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    delete p;
}

void gpPnt_SetCoord(gpPnt pnt, double x, double y, double z) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    p->SetCoord(x, y, z);
}

void gpPnt_SetX(gpPnt pnt, double x) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    p->SetX(x);
}

void gpPnt_SetY(gpPnt pnt, double y) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    p->SetY(y);
}

void gpPnt_SetZ(gpPnt pnt, double z) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    p->SetZ(z);
}

double gpPnt_X(gpPnt pnt) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    return p->X();
}

double gpPnt_Y(gpPnt pnt) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    return p->Y();
}

double gpPnt_Z(gpPnt pnt) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    return p->Z();
}

bool gpPnt_IsEqual(gpPnt pnt, gpPnt other, double tolerance) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * o = (gp_Pnt *)other;
    return p->IsEqual(*o, tolerance);
}

double gpPnt_Distance(gpPnt pnt, gpPnt other) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * o = (gp_Pnt *)other;
    return p->Distance(*o);
}

double gpPnt_SquareDistance(gpPnt pnt, gpPnt other) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * o = (gp_Pnt *)other;
    return p->SquareDistance(*o);
}

void gpPnt_MirrorCenterPoint(gpPnt pnt, gpPnt center) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * c = (gp_Pnt *)center;
    p->Mirror(*c);
}

gpPnt gpPnt_MirroredCenterPoint(gpPnt pnt, gpPnt center) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * c = (gp_Pnt *)center;
    gp_Pnt * res = new gp_Pnt();
    *res = p->Mirrored(*c);
    return (void*) res;
}

void gpPnt_MirrorAxis(gpPnt pnt, gpAx1 axis) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Ax1* ax = (gp_Ax1 *)axis;
    p->Mirror(*ax);
}

gpPnt gpPnt_MirroredAxis(gpPnt pnt, gpAx1 axis) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Ax1* ax = (gp_Ax1 *)axis;
    gp_Pnt * res = new gp_Pnt();
    *res = p->Mirrored(*ax);
    return (void*) res;
}

void gpPnt_Rotate(gpPnt pnt, gpAx1 axis, double angle) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Ax1* ax = (gp_Ax1 *)axis;
    p->Rotate(*ax, angle);
}

gpPnt gpPnt_Rotated(gpPnt pnt, gpAx1 axis, double angle) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Ax1* ax = (gp_Ax1 *)axis;
    gp_Pnt * res = new gp_Pnt();
    *res = p->Rotated(*ax, angle);
    return (void*) res;
}

void gpPnt_Scale(gpPnt pnt, gpPnt other, double scale) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * o = (gp_Pnt *)other;
    p->Scale(*o, scale);
}

gpPnt gpPnt_Scaled(gpPnt pnt, gpPnt other, double scale) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * o = (gp_Pnt *)other;
    gp_Pnt * res = new gp_Pnt();
    *res = p->Scaled(*o, scale);
    return (void*) res;
}

void gpPnt_Transform(gpPnt pnt, gpTrsf transform) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Trsf * t = (gp_Trsf *)transform;
    p->Transform(*t);
}

gpPnt gpPnt_Transformed(gpPnt pnt, gpTrsf transform) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Trsf* t = (gp_Trsf *)transform;
    gp_Pnt * res = new gp_Pnt();
    *res = p->Transformed(*t);
    return (void*) res;
}

void gpPnt_Translate(gpPnt pnt, gpVec vector) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Vec * v = (gp_Vec*)vector;
    p->Translate(*v);
}

gpPnt gpPnt_Translated(gpPnt pnt, gpVec vector) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Vec * v = (gp_Vec*)vector;
    gp_Pnt * res = new gp_Pnt();
    *res = p->Translated(*v);
    return (void*) res;
}

void gpPnt_TranslatePoints(gpPnt pnt, gpPnt pnt1, gpPnt pnt2) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * p1 = (gp_Pnt*)pnt1;
    gp_Pnt * p2 = (gp_Pnt*)pnt2;
    p->Translate(*p1, *p2);
}

gpPnt gpPnt_TranslatedPoints(gpPnt pnt, gpPnt pnt1, gpPnt pnt2) {
    gp_Pnt * p = (gp_Pnt *)pnt;
    gp_Pnt * p1 = (gp_Pnt*)pnt1;
    gp_Pnt * p2 = (gp_Pnt*)pnt2;
    gp_Pnt * res = new gp_Pnt();
    *res = p->Translated(*p1, *p2);
    return (void*) res;
}