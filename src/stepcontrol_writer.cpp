#include <STEPControl_Writer.hxx>
#include <STEPControl_StepModelType.hxx>
#include <occwrapper/stepcontrol_writer.hpp>

STEPControlWriter STEPControlWriterInit() {
	STEPControl_Writer *ret = new STEPControl_Writer();
	return (void *) ret;
}

int STEPControlWriterTransfer(STEPControlWriter writer, TopoDSShape shape, STEPControlStepModelType mode) {
	STEPControl_Writer *w = (STEPControl_Writer *) writer;
	TopoDS_Shape *s = (TopoDS_Shape *) shape;
	return w->Transfer(*s, (STEPControl_StepModelType)mode);
}

int STEPControlWriterWrite(STEPControlWriter writer, char *filename) {
	STEPControl_Writer *w = (STEPControl_Writer *) writer;
	return w->Write(filename);
}
