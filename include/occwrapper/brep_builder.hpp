#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_Transform.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    BRepBuilder BRepBuilderInit();
    void BRepBuilderMakeCompound(BRepBuilder builder, TopoDSCompound res);
    void BRepBuilderAdd(BRepBuilder builder, TopoDSShape res, TopoDSShape shape);
    BRepBuilderAPIMakeEdge BRepBuilderAPIMakeEdgeInitWithGeomCurve(GeomCurve curve);
    TopoDSEdge BRepBuilderAPIMakeEdgeToTopoDSEdge(BRepBuilderAPIMakeEdge edge);
    BRepBuilderAPIMakeWire BRepBuilderAPIMakeWireInit();
    BRepBuilderAPIMakeWire BRepBuilderAPIMakeWireInitWithTopoDSEdge(TopoDSEdge edge);
    void BRepBuilderAPIMakeWireAddEdge(TopoDSEdge edge);
    TopoDSWire BRepBuilderAPIMakeWireToTopoDSWire(BRepBuilderAPIMakeWire wire);
    BRepBuilderAPIMakeFace BRepBuilderAPIMakeFaceInitWithWire(TopoDSWire wire);
    TopoDSFace BRepBuilderAPIMakeFaceToTopoDSFace(TopoDSWire wire);
    BRepBuilder BRepBuilderInit();
    void BRepBuilderMakeCompound(BRepBuilder builder, TopoDSCompound compound);
    TopoDSShape BRepBuilderAPIMakeShapeShape(BRepBuilderAPIMakeShape makeShape);
#ifdef __cplusplus
}
#endif