#include <gp_Pln.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gpPln gpPln_Init();
    gpPln gpPln_InitAx3(gpAx3 coord);
    gpPln gpPln_InitPntDir(gpPnt origin, gpDir dir);
    gpAx1 gpPln_Axis(gpPln plane);
    gpAx3 gpPln_Position(gpPln plane);
    bool gpPln_ContainsPoint(gpPln plane, gpPnt point, double tolerance);
    void gpPln_Free(gpPln plane);
#ifdef __cplusplus
}
#endif