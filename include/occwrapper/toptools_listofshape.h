#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <TopTools_ListOfShape.hxx>
extern "C" {
#endif
    TopToolsListOfShape TopToolsListOfShape_Init();
    void TopToolsListOfShape_Free(TopToolsListOfShape list);
    TopoDSShape TopToolsListOfShape_Append(TopToolsListOfShape list, TopoDSShape shape);
    void TopToolsListOfShape_AppendList(TopToolsListOfShape list, TopToolsListOfShape other);
    int TopToolsListOfShape_Extent(TopToolsListOfShape list);
    ShapeIterator TopToolsListOfShape_Begin(TopToolsListOfShape list);
    ShapeIterator ShapeIterator_Next(ShapeIterator iter);
    TopoDSShape ShapeIterator_Shape(ShapeIterator iter);
#ifdef __cplusplus
}
#endif
