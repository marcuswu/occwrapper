#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <TopLoc_Location.hxx>
extern "C" {
#endif
    void TopLocLocation_Free(TopLocLocation loc);
    gpTrsf TopLocLocation_Transformation(TopLocLocation loc);
#ifdef __cplusplus
}
#endif
