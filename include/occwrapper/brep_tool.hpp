#include <BRep_Tool.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif

gcSurface BRepToolSurface(TopoDSFace face);
gpPnt BRepToolPnt(TopoDSVertex vertex);

#ifdef __cplusplus
}
#endif