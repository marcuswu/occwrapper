#include <BRepTools.hxx>
#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif

void BRepTools_UVBounds(TopoDSFace face, double &umin, double &umax, double &vmin, double &vmax);

#ifdef __cplusplus
}
#endif
