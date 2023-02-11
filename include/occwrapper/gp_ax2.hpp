#include <gp_Ax2.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gpAx2 gpAx2_Init(gpPnt origin, gpDir dir);
    void gpAx2_Free(gpAx2 axis);
#ifdef __cplusplus
}
#endif