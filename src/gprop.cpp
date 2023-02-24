#include <GProp_GProps.hxx>

#include "occwrapper/gprop.h"

GPropGProps GPropGProps_Init() {
    GProp_GProps *ret = new GProp_GProps();
    return (void *) ret;
}

void GPropGProps_Free(GPropGProps props) {
    GProp_GProps *p = (GProp_GProps *)props;
    delete p;
}

double GPropGProps_Mass(GPropGProps props) {
    GProp_GProps *p = (GProp_GProps *)props;
    return p->Mass();
}

gpPnt GPropGProps_CentreOfMass(GPropGProps props) {
    GProp_GProps *p = (GProp_GProps *)props;
    gp_Pnt *pnt = new gp_Pnt();
    *pnt = p->CentreOfMass();
    return (void *)pnt;
}