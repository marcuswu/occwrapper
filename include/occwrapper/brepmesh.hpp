#include <BRepMesh_IncrementalMesh.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif

BRepMeshIncrementalMesh BRepMeshIncrementalMesh_Init(TopoDSShape shape, double linearDefl, bool isRelative, double angularDefl, bool isParallel);
void BRepMeshIncrementalMesh_Free(BRepMeshIncrementalMesh mesh);

#ifdef __cplusplus
}
#endif