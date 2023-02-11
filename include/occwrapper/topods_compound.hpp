#include <TopoDS_Compound.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    TopoDSCompound TopoDSCompound_Init();
    void TopoDSCompound_Free(TopoDSCompound comp);
#ifdef __cplusplus
}
#endif
