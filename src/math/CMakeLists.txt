set(nnmf_math_SOURCES
    matrix.cpp
    nnmf.cpp)
set(nnmf_math_HEADERS_dir
    ${PROJECT_SOURCE_DIR}/include/math)
set(nnmf_math_HEADERS
    ${nnmf_math_HEADERS_dir}/matrix.h
    ${nnmf_math_HEADERS_dir}/nnmf.h)


add_library(nnmf_math STATIC
    ${nnmf_math_SOURCES}
    ${nnmf_math_HEADERS})



target_include_directories(nnmf_math PUBLIC ${PROJECT_SOURCE_DIR}/include)