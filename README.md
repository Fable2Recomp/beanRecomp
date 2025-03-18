# BeanRecomp

A static recompilation project for the Xbox 360 version of GoldenEye 007 Remastered (codename: Bean), aiming to convert the game's PPC (PowerPC) code to native x86 code.

## Project Overview

BeanRecomp is built using the [XenonRecomp](https://github.com/hedge-dev/XenonRecomp) framework, which provides tools and infrastructure for recompiling Xbox 360 executables to native code. This project specifically focuses on recompiling the GoldenEye 007 Remastered Xbox Live version, making it potentially playable on modern PC hardware.

## Current Status

The project is currently in development, focusing on:
- Setting up the basic recompilation infrastructure
- Implementing PPC register handling and memory access
- Converting PowerPC instructions to x86 equivalents
- Resolving compilation issues and macro definitions

## Tools Used

- **XenonRecomp**: Core framework for Xbox 360 to x86 recompilation
- **IDA Pro 9.1**: Used for binary analysis and function identification
- **VSCodium**: Primary development environment
- **CMake**: Build system management
- **Clang**: Primary compiler (required for specific intrinsics support)

## Project Structure

```
beanRecomp/
├── src/
│   ├── include/
│   │   └── ppc/         # PPC-specific header files
│   └── ppc/            # Core recompilation code
├── build/              # Build output directory
└── README.md
```

## Building

### Prerequisites

- CMake 3.20 or later
- Clang 18 or later
- Visual Studio 2022 (for Windows builds)

### Build Instructions

1. Clone the repository:
```bash
git clone https://github.com/yourusername/beanRecomp.git
cd beanRecomp
```

2. Create and navigate to the build directory:
```bash
mkdir build
cd build
```

3. Configure with CMake:
```bash
cmake ..
```

4. Build the project:
```bash
cmake --build .
```

## Technical Details

The recompilation process involves:
- Converting PPC instructions to x86 equivalents
- Handling endianness differences (PPC is big-endian, x86 is little-endian)
- Managing register state and memory access
- Implementing necessary CPU state structures

## Contributing

This is a work in progress, and contributions are welcome. Please feel free to submit issues and pull requests.

## Legal Disclaimer

This project is for educational and research purposes only. It does not include any game assets or copyrighted material from GoldenEye 007. Users are responsible for ensuring they have legal access to any required game files.

## Acknowledgments

- [XenonRecomp](https://github.com/hedge-dev/XenonRecomp) team for their incredible work on Xbox 360 recompilation
- The reverse engineering community for their continuous support and knowledge sharing

## License

This project is licensed under the MIT License - see the LICENSE file for details. 