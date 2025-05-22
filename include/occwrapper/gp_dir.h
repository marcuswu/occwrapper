#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/gp_Dir.hxx>
extern "C" {
#endif
    gpDir gpDir_Init(double x, double y, double z);
    gpDir gpDir_InitVec(gpVec vector);
    void gpDir_Free(gpDir dir);
    double gpDir_X(gpDir dir);
    double gpDir_Y(gpDir dir);
    double gpDir_Z(gpDir dir);
    double gpDir_Dot(gpDir dir, gpDir other);
    bool gpDir_IsParallel(gpDir dir, gpDir other);
#ifdef __cplusplus
}
#endif
