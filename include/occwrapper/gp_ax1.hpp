#include <gp_Ax1.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gpAx1 gpAx1_Init(gpPnt origin, gpDir dir);
    gpDir gpAx1_Direction(gpAx1 axis);
    void gpAx1_Free(gpAx1 axis);
#ifdef __cplusplus
}
#endif