#include <BRepAlgoAPI_BooleanOperation.hxx>
#include "occ_types.hpp"

#ifdef __cplusplus
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