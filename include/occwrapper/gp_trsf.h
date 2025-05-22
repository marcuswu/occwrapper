#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/gp_Trsf.hxx>
extern "C" {
#endif
    gpTrsf gpTrsf_Init();
    void gpTrsf_SetMirror(gpTrsf trsf, gpAx1 axis);
    void gpTrsf_SetTransformation(gpTrsf transform, gpAx3 from, gpAx3 to);
    gpQuaternion gpTrsf_GetRotation(gpTrsf transform);
    void gpTrsf_Free(gpTrsf transform);
#ifdef __cplusplus
}
#endif
