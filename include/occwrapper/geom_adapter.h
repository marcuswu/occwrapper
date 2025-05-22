#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/GeomAdaptor_Surface.hxx>
extern "C" {
#endif
    GeomAdapterSurface GeomAdapterSurface_Init(gcSurface surface);
    void GeomAdapterSurface_Free(GeomAdapterSurface surface);
    bool GeomAdapterSurface_IsConical(GeomAdapterSurface surface);
    bool GeomAdapterSurface_IsCylindrical(GeomAdapterSurface surface);
    bool GeomAdapterSurface_IsPlanar(GeomAdapterSurface surface);
#ifdef __cplusplus
}
#endif