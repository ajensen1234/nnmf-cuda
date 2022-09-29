add_subdirectory(math)
add_subdirectory(io)

set(nnmf_SOURCES main.cpp)

## General Variables
set(nnmf_include_directory ${PROJECT_SOURCE_DIR}/include)

## Math Files and Directorys



add_executable(${PROJECT_NAME}
    ${nnmf_SOURCES}
    )

target_link_libraries(${PROJECT_NAME} nnmf_math)
target_link_libraries(${PROJECT_NAME} nnmf_io)

target_include_directories(${PROJECT_NAME} PUBLIC ${nnmf_include_directory})