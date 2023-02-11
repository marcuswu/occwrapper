#include <BRep_Tool.hxx>
#include <occwrapper/brep_tool.hpp>

gcSurface BRepTool_Surface(TopoDSFace face) {
    TopoDS_Face* f = (TopoDS_Face *)face;
    Handle(Geom_Surface) *ret = new Handle(Geom_Surface)(BRep_Tool::Surface(*f));
    return (void *) ret;
}

void GCSurface_Free(gcSurface surface) {
    Handle(Geom_Surface) *surf = (Handle(Geom_Surface) *)surface;
    delete surf;
}

gpPnt BRepTool_Pnt(TopoDSVertex vertex) {
    TopoDS_Vertex *v = (TopoDS_Vertex *) vertex;
    gp_Pnt *p = new gp_Pnt();
    *p = BRep_Tool::Pnt(*v);
    return (void *)p;
}
