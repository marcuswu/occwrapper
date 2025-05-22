#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/GProp_GProps.hxx>
extern "C" {
#endif
    GPropGProps GPropGProps_Init();
    void GPropGProps_Free(GPropGProps props);
    double GPropGProps_Mass(GPropGProps props);
    gpPnt GPropGProps_CentreOfMass(GPropGProps props);
#ifdef __cplusplus
}
#endif