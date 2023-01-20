#include <gp_Pln.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gpPln gpPlnInit();
    gpPln gpPlnInitAx3(gpAx3 coord);
    gpPln gpPlnInitPntDir(gpPnt origin, gpDir dir);
    gpAx1 gpPlnAxis(gpPln plane);
    gpAx3 gpPlnPosition(gpPln plane);
    bool gpPlnContainsPoint(gpPln plane, gpPnt point, double tolerance);
#ifdef __cplusplus
}
#endif