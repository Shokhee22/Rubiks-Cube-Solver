# Rubik's Cube Solver in C++

## 📌 About the Project

This project is a C++ implementation of a Rubik's Cube simulator and solver. It models the cube using multiple internal representations and implements several classical search algorithms to solve scrambled cube states.

The project focuses on efficient state representation, graph search techniques, and algorithmic optimization. It also serves as a learning project for understanding search algorithms, heuristic-based solving, and object-oriented software design.

### Key Highlights

- Multiple Rubik's Cube representations
- BFS (Breadth First Search)
- DFS (Depth First Search)
- IDDFS (Iterative Deepening DFS)
- IDA* (Iterative Deepening A*)
- Pattern Database optimization
- Modular C++ architecture
- Planned OpenCV-based cube scanner

## 🛠 Features

- Simulates a complete 3×3 Rubik's Cube.
- Supports standard cube rotations and move sequences.
- Implements multiple cube representations for efficient state management.
- Solves scrambled cube states using:
  - Breadth First Search (BFS)
  - Depth First Search (DFS)
  - Iterative Deepening DFS (IDDFS)
  - Iterative Deepening A* (IDA*)
- Uses Pattern Databases to improve heuristic search performance.
- Modular object-oriented architecture for easy extension.
- Planned OpenCV integration for real-time cube scanning.

## 💻 Tech Stack

- **Language:** C++
- **Build System:** CMake
- **Algorithms:** BFS, DFS, IDDFS, IDA*
- **Data Structures:** Arrays, Bitboards, Pattern Databases
- **Concepts:** Object-Oriented Programming, Graph Search, Heuristic Search

## 📂 Project Structure

```text
Rubiks-Cube-Solver
│── Model/
│── Solver/
│── PatternDatabases/
│── Scanner/
│── bits/
│── main.cpp
│── CMakeLists.txt
│── README.md
```

## 🧠 Algorithms Implemented

| Algorithm | Purpose |
|----------|---------|
| BFS | Finds the shortest solution for small search depths |
| DFS | Explores cube states using depth-first traversal |
| IDDFS | Combines DFS memory efficiency with BFS completeness |
| IDA* | Performs heuristic-guided search using iterative deepening |
| Pattern Database | Provides heuristic estimates to speed up IDA* |

## 🚀 Future Improvements

- Complete OpenCV-based cube scanner.
- Improve heuristic accuracy for faster solving.
- Develop a graphical user interface (GUI).
- Support larger cube variants (4×4, 5×5).
- Optimize memory usage for large search spaces.

## ⚙️ Build Instructions

### Clone the repository

```bash
git clone https://github.com/Shokhee22/Rubiks-Cube-Solver.git
```

### Build using CMake

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

### Run

```bash
./RubiksCubeSolver
```


