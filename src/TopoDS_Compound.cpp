#include <TopoDS_Compound.hxx>
#include <occwrapper/TopoDS_Compound.hpp>

TopoDSCompound TopoDSCompoundInit() {
    TopoDS_Compound *ret = new TopoDS_Compound();
    return (void*) ret;
}