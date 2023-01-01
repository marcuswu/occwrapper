#include <gp_Circ.hxx>
#include <occwrapper/gp_Circ.hpp>

gpAx1 gpCircInit(gpAx2 center, double radius) {
    gp_Ax2 * c = (gp_Ax2 *)center;
    gp_Circ * ret = new gp_Circ(*c, radius);
    return (void*) ret;
}

double gpCirclRadius(gpCirc circle) {
    gp_Circ *circ = (gp_Circ *)circle;
    return circ->Radius();
}