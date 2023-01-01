#include <BRepPrimAPI_MakePrism.hxx>
#include <BRepPrimAPI_MakeRevol.hxx>
#include "gp_Types.hpp"

#ifdef __cplusplus
extern "C" {
#endif

BRepPrimAPIMakeRevol BRepPrimAPIMakeRevolInit(TopoDSFace face, gpAx1 axis, double degrees);
BRepPrimAPIMakePrism BRepPrimAPIMakePrismInit(TopoDSFace face, gpVec vec);

#ifdef __cplusplus
}
#endif
