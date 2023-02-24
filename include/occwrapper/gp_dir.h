#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <gp_Dir.hxx>
extern "C" {
#endif
    gpDir gpDir_Init(double x, double y, double z);
    gpDir gpDir_InitVec(gpVec vector);
    void gpDir_Free(gpDir dir);
#ifdef __cplusplus
}
#endif