#include <StlAPI_Writer.hxx>

#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    StlAPIWriter StlAPIWriterInit();
    int StlAPIWriterWrite(STEPControlWriter writer, char *filename);
#ifdef __cplusplus
}
#endif