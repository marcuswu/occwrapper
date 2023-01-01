#include <BRepTools.hxx>
#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif

void BRepToolsUVBounds(TopoDSFace face, double &umin, double &umax, double &vmin, double &vmax);

#ifdef __cplusplus
}
#endif
