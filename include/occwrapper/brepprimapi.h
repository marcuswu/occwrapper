#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <BRepPrimAPI_MakePrism.hxx>
#include <BRepPrimAPI_MakeRevol.hxx>
extern "C" {
#endif

BRepPrimAPIMakeRevol BRepPrimAPIMakeRevol_Init(TopoDSFace face, gpAx1 axis, double degrees);
void BRepPrimAPIMakeRevol_Free(BRepPrimAPIMakeRevol makeRevol);
BRepPrimAPIMakePrism BRepPrimAPIMakePrism_Init(TopoDSFace face, gpVec vec);
void BRepPrimAPIMakePrism_Free(BRepPrimAPIMakePrism makePrism);

#ifdef __cplusplus
}
#endif
