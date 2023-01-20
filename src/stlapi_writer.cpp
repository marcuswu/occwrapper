#include <StlAPI_Writer.hxx>
#include <TopoDS_Compound.hxx>
#include <occwrapper/stlapi_writer.hpp>

StlAPIWriter StlAPIWriterInit() {
    StlAPI_Writer *ret = new StlAPI_Writer();
    return (void *) ret;
}

int StlAPIWriterWrite(STEPControlWriter writer, TopoDSCompound res, char *filename) {
    StlAPI_Writer *w = (StlAPI_Writer *) writer;
    TopoDS_Compound *resource = (TopoDS_Compound *) res;
    return w->Write(*resource, filename);
}
