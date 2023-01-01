#include <GProp_GProps.hxx>

#include "occwrapper/gprop.hpp"

GPropGProps GProp_GPropsInit() {
    GProp_GProps *ret = new GProp_GProps();
    return (void *) ret;
}