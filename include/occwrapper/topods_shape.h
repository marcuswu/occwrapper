#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/TopoDS_Shape.hxx>
extern "C" {
#endif
    bool TopoDSShape_IsEqual(TopoDSShape shape, TopoDSShape other);
    void TopoDSShape_Free(TopoDSShape shape);
    TopLocLocation TopoDSShape_Location(TopoDSShape shape);
    int TopoDSShape_Orientation(TopoDSShape shape);
    TopoDSWire TopoDSShape_Wire(TopoDSShape shape);
#ifdef __cplusplus
}
#endif
