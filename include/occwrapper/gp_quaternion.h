#include <occwrapper/occ_types.h>

#ifdef __cplusplus
#include <opencascade/gp_Quaternion.hxx>
extern "C" {
#endif
    gpQuaternion gpQuaternion_Inverted(gpQuaternion q);
    gpQuaternion gpQuaternion_Multiplied(gpQuaternion q, gpQuaternion other);
    bool gpQuaternion_IsEqual(gpQuaternion q, gpQuaternion other);
    double gpQuaternion_GetRotationAngle(gpQuaternion q);

    void gpQuaternion_Free(gpQuaternion q);
#ifdef __cplusplus
}
#endif
