#include <BRepTools.hxx>
#include <occwrapper/breptools.hpp>

void BRepToolsUVBounds(TopoDSFace face, double &umin, double &umax, double &vmin, double &vmax) {
    TopoDS_Face *f = (TopoDS_Face *)face;
    BRepTools::UVBounds(*f, umin, umax, vmin, vmax);
}