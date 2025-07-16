#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/gp_Pnt.hxx>
extern "C" {
#endif
  gpPnt gpPnt_Midpoint(gpPnt p1, gpPnt p2);
#ifdef __cplusplus
}
#endif

