#include <TopoDS_Compound.hxx>
#include <occwrapper/topods_compound.h>

TopoDSCompound TopoDSCompound_Init() {
    TopoDS_Compound *ret = new TopoDS_Compound();
    return (void*) ret;
}

void TopoDSCompound_Free(TopoDSCompound comp) {
    TopoDS_Compound * c = (TopoDS_Compound *) comp;
    delete c;
}