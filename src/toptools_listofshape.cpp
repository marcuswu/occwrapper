#include <TopTools_ListOfShape.hxx>
#include <occwrapper/toptools_listofshape.h>

TopToolsListOfShape TopToolsListOfShape_Init() {
    TopTools_ListOfShape *list= new TopTools_ListOfShape();
    return (void *) list;
}

void TopToolsListOfShape_Free(TopToolsListOfShape list) {
    TopTools_ListOfShape *l = (TopTools_ListOfShape*) list;
    delete l;
}

TopoDSShape TopToolsListOfShape_Append(TopToolsListOfShape list, TopoDSShape shape) {
    TopTools_ListOfShape *l = (TopTools_ListOfShape*) list;
    TopoDS_Shape *s = (TopoDS_Shape *) shape;
    l->Append(*s);
    return shape;
}

void TopToolsListOfShape_AppendList(TopToolsListOfShape list, TopToolsListOfShape other) {
    TopTools_ListOfShape *l = (TopTools_ListOfShape*) list;
    TopTools_ListOfShape *o = (TopTools_ListOfShape*) other;
    l->Append(*o);
}

int TopToolsListOfShape_Extent(TopToolsListOfShape list) {
    TopTools_ListOfShape *l = (TopTools_ListOfShape*) list;
    return l->Extent();
}

ShapeIterator TopToolsListOfShape_Begin(TopToolsListOfShape list) {
    TopTools_ListOfShape *l = (TopTools_ListOfShape*) list;
    NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false> *iter = 
    new NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false>(); 
    *iter = l->begin();
    return (void *)iter;
}

ShapeIterator ShapeIterator_Next(ShapeIterator iter) {
    NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false> *i = 
    (NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false> *) iter;
    NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false> *ret = 
    new NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false>(); 
    *ret = std::next(*i, 1);
    return (void *) ret;
}

TopoDSShape ShapeIterator_Shape(ShapeIterator iter) {
    NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false> *i = 
    (NCollection_StlIterator<std::forward_iterator_tag, TopoDS_ListIteratorOfListOfShape, TopoDS_Shape, false> *) iter;
    TopoDS_Shape *ret = new TopoDS_Shape();
    *ret = **i;
    return (void *) ret;
}
