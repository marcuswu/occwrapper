#include <gp_Trsf.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    gpTrsf gpTrsfInit();
    void gpTrsfSetTransformation(gpTrsf transform, gpAx3 from, gpAx3 to);
#ifdef __cplusplus
}
#endif