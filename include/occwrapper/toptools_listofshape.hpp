#include <TopTools_ListOfShape.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    TopToolsListOfShape TopToolsListOfShapeInit();
    TopoDSShape TopToolsListOfShapeAppend(TopToolsListOfShape list, TopoDSShape shape);
    ShapeIterator TopToolsListOfShapeBegin(TopToolsListOfShape list);
    ShapeIterator ShapeIteratorNext(ShapeIterator iter);
    TopoDSShape ShapeIteratorShape(ShapeIterator iter);
#ifdef __cplusplus
}
#endif
