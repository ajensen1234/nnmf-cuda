add_executable(csv_tester
    io/csv_tester.cpp)
    
    
target_link_libraries(csv_tester nnmf_io nnmf_math)
target_include_directories(csv_tester PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(nnmf_tester
    math/nnmf_tester.cpp)

target_link_libraries(nnmf_tester nnmf_io nnmf_math)
target_include_directories(nnmf_tester PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(matrix_transpose_test
    math/matrix_transpose_test.cpp)
target_link_libraries(matrix_transpose_test PRIVATE nnmf_math)
target_include_directories(matrix_transpose_test PUBLIC ${PROJECT_SOURCE_DIR}/include)
add_test(matrix_transpose_test matrix_transpose_test)