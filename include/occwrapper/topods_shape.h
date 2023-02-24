#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <TopoDS_Shape.hxx>
extern "C" {
#endif
    void TopoDSShape_Free(TopoDSShape shape);
#ifdef __cplusplus
}
#endif