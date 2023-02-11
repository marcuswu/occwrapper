#include <BRepMesh_IncrementalMesh.hxx>
#include <occwrapper/brepmesh.hpp>

BRepMeshIncrementalMesh BRepMeshIncrementalMesh_Init(TopoDSShape shape, double linearDefl, bool isRelative, double angularDefl, bool isParallel) {
    TopoDS_Shape *s = (TopoDS_Shape *)shape;
    BRepMesh_IncrementalMesh *iMesh = new BRepMesh_IncrementalMesh(*s, linearDefl, isRelative, angularDefl, isParallel);
    return (void *) iMesh;
}

void BRepMeshIncrementalMesh_Free(BRepMeshIncrementalMesh mesh) {
    BRepMesh_IncrementalMesh *iMesh = (BRepMesh_IncrementalMesh *)mesh;
    delete iMesh;
}