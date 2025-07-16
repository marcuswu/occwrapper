#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/BRepGProp.hxx>
#include <opencascade/GProp_GProps.hxx>
extern "C" {
#endif

void BRepGProp_SurfaceProperties(TopoDSShape shape, GPropGProps sprops, bool skipShared, bool useTriangulation);
void BRepGProp_LinearProperties(TopoDSShape shape, GPropGProps sprops, bool skipShared, bool useTriangulation);

#ifdef __cplusplus
}
#endif