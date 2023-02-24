#include <gp_Dir.hxx>
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