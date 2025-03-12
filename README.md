# Cub3D Project

## Introduction
Cub3D is a project from 42 school that involves creating a **basic 3D game engine** using **raycasting**, inspired by the classic game Wolfenstein 3D. The goal is to understand graphics rendering, handling user input, and implementing a simple game loop.

## Features
- **Raycasting Engine** for 3D rendering
- **Textures and Colors** for walls and floors
- **Player Movement** (WASD keys for navigation)
- **Mouse or Keyboard Rotation**
- **Mini Map Support** (Optional feature)
- **Parsing a `.cub` Map File**
- **Basic Collision Detection**

## Installation
### Prerequisites
- Unix-based system (Linux/macOS recommended)
- GCC or Clang compiler
- Make
- **minilibX** graphics library

### Steps to Install
1. Clone the repository:
   ```sh
   git clone https://github.com/elmehdibelfkih/cub3d.git
   cd cub3d
   ```
2. Compile the project:
   ```sh
   make
   ```
3. Run the program:
   ```sh
   ./cub3d maps/sample.cub
   ```

## Controls
- **W / A / S / D** → Move forward, left, backward, right
- **Left / Right Arrow** → Rotate view
- **ESC** → Exit the game

## Map Format (`.cub`)
A valid `.cub` file consists of:
- **Resolution** (Width, Height)
- **Texture Paths** (North, South, East, West walls, Floor, Ceiling)
- **Map Grid** (1 = Wall, 0 = Empty, P = Player Start Position)

Example:
```
NO ./textures/north.xpm
SO ./textures/south.xpm
WE ./textures/west.xpm
EA ./textures/east.xpm
F 220,100,0
C 225,30,30

111111
100001
10P001
100001
111111
```

## Common Issues & Debugging
- **Black Screen?** → Check texture paths in `.cub` file.
- **Game Crashes?** → Ensure map is enclosed by walls (no open spaces).
- **Textures Not Loading?** → Verify `.xpm` format and paths.

## Contributing
Pull requests are welcome! Follow the coding style and document any major changes.

## License
This project is licensed under the MIT License - see the LICENSE file for details.

## Authors
- **El Mehdi Belfkih** (@elmehdibelfkih)
- Contributors from 42 School

