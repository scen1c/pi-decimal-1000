# Pi Calculator (up to 1000 digits)

A simple C++ program that calculates and prints **π (pi)** with user-defined precision, up to **1000 decimal digits**.  
It uses [Boost.Multiprecision](https://www.boost.org/doc/libs/release/libs/multiprecision/) for high-precision floating-point math.

---

## ✨ Features
- Choose how many digits of π you want (1–1000).
- Works on **Linux (Ubuntu, WSL)**, **macOS**, and **Windows**.
- Uses only header-only Boost.Multiprecision (no extra linking required).

---

## ⚙️ Requirements
- **C++17 compiler** (g++, clang++, or MSVC)
- **Boost library** (Multiprecision)

---

## 🖥️ Installation & Build (All Platforms)

1. **Install Boost**  
   - **Linux (Ubuntu/WSL):**
     ```bash
     sudo apt update
     sudo apt install -y libboost-all-dev
     ```
   - **macOS (Homebrew):**
     ```bash
     brew install boost
     ```
   - **Windows (MSYS2):**
     ```bash
     pacman -Syu
     pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-boost
     ```

2. **Build the program**  
   - On Linux/macOS:
     ```bash
     g++ -O2 -std=c++17 main.cpp -o pi
     ```
   - On Windows (MSYS2):
     ```bash
     g++ -O2 -std=c++17 main.cpp -o pi.exe
     ```

3. **Run the program**  
   ```bash
   ./pi        # Linux/macOS
   ./pi.exe    # Windows