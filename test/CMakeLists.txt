set(TEST_LIST   test_main.cpp 
                employeeTest.cpp
                )

link_libraries(gtest)
add_executable(${PROJECT_NAME}-ut ${TEST_LIST})
target_link_libraries(${PROJECT_NAME}-ut workScheduler-lib)