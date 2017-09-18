cmake_minimum_required(VERSION 3.6)
project(lab1_processlist_j_vaira)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        lab-1/Debug/lab-1.exe
        lab-1/Debug/lab-1.ilk
        lab-1/Debug/lab-1.pdb
        lab-1/lab-1/lab-1.cpp
        lab-1/lab-1/stdafx.cpp
        lab-1/lab-1/stdafx.h
        lab-1/lab-1/targetver.h
        lab-1/lab-1.sln)

add_executable(lab1_processlist_j_vaira ${SOURCE_FILES})