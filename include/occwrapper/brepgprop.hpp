#include <BRepGProp.hxx>
#include <GProp_GProps.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif

void BRepGPropSurfaceProperties(TopoDSShape shape, GPropGProps sprops, bool skipShared, bool useTriangulation);

#ifdef __cplusplus
}
#endif