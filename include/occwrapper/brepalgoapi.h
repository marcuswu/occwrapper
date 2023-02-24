#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <BRepAlgoAPI_BooleanOperation.hxx>
extern "C" {
#endif

BRepAlgoAPIFuse BRepAlgoAPIFuse_Init();
void BRepAlgoAPIFuse_Free(BRepAlgoAPIFuse algo);
BRepAlgoAPICut BRepAlgoAPICut_Init();
void BRepAlgoAPICut_Free(BRepAlgoAPICut algo);
TopoDSShape BRepAlgoAPIBooleanOperation_Shape(BRepAlgoAPIBooleanOperation op);

#ifdef __cplusplus
}
#endif