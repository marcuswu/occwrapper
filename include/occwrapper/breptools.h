#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/BRepTools.hxx>
extern "C" {
#endif

void BRepTools_UVBounds(TopoDSFace face, double *umin, double *umax, double *vmin, double *vmax);

#ifdef __cplusplus
}
#endif
