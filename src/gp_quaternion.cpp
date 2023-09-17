#include <gp_Quaternion.hxx>
#include <occwrapper/gp_quaternion.h>


gpQuaternion gpQuaternion_Inverted(gpQuaternion q) {
    gp_Quaternion *quat = (gp_Quaternion*)q;
    gp_Quaternion *ret = new gp_Quaternion();
    *ret = quat->Inverted();
    return ret;
}

gpQuaternion gpQuaternion_Multiplied(gpQuaternion q, gpQuaternion o) {
    gp_Quaternion *quat = (gp_Quaternion*)q;
    gp_Quaternion *other = (gp_Quaternion*)o;
    gp_Quaternion *ret = new gp_Quaternion();
    *ret = quat->Multiplied(*other);
    return ret;
}

bool gpQuaternion_IsEqual(gpQuaternion q, gpQuaternion o) {
    gp_Quaternion *quat = (gp_Quaternion*)q;
    gp_Quaternion *other = (gp_Quaternion*)o;
    return quat->IsEqual(*other);
}

double gpQuaternion_GetRotationAngle(gpQuaternion q) {
    gp_Quaternion *quat = (gp_Quaternion*)q;
    return quat->GetRotationAngle();
}

void gpQuaternion_Free(gpQuaternion q) {
    gp_Quaternion *quat = (gp_Quaternion*)q;
    delete quat;
}
