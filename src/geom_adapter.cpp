#include <GeomAdaptor_Surface.hxx>

#include <occwrapper/geom_adapter.h>

GeomAdapterSurface GeomAdapterSurface_Init(gcSurface surface) {
    Handle(Geom_Surface)* s = (Handle(Geom_Surface)*)surface;
    GeomAdaptor_Surface *ret = new GeomAdaptor_Surface(*s);
    return (void *) ret;
}

void GeomAdapterSurface_Free(GeomAdapterSurface surface) {
    GeomAdaptor_Surface *s = (GeomAdaptor_Surface *) surface;
    delete s;
}

bool GeomAdapterSurface_IsConical(GeomAdapterSurface surface) {
    GeomAdaptor_Surface *s = (GeomAdaptor_Surface *) surface;
    return s->GetType() == GeomAbs_SurfaceType::GeomAbs_Cone;
}

bool GeomAdapterSurface_IsCylindrical(GeomAdapterSurface surface) {
    GeomAdaptor_Surface *s = (GeomAdaptor_Surface *) surface;
    return s->GetType() == GeomAbs_SurfaceType::GeomAbs_Cylinder;
}

bool GeomAdapterSurface_IsPlanar(GeomAdapterSurface surface) {
    GeomAdaptor_Surface *s = (GeomAdaptor_Surface *) surface;
    return s->GetType() == GeomAbs_SurfaceType::GeomAbs_Plane;
}