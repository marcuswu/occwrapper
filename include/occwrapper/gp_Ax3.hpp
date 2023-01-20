#include <gp_Ax3.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gpAx3 gpAx3Init(gpPnt origin, gpDir normal, gpDir xDir);
    gpDir gpAx3XDirection(gpAx3 coord);
    gpDir gpAx3YDirection(gpAx3 coord);
    gpDir gpAx3Direction(gpAx3 coord);
#ifdef __cplusplus
}
#endif