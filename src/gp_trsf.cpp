#include <gp_Trsf.hxx>
#include <gp_Quaternion.hxx>
#include <occwrapper/gp_trsf.h>

gpTrsf gpTrsf_Init() {
    gp_Trsf * ret = new gp_Trsf();
    return (void*) ret;
}

void gpTrsf_SetTransformation(gpTrsf transform, gpAx3 from, gpAx3 to) {
    gp_Trsf * trsf = (gp_Trsf *)transform;
    gp_Ax3 * f = (gp_Ax3 *)from;
    gp_Ax3 * t = (gp_Ax3 *)to;
    trsf->SetTransformation(*f, *t);
}

gpQuaternion gpTrsf_GetRotation(gpTrsf transform) {
    gp_Trsf * trsf = (gp_Trsf *)transform;
    gp_Quaternion *q = new gp_Quaternion();
    *q = trsf->GetRotation();
    return (void *) q;
}

void gpTrsf_Free(gpTrsf transform) {
    gp_Trsf * trsf = (gp_Trsf *)transform;
    delete trsf;
}
