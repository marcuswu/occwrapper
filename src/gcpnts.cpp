#include <opencascade/GCPnts_AbscissaPoint.hxx>
#include <opencascade/BRepAdaptor_Curve.hxx>
#include <occwrapper/gcpnts.h>

double CurveLength(BRepAdapterCurve c) {
    BRepAdaptor_Curve * curve = (BRepAdaptor_Curve *)c;
    return GCPnts_AbscissaPoint::Length(*curve);
}
