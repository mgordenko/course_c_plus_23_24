cmake_minimum_required(VERSION 3.5)

project(workshops31-32 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -Werror=return-type")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(EX1_SOURCES
        qt_hello/main.cpp
        qt_hello/mainwindow.cpp
        qt_hello/mainwindow.h
        qt_hello/mainwindow.ui
)

set(EX2_SOURCES
        cantor/main.cpp
        cantor/mainwindow.cpp
        cantor/mainwindow.h
        cantor/renderarea.cpp
        cantor/renderarea.h
        cantor/mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(ex1_hello_world
        MANUAL_FINALIZATION
        ${EX1_SOURCES}
    )
    qt_add_executable(ex2_cantor
        MANUAL_FINALIZATION
        ${EX2_SOURCES}
    )
else()
    add_executable(ex1_hello_world
        ${PROJECT_SOURCES}
    )
    add_executable(ex2_cantor
        ${PROJECT_SOURCES}
    )
endif()

target_link_libraries(ex1_hello_world PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(ex2_cantor PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(ex1_hello_world PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

set_target_properties(ex2_cantor PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(ex1_hello_world)
    qt_finalize_executable(ex2_cantor)
endif()
