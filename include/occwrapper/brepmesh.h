#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <BRepMesh_IncrementalMesh.hxx>
extern "C" {
#endif

BRepMeshIncrementalMesh BRepMeshIncrementalMesh_Init(TopoDSShape shape, double linearDefl, bool isRelative, double angularDefl, bool isParallel);
void BRepMeshIncrementalMesh_Free(BRepMeshIncrementalMesh mesh);

#ifdef __cplusplus
}
#endif