#include <GeomLProp_SLProps.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    GeomLPropSLProps GeomLPropSLProps_Init(gcSurface surface, double umin, double vmin, double n, double res);
    gpDir GeomLPropsSLProps_Normal(GeomLPropSLProps props);
    void GeomLPropSLProps_Free(GeomLPropSLProps props);
#ifdef __cplusplus
}
#endif