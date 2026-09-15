# Cyanix Library 

> **«Lightweight C++ Console Utilities»**

A small, clean C++ utility library in the `CX` namespace for convenient console output, input, and typewriter-style text rendering.

![C++17](https://img.shields.io/badge/C%2B%2B-17%2B-00bcd4?style=flat-square)
![Standard Library](https://img.shields.io/badge/dependencies-standard%20library-00bcd4?style=flat-square)
![Status](https://img.shields.io/badge/status-early%20development-00bcd4?style=flat-square)

---

## What is Cyanix?

**Cyanix** is a lightweight C++ utility library focused on simple console interaction.

It provides a small set of utilities for:

- **Printing** values
- **Reading** input
- **Typing** text character-by-character
- Controlling the default typewriter delay

All utilities are available through the `CX` namespace.

---

## Quick Start

```cpp
#include <iostream>
#include <thread>
#include <string>
#include <chrono>

namespace CX
{
    template <typename T>
    void tPrint(const T& element)
    {
        std::cout << element;
    }

    template <typename... T>
    void Print(const T... list)
    {
        (tPrint(list), ...);
    }

    template <typename T>
    void Ask(T&& object)
    {
        std::cin >> object;
    }

    template <typename T>
    void Ask(const char statement[], T&& object)
    {
        Print(statement);
        std::cin >> object;
    }

    int type_speed{90};

    void Type(const std::string& value, const int speed)
    {
        for (int i = 0; i < value.size(); i += 1)
        {
            std::cout << value[i] << std::flush;
            std::this_thread::sleep_for(
                std::chrono::milliseconds(speed)
            );
        }
    }

    void Type(const std::string& value)
    {
        for (int i = 0; i < value.size(); i += 1)
        {
            std::cout << value[i] << std::flush;
            std::this_thread::sleep_for(
                std::chrono::milliseconds(type_speed)
            );
        }
    }
}

int main()
{
    std::string name;

    CX::Type("Welcome to Cyanix.\n");
    CX::Ask("Enter your name: ", name);
    CX::Print("Hello, ", name, "!\n");

    return 0;
}

Expected Output

Welcome to Cyanix.
Enter your name: Pranav
Hello, Pranav!


---

Features

Utility	Description

CX::Print()	Prints multiple values using std::cout
CX::Ask()	Reads input using std::cin
CX::Type()	Prints a string character-by-character with a delay
CX::type_speed	Controls the default delay used by CX::Type()



---

API

CX::Print()

template <typename... T>
void Print(const T... list);

Prints all supplied values to std::cout in order.

CX::Print("Hello, ", "Cyanix!", '\n');

Hello, Cyanix!

It can also be used with different value types:

CX::Print("Age: ", 18, '\n');


---

CX::Ask()

Reads a value from standard input.

template <typename T>
void Ask(T&& object);

Example:

int age;

CX::Ask(age);

With a Prompt

template <typename T>
void Ask(const char statement[], T&& object);

Example:

std::string name;

CX::Ask("Enter your name: ", name);

The prompted overload prints the supplied statement before reading from std::cin.


---

CX::Type()

Prints a std::string one character at a time.

void Type(const std::string& value, const int speed);

Example:

CX::Type("Hello, Cyanix!\n", 50);

The speed parameter controls the delay between characters in milliseconds.

Default Speed

void Type(const std::string& value);

Example:

CX::Type("Hello from Cyanix!\n");

This overload uses CX::type_speed.


---

CX::type_speed

int type_speed{90};

The default delay used by:

CX::Type(const std::string& value);

You can change it:

CX::type_speed = 40;

CX::Type("Custom default speed.\n");

The initial value is:

90 milliseconds


---

Requirements

C++17 or newer

Standard C++ library


Cyanix uses standard headers including:

#include <iostream>
#include <thread>
#include <string>
#include <chrono>

No third-party dependency is required by the provided implementation.


---

Project Structure

Cyanix/
├── include/
│   └── Cyanix.hpp
├── examples/
│   └── main.cpp
└── README.md


---

Philosophy

> Small utilities. Normal C++ control.



Cyanix aims to provide lightweight convenience utilities without taking away the familiar control and behavior of standard C++.


---

Status

Development / Early Stage

Cyanix is currently a small and evolving utility library focused on console functionality.


---

Author

Pranav Lal
