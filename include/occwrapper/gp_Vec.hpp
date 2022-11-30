#include <gp_Vec.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gpVec gpVecInit(double x, double y, double z);
    gpVec gpVecInitDir(gpDir dir);
    gpVec gpVecInitPoints(gpPnt start, gpPnt end);
    gpVec gpVecMultiplied(gpVec v, double dist);
    gpVec gpVecCrossed(gpVec v, gpVec other);
    gpVec gpVecNormalized(gpVec v);
    double gpVecMagnitude(gpVec v);
#ifdef __cplusplus
}
#endif