cmake_minimum_required(VERSION 3.31)
project(RubiksCubeProject)

set(CMAKE_CXX_STANDARD 20)

add_executable(RubiksCubeProject main.cpp
        Model/RubiksCube.cpp
        Model/RubiksCube.h
        Model/RubiksCube3dArray.cpp
        Solver/DFSSolver.h
        Solver/BFSSolver.h
        Solver/IDDFSSolver.h
)
