<div align="center">

# 🖥️ ECPC: Efficient Custom Personal Computer Builder
**Object-Oriented Programming (OOP 101) Project Proposal**  
*Batangas State University - The National Engineering University*  
*College of Informatics and Computing Sciences | Alangilan Campus*

</div>

---

## 📖 Table of Contents
1. [Project Title](#-project-title)
2. [Project Description](#-project-description)
3. [Problem Being Addressed](#-problem-being-addressed)
4. [Project Objectives](#-project-objectives)
5. [Target Users](#-target-users)
6. [Main Features](#-main-features)
7. [Technologies Used](#-technologies-used)
8. [Team Members & Roles](#-team-members--roles)
9. [OOP Concepts Demonstrated](#-oop-concepts-demonstrated)
10. [Instructions for Running the Program](#-instructions-for-running-the-program)
11. [Sample Screenshots](#-sample-screenshots)
12. [Known Limitations](#-known-limitations)
13. [Future Improvements](#-future-improvements)
14. [Project Contributors](#-project-contributors)

---

## 📌 1. Project Title
**ECPC: Efficient Custom Personal Computer Builder**[cite: 2]

---

## 📝 2. Project Description
The **Efficient Custom Personal Computer Builder (ECPC)** is a Java-based console application designed to guide users in planning and configuring custom PC builds based on their budget, intended use (workload), and brand preferences[cite: 2, 3]. By loading a predefined catalog of hardware components from a data file[cite: 2, 6], ECPC automates compatibility checks, estimates power requirements, evaluates performance-to-price value, and flags potential CPU-GPU bottlenecks[cite: 2].

---

## ⚠️ 3. Problem Being Addressed
* **Hardware Complexity:** Choosing compatible parts (CPUs, motherboards, GPUs, RAM, and power supplies) can be intimidating and confusing for beginners[cite: 2].
* **Financial Waste:** Purchasing incompatible or poorly balanced components leads to wasted money, return hassles, and underperforming systems (e.g., pairing a powerful GPU with a weak CPU)[cite: 2].
* **Budget Constraints:** Finding the right balance between cost and performance for specific tasks requires careful calculation[cite: 2].

---

## 🎯 4. Project Objectives

### General Objective
To develop a Java-based application that guides users in designing a compatible PC build within their budget by validating component compatibility and power requirements, rating the balance between the processor and graphics card, and recommending parts based on the user's intended use[cite: 3].

### Specific Objectives
1. **Catalog Management:** Build a parts catalog (CPUs, motherboards, GPUs, RAM, storage, power supplies, and cases) loaded from a data file with specs, performance scores, and prices[cite: 3].
2. **Compatibility Validation:** Implement rigorous checks for CPU-motherboard sockets, RAM type/capacity, case form factors, GPU length limits, and PSU wattage safety margins[cite: 3].
3. **Auto-Build Optimization:** Recommend complete, budget-constrained, compatible builds tailored to specific workloads and optional brand preferences[cite: 3].
4. **Bottleneck Detection:** Rate the CPU-GPU balance as balanced, moderate, or severe for the chosen workload[cite: 3].
5. **Custom Configuration:** Allow users to create, edit, save, and load custom builds[cite: 3].
6. **Scalable OOP Architecture:** Apply Object-Oriented Programming principles to allow new component types to be added with minimal code modifications[cite: 4].

---

## 👥 5. Target Users

| Target User | How They Will Use the System |
| :--- | :--- |
| **Students** | Input a limited budget and workload (schoolwork, programming, editing, or light gaming) to receive recommendations for reliable, affordable parts[cite: 4]. |
| **First-Time PC Buyers** | Provide budget constraints, brand preferences, and workloads to get fully guided recommendations while avoiding compatibility or performance mismatches[cite: 4]. |
| **PC Hobbyists** | Input custom part lists via the Custom Build module to verify compatibility, power draw, and balance before saving configurations[cite: 4]. |

---

## ✨ 6. Main Features
* **Compatibility Checker:** Verifies socket types, memory capacities, physical clearances (GPU length vs. case), and power supply limits[cite: 4, 5].
* **Bottleneck Detector:** Compares CPU and GPU performance metrics against the selected workload to flag performance discrepancies[cite: 4, 5].
* **Auto-Build Optimizer:** Automatically generates optimal part configurations within a specified minimum and maximum budget[cite: 4, 5].
* **Custom Build Mode:** Lets users manually add, replace, or remove specific components with real-time running totals and status updates[cite: 5].
* **File Management:** Save and load custom or generated configurations locally[cite: 5].

---

## 🛠️ 7. Technologies Used
* **Programming Language:** Java[cite: 2]
* **Paradigm:** Object-Oriented Programming (OOP)[cite: 4]
* **Data Structures:** Java Collections Framework (`ArrayList`, Enums)[cite: 6, 7]
* **File I/O:** Local text/data files for catalog loading and build persistence[cite: 2, 7]

---

## 👨‍💻 8. Team Members & Roles

| Member Name | Role & Responsibilities |
| :--- | :--- |
| **Carandang, Sean Christ Trez' Davidoff A.** | **Lead Programmer:** Coordinates implementation of Java classes, methods, and core OOP features[cite: 9]. |
| **Palma, Tristan P.** | **Project Leader:** Oversees task coordination, milestone deadlines, instructor communications, and team syncs[cite: 9]. |
| **Palor, Christian Gene C.** | **System/Design Lead:** Formulates system requirements, class specifications, UML designs, and application structure[cite: 9]. |

---

## 🧩 9. OOP Concepts Demonstrated
* **Classes & Objects:** Blueprints for hardware parts (`Component`, `CPU`, `Motherboard`, `GPU`, etc.), system logic (`PCBuild`, `PartCatalog`), and utility controllers[cite: 5].
* **Encapsulation:** Private attributes (prices, socket types, wattage, dimensions) accessed securely via public getters, protecting catalog integrity[cite: 5].
* **Inheritance:** An abstract base class (`Component`) shares common attributes (`id`, `name`, `brand`, `price`), while hardware sub-classes extend part-specific properties[cite: 5, 6].
* **Polymorphism:** Uniform handling of different hardware components under a common `Component` type while overriding methods like `getSpecs()` and `checkCompatibility()`[cite: 6].
* **Abstraction:** Hides complex calculations (wattage totals, bottleneck metrics) behind clean method interfaces[cite: 6].
* **Exception Handling:** Custom exceptions (`IncompatibleComponentException`, `BudgetExceededException`, `InvalidInputException`) prevent program crashes during invalid inputs or file errors[cite: 7].

---

## 🚀 10. Instructions for Running the Program
1. **Clone the Repository:**
   ```bash
   git clone [https://github.com/AN-FAMILY-OOP101/ECPC-Efficient-Custom-Personal-Computer-Builder.git](https://github.com/AN-FAMILY-OOP101/ECPC-Efficient-Custom-Personal-Computer-Builder.git)
