#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <TopoDS_Compound.hxx>
extern "C" {
#endif
    TopoDSCompound TopoDSCompound_Init();
    void TopoDSCompound_Free(TopoDSCompound comp);
#ifdef __cplusplus
}
#endif
