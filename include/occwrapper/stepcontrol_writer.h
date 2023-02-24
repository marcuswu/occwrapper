#include <occwrapper/occ_types.h>

typedef int STEPControlStepModelType;

#ifdef __cplusplus
#include <STEPControl_Writer.hxx>
#include <STEPControl_StepModelType.hxx>
extern "C" {
#endif
    STEPControlWriter STEPControlWriter_Init();
    int STEPControlWriter_Transfer(STEPControlWriter writer, TopoDSShape shape, STEPControlStepModelType type);
    int STEPControlWriter_Write(STEPControlWriter writer, char *filename);
    void STEPControlWriter_Free(STEPControlWriter writer);
#ifdef __cplusplus
}
#endif
