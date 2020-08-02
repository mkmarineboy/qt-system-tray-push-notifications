cmake_minimum_required(VERSION 3.10)

project(qt-system-tray-push-notifications LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Quick Widgets Gui REQUIRED)

add_executable(qt-system-tray-push-notifications
    main.cpp
    systemtray.cpp

    systemtray.h

    qml.qrc
)

target_compile_definitions(qt-system-tray-push-notifications
  PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(qt-system-tray-push-notifications
  PRIVATE Qt5::Core Qt5::Quick Qt5::Widgets Qt5::Gui)
