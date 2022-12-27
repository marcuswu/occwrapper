#include <occwrapper/TopoDS_Compound.hpp>

#include "gp_Types.hpp"

TopoDSCompound TopoDSCompoundInit() {
    TopoDS_Compound *ret = new TopoDS_Compound();
    return (void*) ret;
}