#include <gp_Dir.hxx>
#include <occwrapper/gp_Dir.hpp>

gpDir gpDirInit(double x, double y, double z) {
    gp_Dir * ret = new gp_Dir(x, y, z);
    return (void*) ret;
}

gpDir gpDirInitVec(gpVec vector) {
    gp_Vec * v = (gp_Vec *)vector;
    gp_Dir * ret = new gp_Dir(*v);
    return (void*) ret;
}