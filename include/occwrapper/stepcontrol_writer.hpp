#include <STEPControl_Writer.hxx>
#include <STEPControl_StepModelType.hxx>

#include "gp_Types.hpp"

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
    STEPControlWriter STEPControlWriterInit();
    int STEPControlWriterTransfer(STEPControlWriter writer, TopoDSShape shape, STEPControlStepModelType type);
    int STEPControlWriterWrite(STEPControlWriter writer, char *filename);
#ifdef __cplusplus
}
#endif