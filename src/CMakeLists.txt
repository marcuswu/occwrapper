set(HEADER_LIST ${OCCWrapper_SOURCE_DIR}/include/occwrapper/lib.hpp)

add_library(occwrapper lib.cpp ${HEADER_LIST})

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