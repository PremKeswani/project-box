# Tic-Tac-Toe Game

A C implementation of the classic Tic-Tac-Toe game with a modern build system using CMake.

## Features

- Command-line interface
- Two-player gameplay
- Input validation
- Win condition checking
- Clean project structure with separate source and header files

## Project Structure

```
tic-tac-toe/
├── include/     # Header files
├── src/         # Source files
├── build/       # Build directory
└── CMakeLists.txt
```

## Building

To build the project:

```bash
mkdir -p build
cd build
cmake ..
make
```

## Usage

After building, run the game:

```bash
./server 8080
```

Now join as player1
```bash
./client localhost 8080
```

Now join as player2
```bash
./client localhost 8080
```

## Game Rules

1. The game is played on a 3x3 grid
2. Players take turns placing their mark (X or O)
3. First player to get 3 marks in a row (horizontally, vertically, or diagonally) wins
4. If all squares are filled and no player has won, the game is a draw

## Implementation Details

The implementation includes:
- Object-oriented design
- Input validation
- Game state management
- Win condition checking
- Clean user interface 
