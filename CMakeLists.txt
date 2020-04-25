cmake_minimum_required(VERSION 3.16)
project(NavigationSystemRevision)

set(CMAKE_CXX_STANDARD 98)

add_executable(NavigationSystemRevision main.cpp CWaypoint.h CWaypoint.cpp CGPSSensor.h CPOI.h CPoiDatabase.h CRoute.h CNavigationSystem.h CPOI.cpp CGPSSensor.cpp CPoiDatabase.cpp CNavigationSystem.cpp CRoute.cpp)