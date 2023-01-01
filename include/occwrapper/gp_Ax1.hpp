#include <gp_Ax1.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gpAx1 gpAx1Init(gpPnt origin, gpDir dir);
    gpDir gpAx1Direction(gpAx1 axis);
#ifdef __cplusplus
}
#endif