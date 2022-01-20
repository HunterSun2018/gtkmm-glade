cmake_minimum_required(VERSION 3.10)

project(demo)

set(CMAKE_CXX_STANDARD 20)

add_executable(demo src/main.cpp)

# set(ENV{PKG_CONFIG_PATH} /usr/bin/pkg-config)
find_package(PkgConfig)
pkg_search_module(GTKMM REQUIRED gtkmm-3.0)

# message(STATUS "=== GTKMM_INCLUDE_DIRS: ${GTKMM_INCLUDE_DIRS}")
include_directories(${GTKMM_INCLUDE_DIRS})
target_link_libraries(demo ${GTKMM_LIBRARIES})

include(InstallRequiredSystemLibraries)
install(DIRECTORY gui DESTINATION .)