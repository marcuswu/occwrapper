set(HEADER_LIST 
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brepalgoapi.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brepprimapi.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brep_adapter.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brep_builder.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/geom_Curve.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_Ax1.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_Ax2.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_Ax3.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_Circ.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_Dir.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_Pln.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_Pnt.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_Trsf.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_Vec.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/TopoDS_Compound.hpp)

set(SOURCE_LIST
    brepalgoapi.cpp
    brepprimapi.cpp
    brep_adapter.cpp
    brep_builder.cpp
    geom_Curve.cpp
    gp_Ax1.cpp
    gp_Ax2.cpp
    gp_Ax3.cpp
    gp_Circ.cpp
    gp_Dir.cpp
    gp_Pln.cpp
    gp_Pnt.cpp
    gp_Trsf.cpp
    gp_Vec.cpp
    TopoDS_Compound.cpp)

add_library(occwrapper ${SOURCE_LIST} ${HEADER_LIST})

target_compile_options(occwrapper PRIVATE
     $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>,$<CXX_COMPILER_ID:GNU>>:
          -Wall>
     $<$<CXX_COMPILER_ID:MSVC>:
          /W4>)

target_include_directories(occwrapper PUBLIC ../include)

set (OCCT_LIBS
    TKSTL
    TKBRep
    TKIGES
    TKSTEP
    TKernel
    TKMath
    TKMesh
    TKBO)

target_link_libraries(occwrapper PRIVATE ${OCC_LIBS})

target_compile_features(occwrapper PUBLIC cxx_std_11)

source_group(
    TREE "${PROJECT_SOURCE_DIR}/include"
    PREFIX "Header Files"
    FILES ${HEADER_LIST}
)