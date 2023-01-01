#include <BRepMesh_IncrementalMesh.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif

BRepMeshIncrementalMesh BRepMeshIncrementalMeshInit(TopoDSShape shape, double linearDefl, bool isRelative, double angularDefl, bool isParallel);

#ifdef __cplusplus
}
#endif