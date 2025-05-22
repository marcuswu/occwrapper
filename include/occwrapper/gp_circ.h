#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/gp_Ax2.hxx>
extern "C" {
#endif
    gpCirc gpCirc_Init(gpAx2 center, double radius);
    double gpCirc_Radius(gpCirc circle);
    gpPnt gpCirc_Location(gpCirc circle);
    void gpCirc_Free(gpCirc circle);
#ifdef __cplusplus
}
#endif
