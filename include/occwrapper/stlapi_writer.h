#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/StlAPI_Writer.hxx>
extern "C" {
#endif
    StlAPIWriter StlAPIWriter_Init();
    bool StlAPIWriter_Write(StlAPIWriter writer, TopoDSCompound res, const char *filename);
    void StlAPIWriter_Free(StlAPIWriter writer);
#ifdef __cplusplus
}
#endif
