cmake_minimum_required(VERSION 3.20)

project(WebEditorTry2)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)



find_package(Qt5 COMPONENTS Core Gui Widgets WebEngineWidgets REQUIRED)


add_executable(WebEditorTry2  main.cpp)
target_link_libraries(WebEditorTry2 Qt5::Core Qt5::Gui Qt5::Widgets Qt5::WebEngineWidgets Qt5::WebEngineCore)
