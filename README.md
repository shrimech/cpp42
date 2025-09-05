# cpp42

# 🚀 C++ Modules — 1337 / 42

This repository contains my work and notes for the **C++ Modules** at 1337 (42 Network).  
Each module introduces new concepts of **Object-Oriented Programming in C++**.  

---

## 📑 Progress
- [x] **CPP Module 00** — Basics of C++  
- [ ] **CPP Module 01** — Memory, References, Pointers  
- [ ] **CPP Module 02** — Ad-hoc Polymorphism, Operator Overloading  
- [ ] **CPP Module 03** — Inheritance  
- [ ] **CPP Module 04** — Subtype Polymorphism, Abstract Classes  
- [ ] **CPP Module 05** — Exceptions  
- [ ] **CPP Module 06** — Casts  
- [ ] **CPP Module 07** — Templates  
- [ ] **CPP Module 08** — STL  

---

# 📘 CPP Module 00 — Basics

The goal of this module is to introduce the **fundamentals of C++**:  
namespaces, I/O streams, classes, instances, attributes, methods, and more.  

---

## 🔹 Namespaces
Namespaces group identifiers to avoid naming conflicts.  
```cpp
namespace School {
    int students = 1337;
}
std::cout << School::students << std::endl;
