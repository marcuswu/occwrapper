#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <gp_Ax3.hxx>
extern "C" {
#endif
    gpAx3 gpAx3_Init(gpPnt origin, gpDir normal, gpDir xDir);
    gpDir gpAx3_XDirection(gpAx3 coord);
    gpDir gpAx3_YDirection(gpAx3 coord);
    gpDir gpAx3_Direction(gpAx3 coord);
    void gpAx3_Free(gpAx3 coord);
#ifdef __cplusplus
}
#endif