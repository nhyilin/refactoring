cmake_minimum_required(VERSION 3.22)
project(timer)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/Users/peiyilin/Qt/Tools/CMake")

find_package(Qt5 COMPONENTS
        Core
        Widgets
        Gui
        Qml
        Quick
        REQUIRED)

add_executable(${PROJECT_NAME} main.cpp mainwindow.cpp mainwindow.h mainwindow.ui )
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Widgets Qt5::Gui Qt5::Qml Qt5::Quick)

