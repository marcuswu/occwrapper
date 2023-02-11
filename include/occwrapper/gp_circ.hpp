#include <gp_Ax3.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gpCirc gpCirc_Init(gpPnt center, double radius);
    double gpCirc_Radius(gpCirc circle);
    void gpCirc_Free(gpCirc circle);
#ifdef __cplusplus
}
#endif