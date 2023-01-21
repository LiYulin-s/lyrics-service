cmake_minimum_required(VERSION 3.14)

project(lyrics-service LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core DBus)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core DBus)

add_executable(lyrics-service
  DBuseServiceAdaptor.h
  DBuseServiceAdaptor.cpp
  DBusServiceServer.h
  DBusServiceServer.cpp
  main.cpp
)
target_link_libraries(lyrics-service Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::DBus)

install(TARGETS lyrics-service
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
