Cyanix

Cyanix is a lightweight C++ utility library focused on making console programs cleaner and easier to write.

It currently provides simple utilities for:

- 🖨️ Console printing
- ⌨️ User input
- ⌛ Typewriter-style text output
- ⚙️ Configurable typing speed
- 🧩 Variadic printing with multiple values

---

Features

"CX::Print()"

Print multiple values to the console without repeatedly writing "std::cout".

#include "Cyanix.h"

CX::Print("Hello ", "Cyanix!", '\n');

It accepts multiple arguments using a variadic template.

Equivalent to:

std::cout << "Hello " << "Cyanix!" << '\n';

---

"CX::Ask()"

Read user input directly using "std::cin".

std::string name;

CX::Ask(name);

You can also provide a prompt:

std::string name;

CX::Ask("What's your name: ", name);

This combines:

CX::Print("What's your name: ");
std::cin >> name;

into a single function call.

---

"CX::Type()"

Print text character-by-character with a configurable delay.

CX::Type("Hello, world!", 50);

The second argument specifies the delay between characters in milliseconds.

For example:

CX::Type("Loading...", 100);

prints the text with a 100 ms delay between each character.

---

Global Type Speed

Cyanix provides a default typing speed through:

CX::type_speed

The default value is:

90

You can change it:

CX::type_speed = 30;

CX::Type("Fast text!");

Now "CX::Type()" uses the new default speed.

You can also specify the speed for an individual call:

CX::Type("Slow text...", 150);

The explicitly supplied speed only applies to that call.

---

Namespace

All Cyanix functionality is contained inside the:

CX

namespace.

You can either write:

CX::Print("Hello");
CX::Type("Hello");

or:

using namespace CX;

Print("Hello");
Type("Hello");

Using the explicit "CX::" prefix is recommended for larger projects.

---

Example Program

#include "Cyanix.h"
#include <string>

int main()
{
    std::string name;

    CX::Type("Welcome to Cyanix!\n");

    CX::Ask("What's your name: ", name);

    CX::Print("Hello ", name, "!\n");

    return 0;
}

Example output

Welcome to Cyanix!
What's your name: Pranav
Hello Pranav!

---

API Reference

"CX::Print"

template <typename... T>
void Print(const T... list);

Prints multiple values using a fold expression.

Example

CX::Print("Score: ", 100, '\n');

---

"CX::Ask"

Without a prompt

template <typename T>
void Ask(T&& object);

Example:

int age;

CX::Ask(age);

With a prompt

template <typename T>
void Ask(const char statement[], T&& object);

Example:

int age;

CX::Ask("Enter your age: ", age);

---

"CX::Type"

Custom speed

void Type(const std::string& value, const int speed);

Example:

CX::Type("Hello", 50);

Default speed

void Type(const std::string& value);

Example:

CX::Type("Hello");

The default speed is controlled by:

CX::type_speed

---

Requirements

Cyanix uses standard C++ library components:

<iostream>
<string>
<thread>
<chrono>

A C++ compiler with support for C++17 or later is recommended.

---

Project Structure

A simple Cyanix project can look like:

Cyanix/
│
├── Cyanix.h
├── README.md
└── examples/
    └── basic.cpp

---

Design Philosophy

Cyanix is designed around a simple idea:

«Make common console operations shorter without hiding C++.»

Instead of replacing the standard library, Cyanix provides a small layer of convenience around it.

For example:

CX::Ask("Name: ", name);

instead of:

std::cout << "Name: ";
std::cin >> name;

The goal is to keep the library small, readable, and easy to understand.

---

Status

🚧 Cyanix is currently under development.

The library is intentionally small and may grow as new utilities are developed.

Current modules:

- [x] Console printing
- [x] Console input
- [x] Typewriter text
- [x] Configurable typing speed
- [ ] More utilities — planned

---

Author

Pranav Lal

Cyanix is an independent C++ project created for building lightweight console applications and experimenting with reusable C++ utilities.

---

License

Add your preferred license here before publishing the project publicly.

For example:

MIT License

if you decide to release Cyanix under the MIT License.
