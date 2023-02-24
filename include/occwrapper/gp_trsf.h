#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <gp_Trsf.hxx>
extern "C" {
#endif
    gpTrsf gpTrsf_Init();
    void gpTrsf_SetTransformation(gpTrsf transform, gpAx3 from, gpAx3 to);
    void gpTrsf_Free(gpTrsf transform);
#ifdef __cplusplus
}
#endif