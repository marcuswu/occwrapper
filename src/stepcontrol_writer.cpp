#include <STEPControl_Writer.hxx>
#include <STEPControl_StepModelType.hxx>
#include <occwrapper/stepcontrol_writer.hpp>

STEPControlWriter STEPControlWriter_Init() {
	STEPControl_Writer *ret = new STEPControl_Writer();
	return (void *) ret;
}

int STEPControlWriter_Transfer(STEPControlWriter writer, TopoDSShape shape, STEPControlStepModelType mode) {
	STEPControl_Writer *w = (STEPControl_Writer *) writer;
	TopoDS_Shape *s = (TopoDS_Shape *) shape;
	return w->Transfer(*s, (STEPControl_StepModelType)mode);
}

int STEPControlWriter_Write(STEPControlWriter writer, char *filename) {
	STEPControl_Writer *w = (STEPControl_Writer *) writer;
	return w->Write(filename);
}

void STEPControlWriter_Free(STEPControlWriter writer) {
	STEPControl_Writer *w = (STEPControl_Writer *) writer;
	delete w;
}
