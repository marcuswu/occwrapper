#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/BRepPrimAPI_MakePrism.hxx>
#include <opencascade/BRepPrimAPI_MakeRevol.hxx>
extern "C" {
#endif

BRepPrimAPIMakeRevol BRepPrimAPIMakeRevol_Init(TopoDSFace face, gpAx1 axis, double degrees);
TopoDSShape BRepPrimAPIMakeRevol_Shape(BRepPrimAPIMakeRevol makeRevol);
void BRepPrimAPIMakeRevol_Free(BRepPrimAPIMakeRevol makeRevol);

BRepPrimAPIMakePrism BRepPrimAPIMakePrism_Init(TopoDSFace face, gpVec vec);
TopoDSShape BRepPrimAPIMakePrism_Shape(BRepPrimAPIMakePrism makePrism);
void BRepPrimAPIMakePrism_Free(BRepPrimAPIMakePrism makePrism);

BRepPrimAPIMakeCylinder BRepPrimAPIMakeCylinder_Init(gpAx2 position, double radius, double height);
TopoDSShape BRepPrimAPIMakeCylinder_Shape(BRepPrimAPIMakeCylinder makeCylinder);
void BRepPrimAPIMakeCylinder_Free(BRepPrimAPIMakeCylinder makeCylinder);

BRepPrimAPIMakeBox BRepPrimAPIMakeBox_Init(gpAx2 position, double dx, double dy, double dz);
TopoDSShape BRepPrimAPIMakeBox_Shape(BRepPrimAPIMakeBox makeBox);
void BRepPrimAPIMakeBox_Free(BRepPrimAPIMakeBox makeBox);

#ifdef __cplusplus
}
#endif
