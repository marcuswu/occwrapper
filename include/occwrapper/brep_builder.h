#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/BRepBuilderAPI_MakeEdge.hxx>
#include <opencascade/BRepBuilderAPI_MakeWire.hxx>
#include <opencascade/BRepBuilderAPI_MakeFace.hxx>
#include <opencascade/BRepBuilderAPI_Transform.hxx>
extern "C" {
#endif
    BRepBuilder BRepBuilder_Init();
    void BRepBuilder_MakeCompound(BRepBuilder builder, TopoDSCompound res);
    void BRepBuilder_Add(BRepBuilder builder, TopoDSShape res, TopoDSShape shape);
    void BRepBuilder_Free(BRepBuilder builder);

    void BRepBuilderAPI_SetPrecision(double precision);
    BRepBuilderAPIMakeEdge BRepBuilderAPIMakeEdge_InitWithGeomCurve(GeomCurve curve);
    TopoDSEdge BRepBuilderAPIMakeEdge_ToTopoDSEdge(BRepBuilderAPIMakeEdge edge);
    void BRepBuilderAPIMakeEdge_Free(BRepBuilderAPIMakeEdge edge);

    BRepBuilderAPIMakeWire BRepBuilderAPIMakeWire_Init();
    BRepBuilderAPIMakeWire BRepBuilderAPIMakeWire_InitWithTopoDSEdge(TopoDSEdge edge);
    void BRepBuilderAPIMakeWire_AddEdge(BRepBuilderAPIMakeWire wire, TopoDSEdge edge);
    void BRepBuilderAPIMakeWire_AddWire(BRepBuilderAPIMakeWire makeWire, TopoDSWire wire);
    TopoDSWire BRepBuilderAPIMakeWire_ToTopoDSWire(BRepBuilderAPIMakeWire wire);
    void BRepBuilderAPIMakeWire_Free(BRepBuilderAPIMakeWire wire);

    BRepBuilderAPIMakeFace BRepBuilderAPIMakeFace_InitWithWire(TopoDSWire wire);
    TopoDSFace BRepBuilderAPIMakeFace_ToTopoDSFace(BRepBuilderAPIMakeFace face);
    void BRepBuilderAPIMakeFace_Free(BRepBuilderAPIMakeFace face);

    TopoDSShape BRepBuilderAPIMakeShape_Shape(BRepBuilderAPIMakeShape makeShape);

    BRepBuilderAPITransform BRepBuilderAPITransform_InitWithWireTrsf(TopoDSWire wire, gpTrsf trsf);
    TopoDSShape BRepBuilderAPITransform_Shape(BRepBuilderAPITransform breptrsf);
    void BRepBuilderAPITransform_Free(BRepBuilderAPITransform breptrsf);
#ifdef __cplusplus
}
#endif
