#include <gp_Dir.hxx>
#include <Precision.hxx>
#include <occwrapper/gp_dir.h>

gpDir gpDir_Init(double x, double y, double z) {
    gp_Dir * ret = new gp_Dir(x, y, z);
    return (void*) ret;
}

gpDir gpDir_InitVec(gpVec vector) {
    gp_Vec * v = (gp_Vec *)vector;
    gp_Dir * ret = new gp_Dir(*v);
    return (void*) ret;
}
    
void gpDir_Free(gpDir dir) {
    gp_Dir * d = (gp_Dir *)dir;
    delete d;
}

double gpDir_X(gpDir dir) {
    gp_Dir * d = (gp_Dir *)dir;
    return d->X();
}

double gpDir_Y(gpDir dir) {
    gp_Dir * d = (gp_Dir *)dir;
    return d->Y();
}

double gpDir_Z(gpDir dir) {
    gp_Dir * d = (gp_Dir *)dir;
    return d->Z();
}

bool gpDir_IsParallel(gpDir dir, gpDir other) {
    gp_Dir * d = (gp_Dir *)dir;
    gp_Dir * o = (gp_Dir *)other;
    return d->IsParallel(*o, Precision::Angular());
}

bool gpDir_IsEqual(gpDir dir, gpDir other) {
    gp_Dir * d = (gp_Dir *)dir;
    gp_Dir * o = (gp_Dir *)other;
    return d->IsEqual(*o, Precision::Angular());
}

double gpDir_Dot(gpDir dir, gpDir other) {
    gp_Dir * d = (gp_Dir *)dir;
    gp_Dir * o = (gp_Dir *)other;
    return d->Dot(*o);
}
