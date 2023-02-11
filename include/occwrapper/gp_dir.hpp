#include <gp_Dir.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gpDir gpDir_Init(double x, double y, double z);
    gpDir gpDir_InitVec(gpVec vector);
    void gpDir_Free(gpDir dir);
#ifdef __cplusplus
}
#endif