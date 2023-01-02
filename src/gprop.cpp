#include <GProp_GProps.hxx>

#include "occwrapper/gprop.hpp"

GPropGProps GProp_GPropsInit() {
    GProp_GProps *ret = new GProp_GProps();
    return (void *) ret;
}

double GProp_GPropsMass(GPropGProps props) {
    GProp_GProps *p = (GProp_GProps *)props;
    return p->Mass();
}

gpPnt GProp_GPropsCentreOfMass(GPropGProps props) {
    GProp_GProps *p = (GProp_GProps *)props;
    gp_Pnt *pnt = new gp_Pnt();
    *pnt = p->CentreOfMass();
    return (void *)pnt;
}