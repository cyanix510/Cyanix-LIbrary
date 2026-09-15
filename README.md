<div align="center"><span style="color:#00D9FF">CYANIX</span>

⚡ Lightweight C++ Console Utilities

Simple · Fast · Clean · C++

""C++" (https://img.shields.io/badge/C%2B%2B-17%2B-00D9FF?style=for-the-badge&logo=cplusplus&logoColor=white)" (#)
""Header Only" (https://img.shields.io/badge/Header--Only-121417?style=for-the-badge)" (#)
""Status" (https://img.shields.io/badge/Status-Developing-00D9FF?style=for-the-badge)" (#)

</div>---

⚡ What is Cyanix?

Cyanix is a lightweight C++ utility library designed to make console applications cleaner and easier to build.

No complicated setup.
No external dependencies.
Just useful utilities.

---

🚀 Quick Start

#include "Cyanix.h"

#include <string>

int main()
{
    std::string name;

    CX::Type("Welcome to Cyanix!\n");

    CX::Ask("What's your name: ", name);

    CX::Print("Hello, ", name, "!\n");
}

Output

Welcome to Cyanix!
What's your name: Pranav
Hello, Pranav!

---

✨ Features

Utility| Description
"CX::Print()"| Print multiple values at once
"CX::Ask()"| Read input with an optional prompt
"CX::Type()"| Typewriter-style text output
"CX::type_speed"| Control default typing speed

---

🧩 API

"CX::Print()"

CX::Print("Health: ", 100, "\n");

Supports multiple values through a variadic template.

---

"CX::Ask()"

std::string name;

CX::Ask("Name: ", name);

Or without a prompt:

int age;

CX::Ask(age);

---

"CX::Type()"

CX::Type("Loading...", 50);

The second parameter is the delay between characters in milliseconds.

Use the default speed:

CX::Type("Hello!");

Change the default:

CX::type_speed = 40;

---

📦 Requirements

- C++17 or newer
- Standard C++ library
- Header-only

Uses:

iostream
string
thread
chrono

---

📁 Structure

Cyanix/
├── Cyanix.h
├── README.md
└── examples/
    └── basic.cpp

---

🎯 Philosophy

«Keep C++ simple. Keep control.»

Cyanix doesn't try to replace the standard library.

It provides a small layer of clean, reusable utilities for console applications.

---

<div align="center">CYANIX

Built with C++ · Made for developers

© Pranav Lal

</div>
