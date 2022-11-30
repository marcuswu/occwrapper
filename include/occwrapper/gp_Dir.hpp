#include <gp_Dir.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gpDir gpDirInit(double x, double y, double z);
    gpDir gpDirInitVec(gpVec vector);
#ifdef __cplusplus
}
#endif