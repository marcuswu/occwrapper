#include <GeomAdaptor_Surface.hxx>

#include <occwrapper/geom_adapter.hpp>

GeomAdapterSurface GeomAdapterSurfaceInit(gcSurface surface) {
    Handle(Geom_Surface)* s = (Handle(Geom_Surface)*)surface;
    GeomAdaptor_Surface *ret = new GeomAdaptor_Surface(*s);
    return (void *) ret;
}

bool GeomAdapterSurfaceIsConical(GeomAdapterSurface surface) {
    GeomAdaptor_Surface *s = (GeomAdaptor_Surface *) surface;
    return s->GetType() == GeomAbs_SurfaceType::GeomAbs_Cone;
}

bool GeomAdapterSurfaceIsCylindrical(GeomAdapterSurface surface) {
    GeomAdaptor_Surface *s = (GeomAdaptor_Surface *) surface;
    return s->GetType() == GeomAbs_SurfaceType::GeomAbs_Cylinder;
}

bool GeomAdapterSurfaceIsPlanar(GeomAdapterSurface surface) {
    GeomAdaptor_Surface *s = (GeomAdaptor_Surface *) surface;
    return s->GetType() == GeomAbs_SurfaceType::GeomAbs_Plane;
}