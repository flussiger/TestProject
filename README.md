# Weather and Storm Tracker (C++ Learning Project)

Welcome to the **Weather and Storm Tracker**, a C++ console application designed for learning and experimenting with modern C++ features, OOP, and external integrations.

## Project Purpose

This project is part of my journey to learn C++. It demonstrates:
- Object-oriented programming (OOP) with inheritance and polymorphism
- Managing collections of objects (`std::vector`)
- Input validation and menu-driven user interfaces
- Integration with external APIs using `libcurl`
- Basic use of virtual functions and abstract base classes

## Features

- **Create and manage Weather and Storm instances**
- **Display all entered Weather and Storm data**
- **Polymorphic display of events using a common base class (`Event`)**
- **Fetch live weather data from [wttr.in](https://wttr.in) using curl**
- **Simple, interactive text menu**

## How to Build

Make sure you have `g++` and `libcurl` installed (on Ubuntu: `apt install g++ libcurl4-openssl-dev`).

```bash
g++ main.cpp Weather.cpp storm.cpp -lcurl -o weather
```

## How to Run

```bash
./weather
```

Follow the menu prompts to create, view, and fetch weather/storm data.

## Example Menu

```
Menu:
1. Create Weather instance
2. Create Storm instance
3. Display Weather information
4. Display Storm information
5. Exit
6. Display Polymorphically
7. Fetch live weather data
```

## Learning Highlights

- **Inheritance:** `Weather` and `Storm` inherit from `Event` and override the `display()` method.
- **Polymorphism:** All events can be displayed via a base pointer.
- **Networking:** Fetches live weather using a public API.
- **Input Handling:** Robust input validation for menu choices.

---

**Note:**  
This project is a work-in-progress and intended for educational purposes.  
Feel free to fork, experiment, and contribute!
