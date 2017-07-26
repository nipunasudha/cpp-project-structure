cmake_minimum_required(VERSION 2.6)
include_directories(${PROJECT_SOURCE_DIR}/MainProject/inc)
#here goes link_directories(${MyProject_SOURCE_DIR}/LibProject/src) (if any)
add_executable(
    ${EXE}
    main.cpp
    Student.cpp
    )
add_custom_target(run
    COMMAND ${EXE}
    DEPENDS ${EXE}
    WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
    )
target_link_libraries(${EXE})
