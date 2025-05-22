#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/gp_Vec.hxx>
extern "C" {
#endif
    double gpResolution();
    gpVec gpVec_Init(double x, double y, double z);
    gpVec gpVec_InitDir(gpDir dir);
    gpVec gpVec_InitPoints(gpPnt start, gpPnt end);
    void gpVec_Free(gpVec vector);
    double gpVec_X(gpVec vec);
    double gpVec_Y(gpVec vec);
    double gpVec_Z(gpVec vec);
    bool gpVec_IsEqual(gpVec vec, gpVec other);
    gpVec gpVec_Multiplied(gpVec v, double dist);
    gpVec gpVec_Crossed(gpVec v, gpVec other);
    gpVec gpVec_Normalized(gpVec v);
    double gpVec_Magnitude(gpVec v);
#ifdef __cplusplus
}
#endif
