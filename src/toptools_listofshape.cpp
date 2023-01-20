#include <TopTools_ListOfShape.hxx>
#include <occwrapper/toptools_listofshape.hpp>

TopToolsListOfShape TopToolsListOfShapeInit() {
    TopTools_ListOfShape *list= new TopTools_ListOfShape();
    return (void *) list;
}

TopoDSShape TopToolsListOfShapeAppend(TopToolsListOfShape list, TopoDSShape shape) {
    TopTools_ListOfShape *l = (TopTools_ListOfShape*) list;
    TopoDS_Shape *s = (TopoDS_Shape *) shape;
    l->Append(*s);
    return shape;
}

ShapeIterator TopToolsListOfShapeBegin(TopToolsListOfShape list) {
    TopTools_ListOfShape *l = (TopTools_ListOfShape*) list;
    NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false> *iter = 
    new NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false>(); 
    *iter = l->begin();
    return (void *)iter;
}

ShapeIterator ShapeIteratorNext(ShapeIterator iter) {
    NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false> *i = 
    (NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false> *) iter;
    NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false> *ret = 
    new NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false>(); 
    *ret = std::next(*i, 1);
    return (void *) ret;
}

TopoDSShape ShapeIteratorShape(ShapeIterator iter) {
    NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false> *i = 
    (NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false> *) iter;
    TopoDS_Shape *ret = new TopoDS_Shape();
    *ret = **i;
    return (void *) ret;
}