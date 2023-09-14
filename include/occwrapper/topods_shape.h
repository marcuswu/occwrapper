#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <TopoDS_Shape.hxx>
extern "C" {
#endif
    bool TopoDSShape_IsEqual(TopoDSShape shape, TopoDSShape other);
    void TopoDSShape_Free(TopoDSShape shape);
    TopLocLocation TopoDSShape_Location(TopoDSShape shape);
#ifdef __cplusplus
}
#endif
