<div align="center">

# 🖥️ ECPC: Efficient Custom Personal Computer Builder

**Batangas State University — The National Engineering University**  
*College of Informatics and Computing Sciences | Computer Science Department*  
*OOP 101: Object-Oriented Programming (1st Semester, AY 2026-2027)*

[![Java](https://img.shields.io/badge/Language-Java-orange.svg)](https://www.oracle.com/java/)
[![Status](https://img.shields.io/badge/Status-In%20Development-blue.svg)]()
[![Section](https://img.shields.io/badge/Section-CS%202101-green.svg)]()

</div>

---

## 📖 About the Project
Building a custom personal computer is a technical task that can be overwhelming for beginners. Choosing incompatible parts or mismanaging your budget leads to wasted time, money, and hardware performance bottlenecks. 

**ECPC (Efficient Custom Personal Computer Builder)** is a Java-based console application designed to help students, first-time PC builders, and hobbyists plan, validate, and optimize custom PC builds based on budget, intended workload (schoolwork, gaming, or video editing), and brand preferences.

---

## 🎯 Problem Being Addressed
* **Hardware Incompatibility:** Manually verifying sockets, RAM types, power draws, and case clearances is error-prone.
* **Budget Misallocation:** Users often overspend on unbalanced components (e.g., pairing an expensive GPU with a weak CPU).
* **Technical Complexity:** Beginners lack intuitive guidance when navigating complex hardware specifications.

---

## 🚀 Project Objectives

### General Objective
To develop a Java-based application that guides users in designing a compatible PC build within their budget by validating component compatibility and power requirements, rating the CPU-GPU balance, and recommending parts tailored to the user's workload.

### Specific Objectives
1. **Parts Catalog:** Load CPUs, motherboards, GPUs, RAM, storage, power supplies, and cases from a local data file with specifications, performance scores, and prices.
2. **Compatibility Validation:** Check CPU-motherboard sockets, RAM types/capacities, case form factors vs. GPU lengths, and PSU wattage safety margins.
3. **Auto-Build Optimizer:** Automatically recommend a complete, compatible build within a specified minimum and maximum budget range.
4. **Bottleneck Detector:** Rate CPU-GPU balance as *Balanced*, *Moderate*, or *Severe* for the chosen workload.
5. **Custom Builds & Persistence:** Allow users to create, edit, save, and load custom PC builds via file management.
6. **Robust OOP Design:** Demonstrate core Object-Oriented Programming principles to ensure extensibility for new component types.

---

## 👥 Target Users

| Target User | How They Will Use the System |
| :--- | :--- |
| **Students** | Enter a budget range and school/light-gaming workload to receive affordable, compatible part recommendations. |
| **First-Time PC Buyers** | Input preferences to generate optimized builds while receiving warnings against incompatibilities or performance mismatches. |
| **PC Hobbyists** | Input custom part lists through the Custom Build feature to check compatibility, power draw, and bottlenecks before saving. |

---

## ✨ Main Features

* 🔍 **Compatibility Checker:** Verifies socket types, dimensions, form factors, and power sufficiency.
* ⚖️ **Bottleneck Detector:** Compares CPU and GPU performance relative to the chosen workload to flag potential performance bottlenecks.
* ⚙️ **Auto-Build Optimizer:** Generates optimal builds matching user budgets and brand preferences (Intel/AMD/Any).
* 🛠️ **Custom Build Manager:** Add, replace, or remove components interactively with real-time total cost calculations.
* 💾 **Save & Load System:** Persist and retrieve your custom configurations from local files.

---

## 🛠️ Technologies Used
* **Programming Language:** Java (Standard Edition)

---

## 🧱 OOP Concepts Demonstrated

* **Classes & Objects:** Modular blueprints representing hardware components (`Component`, `CPU`, `GPU`, etc.), the user build (`PCBuild`), and system logic (`CompatibilityChecker`, `BottleneckAnalyzer`).
* **Encapsulation:** Private attributes accessed via public getters; immutable catalog parts protected from unauthorized modification.
* **Inheritance:** An abstract `Component` base class shared across hardware subclasses to eliminate redundant code.
* **Polymorphism:** Unified handling of parts as `Component` objects while overriding methods like `getSpecs()` and `checkCompatibility()` for specialized behavior.
* **Abstraction:** Hiding complex algorithmic calculations behind clean method calls.
* **Exception Handling:** Custom exceptions (`IncompatibleComponentException`, `BudgetExceededException`, `InvalidInputException`) ensuring graceful error recovery.

---

## 👷 Team Members & Roles

| Team Member | Role | Assigned Tasks |
| :--- | :--- | :--- |
| **Palma, Tristan P.** | Project Leader | Coordinates tasks, monitors deadlines, communicates with the instructor, and facilitates team meetings. |
| **Carandang, Sean Christ Trez' Davidoff A.** | Lead Programmer | Coordinates the implementation of Java classes, methods, and OOP features. |
| **Palor, Christian Gene C.** | System / Design Lead | Develops system requirements, class designs, UML diagrams, and overall application structure. |

---

## 💻 Instructions for Running the Program

1. 

---

## 📸 Sample Screenshots

https://scontent-mnl1-1.xx.fbcdn.net/v/t1.15752-9/839445465_26429512356745694_5874399682467514607_n.png?stp=dst-png&cstp=mx1920x1080&ctp=s1920x1080&_nc_cat=106&ccb=1-7&_nc_sid=9f807c&_nc_eui2=AeH4lIZX2wWLkbO9D1sHwx9gKTONWC4uyL4pM41YLi7IvmrHWeFhn054HjGNQm1vrAQeZG5Dahu-WqI9ojwFMz0K&_nc_ohc=BcNZ7e1Sdw4Q7kNvwHww4b8&_nc_oc=Adol_0mLk9QV9B-45XTSBQSbyDg4qacZ57DBhrT4pAfZikRfvd6jQ2FBMkSW3sy4YuQ&_nc_zt=23&_nc_ht=scontent-mnl1-1.xx&_nc_ss=7b2a8&oh=03_Q7cD6gEf8C1ZUj-asiEmC9j3RRdKuODrbM7rukh__2v81PATOA&oe=6AEFE2E4

---

## ⚠️ Known Limitations
* **No Live Pricing/Checkout:** Prices and specifications are derived from a static local dataset; live online store integration and payment processing are not supported.
* **Estimated Benchmarks:** Performance scores and bottleneck ratings rely on fixed reference scores rather than real-time hardware diagnostics.
* **Standard Desktop Parts Only:** Specialized server hardware, laptops, pre-builts, custom liquid cooling loops, and individual CPU coolers/case fans are excluded.
* **Local Storage Only:** No user accounts or cloud storage features; all saved builds reside in local files.

---

## 🔮 Future Improvements
* Integration of a graphical user interface (GUI) using JavaFX or Swing.
* Web scraper module to fetch up-to-date local market pricing.
* Support for a wider array of components, including CPU coolers, case lighting, and multiple storage drives.

---

## 🗂️ Project Contributors & Repository
* **Team Name:** An Family (Section: CS 2101)
* **GitHub Repository:** [ECPC-Efficient-Custom-Personal-Computer-Builder](https://github.com/AN-FAMILY-OOP101/ECPC-Efficient-Custom-Personal-Computer-Builder.git)
