#include <BRepAlgoAPI_Cut.hxx>
#include <BRepAlgoAPI_Fuse.hxx>
#include <occwrapper/brepalgoapi.hpp>

BRepAlgoAPIFuse BRepAlgoAPIFuseInit() {
    BRepAlgoAPI_Fuse *ret = new BRepAlgoAPI_Fuse();
    return (void*) ret;
}

BRepAlgoAPIFuse BRepAlgoAPICutInit() {
    BRepAlgoAPI_Cut *ret = new BRepAlgoAPI_Cut();
    return (void*) ret;
}

TopoDSShape BRepAlgoAPIBooleanOperationShape(BRepAlgoAPIBooleanOperation op) {
    BRepAlgoAPI_BooleanOperation *operation = (BRepAlgoAPI_BooleanOperation *)op;

    TopoDS_Shape *ret = new TopoDS_Shape();
    *ret = operation->Shape();
    return ret;
}