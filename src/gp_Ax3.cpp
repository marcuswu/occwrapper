#include <gp_Ax3.hxx>
#include <occwrapper/gp_Ax3.hpp>

gpAx3 gpAx3Init(gpPnt origin, gpDir normal, gpDir xDir) {
    gp_Pnt * o = (gp_Pnt *)origin;
    gp_Dir * n = (gp_Dir *)normal;
    gp_Dir * x = (gp_Dir *)xDir;
    gp_Ax3 * ret = new gp_Ax3(*o, *n, *x);
    return (void*) ret;
}