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

BRepAlgoAPIBooleanOperation BRepAlgoAPIFuse_ToBooleanOperation(BRepAlgoAPIFuse algo) {
    BRepAlgoAPI_Fuse *fuse = (BRepAlgoAPI_Fuse *)algo;
    return (void*) fuse;
}

BRepAlgoAPIBooleanOperation BRepAlgoAPICut_ToBooleanOperation(BRepAlgoAPICut algo) {
    BRepAlgoAPI_Cut *cut = (BRepAlgoAPI_Cut *)algo;
    return (void*) cut;
}

TopoDSShape BRepAlgoAPIBooleanOperation_Shape(BRepAlgoAPIBooleanOperation op) {
    BRepAlgoAPI_BooleanOperation *operation = (BRepAlgoAPI_BooleanOperation *)op;

    TopoDS_Shape *ret = new TopoDS_Shape();
    *ret = operation->Shape();
    return ret;
}

void BRepAlgoAPIBooleanOperation_SetTools(BRepAlgoAPIBooleanOperation op, TopToolsListOfShape list) {
    BRepAlgoAPI_BooleanOperation *operation = (BRepAlgoAPI_BooleanOperation *)op;
    TopTools_ListOfShape *tools = (TopTools_ListOfShape *)list;
    operation->SetTools(*tools);
}

void BRepAlgoAPIBooleanOperation_SetArguments(BRepAlgoAPIBooleanOperation op, TopToolsListOfShape list) {
    BRepAlgoAPI_BooleanOperation *operation = (BRepAlgoAPI_BooleanOperation *)op;
    TopTools_ListOfShape *args = (TopTools_ListOfShape *)list;
    operation->SetArguments(*args);
}

void BRepAlgoAPIBooleanOperation_Build(BRepAlgoAPIBooleanOperation op) {
    BRepAlgoAPI_BooleanOperation *operation = (BRepAlgoAPI_BooleanOperation *)op;
    operation->Build();
}

void BRepAlgoAPIBooleanOperation_Free(BRepAlgoAPIBooleanOperation op) {
    BRepAlgoAPI_BooleanOperation *operation = (BRepAlgoAPI_BooleanOperation *)op;
    delete operation;
}

