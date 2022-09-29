set(nnmf_SOURCES main.cpp)

## General Variables
set(nnmf_include_directory ${PROJECT_SOURCE_DIR}/include)

## Math Files and Directorys
set(nnmf_math_SOURCES
    math/matrix.cpp)
set(nnmf_math_HEADERS_dir
    ${PROJECT_SOURCE_DIR}/include/math)
set(nnmf_math_HEADERS
    ${nnmf_math_HEADERS_dir}/matrix.h)

## File Input/Output Files and Directories
set(nnmf_io_SOURCES
    io/csv_reader.cpp)
set(nnmf_io_HEADERS_dir
    ${PROJECT_SOURCE_DIR}/include/io)
set(nnmf_io_HEADERS
${nnmf_io_HEADERS_dir}/csv_reader.h)

add_executable(${PROJECT_NAME}
    ${nnmf_SOURCES}
    ${nnmf_math_SOURCES}
    ${nnmf_math_HEADERS}
    ${nnmf_io_SOURCES}
    ${nnmf_io_HEADERS}
    )

target_include_directories(${PROJECT_NAME} PUBLIC ${nnmf_include_directory})