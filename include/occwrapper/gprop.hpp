#include <GProp_GProps.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    GPropGProps GProp_GPropsInit();
    double GProp_GPropsMass(GPropGProps props);
    gpPnt GProp_GPropsCentreOfMass(GPropGProps props);
#ifdef __cplusplus
}
#endif