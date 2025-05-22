#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/BRepAlgoAPI_BooleanOperation.hxx>
extern "C" {
#endif

BRepAlgoAPIFuse BRepAlgoAPIFuse_Init();
void BRepAlgoAPIFuse_Free(BRepAlgoAPIFuse algo);
BRepAlgoAPICut BRepAlgoAPICut_Init();
void BRepAlgoAPICut_Free(BRepAlgoAPICut algo);
BRepAlgoAPIBooleanOperation BRepAlgoAPIFuse_ToBooleanOperation(BRepAlgoAPIFuse algo);
BRepAlgoAPIBooleanOperation BRepAlgoAPICut_ToBooleanOperation(BRepAlgoAPICut algo);

TopoDSShape BRepAlgoAPIBooleanOperation_Shape(BRepAlgoAPIBooleanOperation op);
void BRepAlgoAPIBooleanOperation_SetTools(BRepAlgoAPIBooleanOperation op, TopToolsListOfShape list);
void BRepAlgoAPIBooleanOperation_SetArguments(BRepAlgoAPIBooleanOperation op, TopToolsListOfShape list);
void BRepAlgoAPIBooleanOperation_Build(BRepAlgoAPIBooleanOperation op);
void BRepAlgoAPIBooleanOperation_Free(BRepAlgoAPIBooleanOperation op);

#ifdef __cplusplus
}
#endif
