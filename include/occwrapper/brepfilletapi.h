#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/BRepFilletAPI_MakeFillet.hxx>
extern "C" {
#endif

BRepFilletAPIMakeFillet BRepFilletAPIMakeFillet_Init(TopoDSShape shape);
void BRepFilletAPIMakeFillet_Add(BRepFilletAPIMakeFillet fillet, TopoDSEdge edge, double radius);
TopoDSShape BRepFilletAPIMakeFillet_Shape(BRepFilletAPIMakeFillet fillet);
void BRepFilletAPIMakeFillet_Free(BRepFilletAPIMakeFillet fillet);

#ifdef __cplusplus
}
#endif