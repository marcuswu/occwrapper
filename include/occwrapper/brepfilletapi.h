#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/BRepFilletAPI_MakeFillet.hxx>
extern "C" {
#endif

BRepFilletAPIMakeFillet BRepFilletAPIMakeFillet_Init(TopoDSShape shape);
void BRepFilletAPIMakeFillet_Add(BRepFilletAPIMakeFillet fillet, TopoDSEdge edge, double radius);
TopoDSShape BRepFilletAPIMakeFillet_Shape(BRepFilletAPIMakeFillet fillet);
void BRepFilletAPIMakeFillet_Free(BRepFilletAPIMakeFillet fillet);
BRepFilletAPIMakeChamfer BRepFilletAPIMakeChamfer_Init(TopoDSShape shape);
void BRepFilletAPIMakeChamfer_Add(BRepFilletAPIMakeChamfer f, TopoDSEdge e, double radius);
TopoDSShape BRepFilletAPIMakeChamfer_Shape(BRepFilletAPIMakeChamfer f);
void BRepFilletAPIMakeChamfer_Free(BRepFilletAPIMakeChamfer f);

#ifdef __cplusplus
}
#endif