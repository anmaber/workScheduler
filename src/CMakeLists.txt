set(SRC_LIST employee.cpp)

add_library(workScheduler-lib ${SRC_LIST})
#target_include_libraries(workScheduler-lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/src/main.cpp)
target_link_libraries(${PROJECT_NAME} workScheduler-lib)

if (UNIX)
    target_link_libraries(${PROJECT_NAME} workScheduler-lib pthread)
else (UNIX)
    target_link_libraries(${PROJECT_NAME} workScheduler-lib)
endif (UNIX)

