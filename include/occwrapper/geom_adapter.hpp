#include <GeomAdaptor_Surface.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    GeomAdapterSurface GeomAdapterSurfaceInit(gcSurface surface);
    bool GeomAdapterSurfaceIsConical(GeomAdapterSurface surface);
    bool GeomAdapterSurfaceIsCylindrical(GeomAdapterSurface surface);
    bool GeomAdapterSurfaceIsPlanar(GeomAdapterSurface surface);
#ifdef __cplusplus
}
#endif