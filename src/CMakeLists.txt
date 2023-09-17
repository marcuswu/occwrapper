set(HEADER_LIST 
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brepalgoapi.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brepgprop.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brepmesh.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brepprimapi.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/breptools.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brep_adapter.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brep_builder.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/brep_tool.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/geomlprop_slprops.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/geom_adapter.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/geom_curve.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gprop.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_ax1.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_ax2.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_ax3.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_circ.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_dir.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_pln.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_pnt.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_quaternion.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_trsf.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_vec.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/occ_types.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/stlapi_writer.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/stepcontrol_writer.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/topexp_explorer.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/toploc_location.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/topods_compound.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/topods_shape.h
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/toptools_listofshape.h)

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
    gp_quaternion.cpp
    gp_trsf.cpp
    gp_vec.cpp
    stlapi_writer.cpp
    stepcontrol_writer.cpp
    topexp_explorer.cpp
    toploc_location.cpp
    topods_shape.cpp
    topods_compound.cpp
    toptools_listofshape.cpp)

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

target_link_libraries(occwrapper PUBLIC ${OCCT_LIBS})
target_link_libraries(occwrapper_static PUBLIC ${OCCT_LIBS})

target_compile_features(occwrapper PUBLIC cxx_std_11)
target_compile_features(occwrapper_static PUBLIC cxx_std_11)

source_group(
    TREE "${PROJECT_SOURCE_DIR}/include"
    PREFIX "Header Files"
    FILES ${HEADER_LIST}
)

set_property(TARGET occwrapper
    PROPERTY PUBLIC_HEADER ${HEADER_LIST})
set_property(TARGET occwrapper PROPERTY POSITION_INDEPENDENT_CODE ON)
set_property(TARGET occwrapper_static PROPERTY POSITION_INDEPENDENT_CODE ON)

set (OCCWRAPPER_INCLUDE_DIR occwrapper)

configure_file(occwrapper.pc.in occwrapper.pc @ONLY)
include(CMakePackageConfigHelpers)
configure_package_config_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
	"${CMAKE_CURRENT_BINARY_DIR}/occwrapperConfig.cmake"
	INSTALL_DESTINATION "lib/cmake/occwrapper"
	PATH_VARS OCCWRAPPER_INCLUDE_DIR
	NO_SET_AND_CHECK_MACRO
	NO_CHECK_REQUIRED_COMPONENTS_MACRO
)
IF (NOT CMAKE_INSTALL_LIBDIR)
	SET(CMAKE_INSTALL_LIBDIR lib)
ENDIF()
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/occwrapperConfig.cmake DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/occwrapper)
install(FILES ${CMAKE_BINARY_DIR}/src/occwrapper.pc DESTINATION "${CMAKE_INSTALL_LIBDIR}/pkgconfig")
install (TARGETS occwrapper
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION include/occwrapper)

