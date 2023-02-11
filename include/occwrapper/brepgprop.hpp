#include <BRepGProp.hxx>
#include <GProp_GProps.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif

void BRepGProp_SurfaceProperties(TopoDSShape shape, GPropGProps sprops, bool skipShared, bool useTriangulation);

#ifdef __cplusplus
}
#endif