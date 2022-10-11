add_executable(csv_tester
    io/csv_tester.cpp)
    
    
target_link_libraries(csv_tester nnmf_io nnmf_math)
target_include_directories(csv_tester PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(nnmf_tester
    math/nnmf_tester.cpp)

target_link_libraries(nnmf_tester nnmf_io nnmf_math)
target_include_directories(nnmf_tester PUBLIC ${PROJECT_SOURCE_DIR}/include)


add_subdirectory(math)