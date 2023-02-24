#include <BRepAlgoAPI_Cut.hxx>
#include <BRepAlgoAPI_Fuse.hxx>
#include <occwrapper/brepalgoapi.h>

BRepAlgoAPIFuse BRepAlgoAPIFuse_Init() {
    BRepAlgoAPI_Fuse *ret = new BRepAlgoAPI_Fuse();
    return (void*) ret;
}

void BRepAlgoAPIFuse_Free(BRepAlgoAPIFuse algo) {
    BRepAlgoAPI_Fuse *fuse = (BRepAlgoAPI_Fuse *)algo;
    delete fuse;
}

BRepAlgoAPIFuse BRepAlgoAPICut_Init() {
    BRepAlgoAPI_Cut *ret = new BRepAlgoAPI_Cut();
    return (void*) ret;
}

void BRepAlgoAPICut_Free(BRepAlgoAPICut algo){
    BRepAlgoAPI_Cut *cut = (BRepAlgoAPI_Cut *)algo;
    delete cut;
}

TopoDSShape BRepAlgoAPIBooleanOperation_Shape(BRepAlgoAPIBooleanOperation op) {
    BRepAlgoAPI_BooleanOperation *operation = (BRepAlgoAPI_BooleanOperation *)op;

    TopoDS_Shape *ret = new TopoDS_Shape();
    *ret = operation->Shape();
    return ret;
}