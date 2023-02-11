#include <TopoDS_Shape.hxx>
#include <occwrapper/topods_shape.hpp>

void TopoDSShape_Free(TopoDSShape shape) {
    TopoDS_Shape *s = (TopoDS_Shape *) shape;
    delete s;
}