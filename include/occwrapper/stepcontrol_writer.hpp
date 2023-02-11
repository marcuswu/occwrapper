#include <STEPControl_Writer.hxx>
#include <STEPControl_StepModelType.hxx>

#include "occ_types.hpp"

typedef int STEPControlStepModelType;
STEPControlStepModelType STEPControlAsIs = STEPControl_AsIs;
STEPControlStepModelType STEPControlManifoldSolidBrep = STEPControl_ManifoldSolidBrep;
STEPControlStepModelType STEPControlBrepWithVoids = STEPControl_BrepWithVoids;
STEPControlStepModelType STEPControlFacetedBrep = STEPControl_FacetedBrep;
STEPControlStepModelType STEPControlFacetedBrepAndBrepWithVoids = STEPControl_FacetedBrepAndBrepWithVoids;
STEPControlStepModelType STEPControlShellBasedSurfaceModel = STEPControl_ShellBasedSurfaceModel;
STEPControlStepModelType STEPControlGeometricCurveSet = STEPControl_GeometricCurveSet;
STEPControlStepModelType STEPControlHybrid = STEPControl_Hybrid;

#ifdef __cplusplus
extern "C" {
#endif
    STEPControlWriter STEPControlWriter_Init();
    int STEPControlWriter_Transfer(STEPControlWriter writer, TopoDSShape shape, STEPControlStepModelType type);
    int STEPControlWriter_Write(STEPControlWriter writer, char *filename);
    void STEPControlWriter_Free(STEPControlWriter writer);
#ifdef __cplusplus
}
#endif