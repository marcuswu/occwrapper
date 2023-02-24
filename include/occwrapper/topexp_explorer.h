
#include <occwrapper/occ_types.h>

typedef int TopAbsShapeEnum;

#ifdef __cplusplus
#include <TopAbs_ShapeEnum.hxx>
#include <TopExp_Explorer.hxx>
extern "C" {
#endif
    TopExpExplorer TopExpExplorer_Init(TopoDSShape shape, TopAbsShapeEnum toFind);
    void TopExpExplorer_Free(TopExpExplorer exp);
    bool TopExpExplorer_More(TopExpExplorer exp);
    void TopExpExplorer_Next(TopExpExplorer exp);
    TopoDSShape TopExpExplorer_Current(TopExpExplorer exp);
    int TopExpExplorer_Depth(TopExpExplorer exp);
#ifdef __cplusplus
}
#endif
