<h1 align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" width="100" />
  <br>
  C++ Module 01
</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B98-blue?style=for-the-badge&logo=c%2B%2B" />
  <img src="https://img.shields.io/badge/Concept-Memory%20Allocation-red?style=for-the-badge" />
  <img src="https://img.shields.io/badge/School-42-black?style=for-the-badge" />
</p>

---

## 📖 Introduction

This module focuses on **Memory Allocation**, **Pointers to members**, **References**, and the differences between **Stack** and **Heap** allocation in C++. The exercises are designed to help you understand how to manage resource lifetimes and select the appropriate memory management strategies.

## 🛠️ Exercises

### [ex00: BraiiiiiiinnnzzzZ](ex00/)
An introduction to stack vs heap allocation.
- **Goal**: Create and destroy Zombies in different memory segments (Stack using `randomChump` and Heap using `newZombie`).

### [ex01: Moar brainz!](ex01/)
Managing arrays of objects.
- **Goal**: Allocate a horde of Zombies in a single allocation (`new[]`) and ensure they are properly cleaned up.

### [ex02: HI THIS IS BRAIN](ex02/)
A clear comparison between **Pointers** and **References**.
- **Goal**: Understand the syntax and behavior differences when referring to the same string variable via pointer and reference.

### [ex03: Unnecessary violence](ex03/)
Practical application of references and pointers in class composition.
- **Goal**: Implement `HumanA` (always has a weapon, uses a reference) and `HumanB` (may not have a weapon, uses a pointer).

### [ex04: Sed is for losers](ex04/)
File manipulation using C++ file streams.
- **Goal**: Create a program that replaces occurrences of a string in a file with another string without using `sed`.

### [ex05: Harl 2.0](ex05/)
Introduction to **Pointers to Member Functions**.
- **Goal**: Use an array of pointers to member functions to call different "complaint" levels (DEBUG, INFO, WARNING, ERROR) without a massive `if/else if` chain.

## 📝 Learning Objectives

- Distinguishing between **Stack** and **Heap** memory.
- Understanding **References** (how they differ from pointers).
- Mastering **File Streams** (`std::ifstream`, `std::ofstream`).
- Implementing **Pointers to Member Functions** for cleaner logic.

## 🚀 Usage

1. Navigate to an exercise folder:
   ```bash
   cd ex05
   ```
2. Build the project:
   ```bash
   make
   ```
3. Run the executable:
   ```bash
   ./harl
   ```

---

<p align="center">
  <i>Part of the 42 C++ Pool. Developed by shkaruna.</i>
</p>
