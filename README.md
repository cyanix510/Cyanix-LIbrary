⚡ CYANIX

«Lightweight C++ Console Utilities»

Simple · Clean · Fast

"C++17" (https://img.shields.io/badge/C%2B%2B-17%2B-00D9FF?style=for-the-badge&logo=cplusplus&logoColor=white) "Header Only" (https://img.shields.io/badge/HEADER--ONLY-121417?style=for-the-badge) "Status" (https://img.shields.io/badge/STATUS-DEVELOPING-00D9FF?style=for-the-badge)

---

✦ What is Cyanix?

Cyanix is a lightweight C++ library built for creating clean and interactive console applications.

It provides simple utilities for:

- Console printing
- User input
- Typewriter-style output
- Configurable typing speed

---

⚡ Quick Start

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

✦ Features

"CX::Print()"

Print multiple values with a single function call.

CX::Print("Score: ", 100, '\n');

"CX::Ask()"

Take user input directly.

std::string name;

CX::Ask("Name: ", name);

Or without a prompt:

int age;

CX::Ask(age);

"CX::Type()"

Print text character-by-character.

CX::Type("Loading...", 50);

The second argument is the delay between characters in milliseconds.

Use the default speed:

CX::Type("Hello!");

Change the default typing speed:

CX::type_speed = 40;

---

✦ API

Function| Description
"CX::Print()"| Print multiple values
"CX::Ask()"| Read user input
"CX::Type()"| Typewriter-style output
"CX::type_speed"| Default typing delay

---

📦 Requirements

- C++17 or newer
- Standard C++ Library
- Header-only

Standard Headers

<iostream>
<string>
<thread>
<chrono>

---

📁 Project Structure

Cyanix/
├── Cyanix.h
├── README.md
└── examples/
    └── basic.cpp

---

🎯 Philosophy

«Less boilerplate. More control.»

Cyanix aims to remain small, readable, and easy to use while keeping the power and control of standard C++.

---

🚧 Status

Currently in development.

More utilities will be added as the library grows.

---

👤 Author

Pranav Lal

---

<div align="center">CYANIX

C++ · Console · Utilities

</div>
