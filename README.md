<div align="center">⚡ CYANIX

Lightweight C++ Console Utilities

Simple · Clean · Fast

"C++17" (https://img.shields.io/badge/C%2B%2B-17%2B-00D9FF?style=for-the-badge&logo=cplusplus&logoColor=white)
"Header Only" (https://img.shields.io/badge/HEADER--ONLY-121417?style=for-the-badge)
"Status" (https://img.shields.io/badge/STATUS-DEVELOPING-00D9FF?style=for-the-badge)

</div>---

⚡ What is Cyanix?

Cyanix is a lightweight C++ library for building clean and interactive console applications.

It provides simple utilities for:

- 🖨️ Console printing
- ⌨️ User input
- ⌛ Typewriter text
- ⚙️ Configurable typing speed

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

🖨️ "CX::Print"

Print multiple values in a single call.

CX::Print("Score: ", 100, '\n');

⌨️ "CX::Ask"

Take input with an optional prompt.

std::string name;

CX::Ask("Name: ", name);

Without a prompt:

int age;

CX::Ask(age);

⌛ "CX::Type"

Print text character-by-character.

CX::Type("Loading...", 50);

The second argument specifies the delay in milliseconds.

Use the default speed:

CX::Type("Hello!");

Change the default:

CX::type_speed = 40;

---

📦 Requirements

- C++17 or newer
- Standard C++ library
- Header-only

Dependencies

<iostream>
<string>
<thread>
<chrono>

---

📁 Structure

Cyanix/
├── Cyanix.h
├── README.md
└── examples/
    └── basic.cpp

---

🎯 Philosophy

«Less boilerplate. More control.»

Cyanix is designed to stay small, readable, and easy to use while keeping the power and control of standard C++.

---

<div align="center">CYANIX

C++ · Console · Utilities

Made by Pranav Lal

</div>
