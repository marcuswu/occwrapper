#include <BRepAlgoAPI_BooleanOperation.hxx>
#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif

BRepAlgoAPIFuse BRepAlgoAPIFuseInit();
BRepAlgoAPICut BRepAlgoAPICutInit();
TopoDSShape BRepAlgoAPIBooleanOperationShape(BRepAlgoAPIBooleanOperation op);

#ifdef __cplusplus
}
#endif