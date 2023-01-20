#include <GeomLProp_SLProps.hxx>
#include <occwrapper/geomlprop_slprops.hpp>

GeomLPropSLProps GeomLPropSLPropsInit(gcSurface surface, double umin, double vmin, double n, double res) {
    Handle(Geom_Surface)* s = (Handle(Geom_Surface)*)surface;

    GeomLProp_SLProps * p = new GeomLProp_SLProps(*s, umin, vmin, n, res);
    return (void *) p;
}

gpDir GeomLPropsSLPropsNormal(GeomLPropSLProps props) {
    GeomLProp_SLProps * p = (GeomLProp_SLProps *) props;
    gp_Dir *ret = new gp_Dir();
    *ret = p->Normal();
    return (void *) ret;
}