#include <BRep_Tool.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif

gcSurface BRepTool_Surface(TopoDSFace face);
void GCSurface_Free(gcSurface surface);
gpPnt BRepTool_Pnt(TopoDSVertex vertex);

#ifdef __cplusplus
}
#endif