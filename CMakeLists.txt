cmake_minimum_required(VERSION 3.16)

project(cpp_oop LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cpp_oop
    README.md
    LICENSE
    src/cpp_oop_1.cpp
    src/cpp_oop_2.cpp)

include(GNUInstallDirs)
install(TARGETS cpp_oop
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
