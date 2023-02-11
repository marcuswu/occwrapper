#include <TopExp_Explorer.hxx>
#include <TopAbs_ShapeEnum.hxx>

#include "occ_types.hpp"

typedef int TopAbsShapeEnum;
TopAbsShapeEnum TopAbsCompound = TopAbs_COMPOUND;
TopAbsShapeEnum TopAbsCompSolid = TopAbs_COMPSOLID;
TopAbsShapeEnum TopAbsSolid = TopAbs_SOLID;
TopAbsShapeEnum TopAbsShell = TopAbs_SHELL;
TopAbsShapeEnum TopAbsFace = TopAbs_FACE;
TopAbsShapeEnum TopAbsWire = TopAbs_WIRE;
TopAbsShapeEnum TopAbsEdge = TopAbs_EDGE;
TopAbsShapeEnum TopAbsVertex = TopAbs_VERTEX;
TopAbsShapeEnum TopAbsShape = TopAbs_SHAPE;

#ifdef __cplusplus
extern "C" {
#endif
    TopExpExplorer TopExpExplorer_Init(TopoDSShape shape, TopAbsShapeEnum toFind);
    void TopExpExplorer_Free(TopExpExplorer exp);
    bool TopExpExplorer_More(TopExpExplorer exp);
    void TopExpExplorer_Next(TopExpExplorer exp);
    TopoDSShape TopExpExplorer_Current(TopExpExplorer exp);
    int TopExpExplorer_Depth(TopExpExplorer exp);
#ifdef __cplusplus
}
#endif