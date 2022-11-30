set(HEADER_LIST 
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_Ax1.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_Ax3.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_Dir.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_Pnt.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_Trsf.hpp
    ${OCCWrapper_SOURCE_DIR}/include/occwrapper/gp_Vec.hpp)

set(SOURCE_LIST
    gp_Ax1.cpp
    gp_Ax3.cpp
    gp_Dir.cpp
    gp_Pnt.cpp
    gp_Trsf.cpp
    gp_Vec.cpp)

add_library(occwrapper ${SOURCE_LIST} ${HEADER_LIST})

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