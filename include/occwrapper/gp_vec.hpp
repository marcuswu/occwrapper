#include <gp_Vec.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gpVec gpVec_Init(double x, double y, double z);
    gpVec gpVec_InitDir(gpDir dir);
    gpVec gpVec_InitPoints(gpPnt start, gpPnt end);
    void gpVec_Free(gpVec vector);
    gpVec gpVec_Multiplied(gpVec v, double dist);
    gpVec gpVec_Crossed(gpVec v, gpVec other);
    gpVec gpVec_Normalized(gpVec v);
    double gpVec_Magnitude(gpVec v);
#ifdef __cplusplus
}
#endif