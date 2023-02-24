#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <GeomLProp_SLProps.hxx>
extern "C" {
#endif
    GeomLPropSLProps GeomLPropSLProps_Init(gcSurface surface, double umin, double vmin, double n, double res);
    gpDir GeomLPropsSLProps_Normal(GeomLPropSLProps props);
    void GeomLPropSLProps_Free(GeomLPropSLProps props);
#ifdef __cplusplus
}
#endif