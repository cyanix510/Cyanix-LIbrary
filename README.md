Cyanix

Cyanix is a lightweight C++ console utility library providing concise interfaces for printing, input, and typewriter-style text output.

Features

- "CX::Print()" — Variadic console printing.
- "CX::Ask()" — Simple input with optional prompt.
- "CX::Type()" — Character-by-character text output.
- "CX::type_speed" — Configurable default typing speed.
- Header-only utilities — No separate linking required.

Quick Start

#include "Cyanix.h"
#include <string>

int main()
{
    std::string name;

    CX::Type("Welcome to Cyanix!\n");
    CX::Ask("What's your name: ", name);
    CX::Print("Hello ", name, "!\n");
}

API

"CX::Print()"

template <typename... T>
void Print(const T... list);

Prints any number of stream-compatible values.

CX::Print("Score: ", 100, '\n');

Equivalent to:

std::cout << "Score: " << 100 << '\n';

"CX::Ask()"

Input only:

template <typename T>
void Ask(T&& object);

int age;
CX::Ask(age);

Input with prompt:

template <typename T>
void Ask(const char statement[], T&& object);

std::string name;
CX::Ask("Name: ", name);

"CX::Type()"

Prints a string one character at a time with a delay between characters.

Custom speed:

void Type(const std::string& value, int speed);

CX::Type("Loading...", 100);

"speed" is the delay in milliseconds.

Default speed:

void Type(const std::string& value);

Uses "CX::type_speed".

CX::Type("Hello!");

"CX::type_speed"

Global default delay used by "CX::Type()".

namespace CX {
    int type_speed{90};
}

Change it at runtime:

CX::type_speed = 40;
CX::Type("Fast!");

Example

#include "Cyanix.h"
#include <string>

int main()
{
    std::string name;

    CX::Type("=== Cyanix ===\n");
    CX::Ask("Enter your name: ", name);
    CX::Print("Welcome, ", name, "!\n");
    CX::Type("Program finished.\n", 30);

    return 0;
}

Requirements

- C++17 or newer
- Standard C++ library
- "<iostream>"
- "<string>"
- "<thread>"
- "<chrono>"

Design

Cyanix is intentionally small. It does not attempt to replace the C++ standard library; instead, it provides short utility functions for repetitive console operations.

CX::Ask("Age: ", age);

instead of:

std::cout << "Age: ";
std::cin >> age;

Project Structure

Cyanix/
├── Cyanix.h
├── README.md
└── examples/
    └── basic.cpp

Status

Development — Early Version

Current utilities:

- [x] "CX::Print"
- [x] "CX::Ask"
- [x] "CX::Type"
- [x] Configurable type speed
- [ ] Additional console utilities

Author

Pranav Lal

Cyanix — Lightweight C++ utilities for console applications.
