#include <TopExp_Explorer.hxx>
#include <TopAbs_ShapeEnum.hxx>

#include "gp_Types.hpp"

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
    TopExpExplorer TopExpExplorerInit(TopoDSShape shape, TopAbsShapeEnum toFind);
    bool TopExpExplorerMore(TopExpExplorer exp);
    void TopExpExplorerNext(TopExpExplorer exp);
    TopoDSShape TopExpExplorerCurrent(TopExpExplorer exp);
    int TopExpExplorerDepth(TopExpExplorer exp);
#ifdef __cplusplus
}
#endif