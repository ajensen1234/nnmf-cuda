add_executable(matrix_transpose_test
    matrix_transpose_test.cpp)
target_link_libraries(matrix_transpose_test PRIVATE nnmf_math)
target_include_directories(matrix_transpose_test PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_test(NAME matrix_transpose_test COMMAND matrix_transpose_test)