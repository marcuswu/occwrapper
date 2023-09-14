#include <TopoDS_Shape.hxx>
#include <occwrapper/topods_shape.h>

bool TopoDSShape_IsEqual(TopoDSShape shape, TopoDSShape other) {
    TopoDS_Shape *s = (TopoDS_Shape *) shape;
    TopoDS_Shape *o = (TopoDS_Shape *) other;
    return s->IsEqual(*o);
}

TopLocLocation TopoDSShape_Location(TopoDSShape shape) {
    TopoDS_Shape *s = (TopoDS_Shape *) shape;
    TopLoc_Location *loc = new TopLoc_Location();
    *loc = s->Location();
    return (void*) loc;
}

void TopoDSShape_Free(TopoDSShape shape) {
    TopoDS_Shape *s = (TopoDS_Shape *) shape;
    delete s;
}
