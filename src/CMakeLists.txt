set(HEADER_LIST 
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brepalgoapi.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brepgprop.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brepmesh.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brepprimapi.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/breptools.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brep_adapter.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brep_builder.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brep_tool.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/geomlprop_slprops.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/geom_adapter.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/geom_curve.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gprop.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_ax1.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_ax2.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_ax3.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_circ.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_dir.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_pln.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_pnt.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_trsf.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_vec.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/stepcontrol_writer.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/topods_compound.hpp)

set(SOURCE_LIST
    brepalgoapi.cpp
    brepgprop.cpp
    brepmesh.cpp
    brepprimapi.cpp
    breptools.cpp
    brep_adapter.cpp
    brep_builder.cpp
    brep_tool.cpp
    geomlprop_slprops.cpp
    geom_adapter.cpp
    geom_curve.cpp
    gprop.cpp
    gp_ax1.cpp
    gp_ax2.cpp
    gp_ax3.cpp
    gp_circ.cpp
    gp_dir.cpp
    gp_pln.cpp
    gp_pnt.cpp
    gp_trsf.cpp
    gp_vec.cpp
	stepcontrol_writer.cpp
    topods_compound.cpp)

add_library(occwrapper SHARED ${SOURCE_LIST} ${HEADER_LIST})
add_library(occwrapper_static STATIC ${SOURCE_LIST} ${HEADER_LIST})

target_compile_options(occwrapper PUBLIC
     $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>,$<CXX_COMPILER_ID:GNU>>:
          -Wall>
     $<$<CXX_COMPILER_ID:MSVC>:
          /W4>)

target_compile_options(occwrapper_static PUBLIC
     $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>,$<CXX_COMPILER_ID:GNU>>:
          -Wall>
     $<$<CXX_COMPILER_ID:MSVC>:
          /W4>)

target_include_directories(occwrapper PUBLIC ../include)
target_include_directories(occwrapper_static PUBLIC ../include)

set (OCCT_LIBS
    TKSTL
    TKBRep
    TKIGES
    TKSTEP
    TKernel
    TKMath
    TKMesh
    TKBO)

target_link_libraries(occwrapper PUBLIC ${OCC_LIBS})
target_link_libraries(occwrapper_static PUBLIC ${OCC_LIBS})

target_compile_features(occwrapper PUBLIC cxx_std_11)
target_compile_features(occwrapper_static PUBLIC cxx_std_11)

source_group(
    TREE "${PROJECT_SOURCE_DIR}/include"
    PREFIX "Header Files"
    FILES ${HEADER_LIST}
)
