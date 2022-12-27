#include <gp_Ax3.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gpCirc gpCircInit(gpPnt center, double radius);
    double gpCirclRadius(gpCirc circle);
#ifdef __cplusplus
}
#endif