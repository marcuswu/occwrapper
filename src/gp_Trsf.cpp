#include <gp_Trsf.hxx>
#include <occwrapper/gp_Trsf.hpp>

gpTrsf gpTrsfInit() {
    gp_Trsf * ret = new gp_Trsf();
    return (void*) ret;
}

void gpTrsfSetTransformation(gpTrsf transform, gpAx3 from, gpAx3 to) {
    gp_Trsf * trsf = (gp_Trsf *)transform;
    gp_Ax3 * f = (gp_Ax3 *)from;
    gp_Ax3 * t = (gp_Ax3 *)to;
    trsf->SetTransformation(*f, *t);
}