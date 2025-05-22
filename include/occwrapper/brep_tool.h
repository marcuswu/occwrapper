#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/BRep_Tool.hxx>
extern "C" {
#endif

gcSurface BRepTool_Surface(TopoDSFace face);
void GCSurface_Free(gcSurface surface);
gpPnt BRepTool_Pnt(TopoDSVertex vertex);

#ifdef __cplusplus
}
#endif