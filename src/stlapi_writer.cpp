#include <StlAPI_Writer.hxx>
#include <TopoDS_Compound.hxx>
#include <occwrapper/stlapi_writer.h>

StlAPIWriter StlAPIWriter_Init() {
    StlAPI_Writer *ret = new StlAPI_Writer();
    return (void *) ret;
}

int StlAPIWriter_Write(StlAPIWriter writer, TopoDSCompound res, char *filename) {
    StlAPI_Writer *w = (StlAPI_Writer *) writer;
    TopoDS_Compound *resource = (TopoDS_Compound *) res;
    return w->Write(*resource, filename);
}

void StlAPIWriter_Free(StlAPIWriter writer) {
    StlAPI_Writer *w = (StlAPI_Writer *) writer;
    delete w;
}
