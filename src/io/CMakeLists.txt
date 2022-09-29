## File Input/Output Files and Directories
set(nnmf_io_SOURCES
    csv_reader.cpp)
set(nnmf_io_HEADERS_dir
    ${PROJECT_SOURCE_DIR}/include/io)
set(nnmf_io_HEADERS
${nnmf_io_HEADERS_dir}/csv_reader.h)


add_library(nnmf_io
    ${nnmf_io_SOURCES}
    ${nnmf_io_HEADERS}
)

target_include_directories(nnmf_io PUBLIC ${PROJECT_SOURCE_DIR}/include)