# cpp42

# 🚀 C++ Modules — 1337 / 42

This repository contains my work and notes for the **C++ Modules** at 1337 (42 Network).  
Each module introduces new concepts of **Object-Oriented Programming in C++**.  

---

std::cout << School::students << std::endl;
# cpp42 — C++ Modules (42 / 1337)

Professional repository of C++ module exercises and examples completed for the 42/1337 curriculum. This collection organizes small, self-contained exercises that illustrate core C++ concepts, OOP principles, and common idioms used throughout the curriculum.

---

## Repository layout

- `cpp-module00/` … `cpp-module04/` — module folders, each containing numbered exercises (e.g. `ex00`, `ex01`, ...).
- Each exercise directory typically contains a `Makefile`, source files (`*.cpp` / `*.hpp`) and a `main.cpp` where applicable.

Example tree:

- cpp-module00/
    - ex00/
        - Makefile
        - megaphone.cpp
    - ex01/
        - Makefile
        - PhoneBook.cpp

---

## What this repo contains

- Small C++ projects and exercises focused on: basic syntax, classes, constructors/destructors, copy semantics, operator overloading, inheritance, polymorphism, and related topics up through the early modules of the 42 curriculum.

---

## Prerequisites

- Linux, macOS or Windows with a POSIX-like shell
- `g++` (GNU C++ compiler) and `make`

Install on Debian/Ubuntu:

```bash
sudo apt update
sudo apt install build-essential
```

---

## Build and run

Each exercise has its own `Makefile`. To build and run an exercise:

```bash
cd cpp-moduleXX/exYY    # e.g. cd cpp-module00/ex00
make                   # builds the exercise (see the local Makefile)
./<executable>         # run the produced binary (name depends on the Makefile)
make clean             # remove object files
make fclean            # remove binaries (if provided by the Makefile)
```

If you are unsure of the produced executable name, run `ls -1` after `make`.

---

## Coding style and guidelines

- Follow the style expected by the 42 curriculum (readability, clear ownership of resources, correct memory management).
- Use RAII and prefer standard library types where appropriate.

---

## Contributing

This repository represents personal exercise solutions. If you'd like to propose changes, open an issue or a pull request with a clear motivation and description.

---

## Contact / Author

Maintainer: (your name) — replace this line with your preferred contact or leave as-is for a private repository.

