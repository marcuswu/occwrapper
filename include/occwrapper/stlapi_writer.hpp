#include <StlAPI_Writer.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    StlAPIWriter StlAPIWriter_Init();
    int StlAPIWriter_Write(StlAPI_Writer writer, char *filename);
    void StlAPIWriter_Free(StlAPI_Writer writer);
#ifdef __cplusplus
}
#endif