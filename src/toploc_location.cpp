#include <TopoDS_Shape.hxx>
#include <occwrapper/toploc_location.h>

void TopLocLocation_Free(TopLocLocation loc) {
    TopLoc_Location *l = (TopLoc_Location *) loc;
    delete l;
}

gpTrsf TopLocLocation_Transformation(TopLocLocation loc) {
    TopLoc_Location *l = (TopLoc_Location *) loc;
    gp_Trsf * ret = new gp_Trsf();
    *ret = l->Transformation();
    return (void*) ret;
}

