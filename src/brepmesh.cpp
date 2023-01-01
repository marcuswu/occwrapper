#include <BRepMesh_IncrementalMesh.hxx>
#include <occwrapper/brepmesh.hpp>

BRepMeshIncrementalMesh BRepMeshIncrementalMeshInit(TopoDSShape shape, double linearDefl, bool isRelative, double angularDefl, bool isParallel) {
    TopoDS_Shape *s = (TopoDS_Shape *)shape;
    BRepMesh_IncrementalMesh *iMesh = new BRepMesh_IncrementalMesh(*s, linearDefl, isRelative, angularDefl, isParallel);
    return (void *) iMesh;
}