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

#ifdef __cplusplus
}
#endif
