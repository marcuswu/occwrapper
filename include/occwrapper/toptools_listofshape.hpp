#include <TopTools_ListOfShape.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    TopToolsListOfShape TopToolsListOfShape_Init();
    void TopToolsListOfShape_Free(TopToolsListOfShape list);
    TopoDSShape TopToolsListOfShape_Append(TopToolsListOfShape list, TopoDSShape shape);
    ShapeIterator TopToolsListOfShape_Begin(TopToolsListOfShape list);
    ShapeIterator ShapeIterator_Next(ShapeIterator iter);
    TopoDSShape ShapeIterator_Shape(ShapeIterator iter);
#ifdef __cplusplus
}
#endif
