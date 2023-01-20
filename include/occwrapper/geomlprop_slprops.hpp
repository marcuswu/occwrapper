#include <GeomLProp_SLProps.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    GeomLPropSLProps GeomLPropSLPropsInit(gcSurface surface, double umin, double vmin, double n, double res);
    gpDir GeomLPropsSLPropsNormal(GeomLPropSLProps props);
#ifdef __cplusplus
}
#endif