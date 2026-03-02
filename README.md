# Chada Tech Corner Grocer Item-Tracking Program

## Overview

This project implements an **item-tracking system** for the Corner Grocer, designed to analyze daily purchase records and provide actionable insights into item frequency. It was developed to help optimize the grocery layout and inventory management based on customer purchase patterns reads a text file of purchased items, tracks the number of times each item appears, and presents this information via a **menu-driven interface**. The program also automatically creates a backup file (`frequency.dat`) of item frequencies.

## Problem Statement

The Corner Grocer needs a solution to understand **how frequently items are purchased** to improve the store layout and stocking efficiency. Manual tracking is inefficient, so an automated program is required to calculate item frequencies, generate histograms, and maintain a backup of the data quirements

* Prompt the user to **search for a specific item** and display its frequency.
* Display **all items and their frequencies** in a readable list format.
* Display a **histogram** representing item frequencies with asterisks.
* Save a **backup file (`frequency.dat`)** containing all items and counts.
* Provide a **menu-driven interface** that allows:

  * Option 1 – Search for an item
  * Option 2 – Display all items and frequencies
  * Option 3 – Display histogram
  * Option 4 – Exit program
* Automatically load data from `CS210_Project_Three_Input_File.txt` at startup ptions

```
**************************
* 1 - Search for an Item *
* 2 - Display All Items  *
* 3 - Display Histogram  *
* 4 - Exit Program       *
**************************
```

## Example Output

**List Output (Option 2)**

```
Potatoes 4
Pumpkins 5
Onions 3
```

**Histogram Output (Option 3)**

```
Potatoes ****
Pumpkins *****
Onions ***
```

## Design Considerations

* **Class-based design** (`GroceryTracker`) with private data storage (`map<string, int>`) for item frequencies.
* Clear separation of:

  * File input and backup output
  * Frequency calculation
  * Menu interaction and user input
  * Histogram display
* Input validation ensures menu selections and searches are handled correctly.
* Efficient use of **C++ Standard Library** structures (maps) for fast frequency lookup.

## Technologies

* Language: **C++**
* Standard Libraries only: `<iostream>`, `<fstream>`, `<map>`, `<string>`
* Visual Studio (or any C++ compiler)

## How to Run

1. Place `CS210_Project_Three_Input_File.txt` in the same directory as the executable.
2. Compile the program using a C++ compiler (e.g., `g++` or Visual Studio build).
3. Run the executable.
4. Use the menu to search for items, view frequencies, display histograms, or exit.

## Standards Reference

* C++ Standard Library documentation: [https://en.cppreference.com/w/](https://en.cppreference.com/w/)
* Industry best practices for **file I/O, class encapsulation, and menu-driven applications**

---

# Project Reflection

## What problem was the project solving?

The Corner Grocer needed a way to analyze their daily purchase records to understand how frequently items are bought. Without automation, store managers would have to manually count items from transaction records, which would be time-consuming and prone to error.

This program solves that problem by reading an input file containing purchased items and calculating the frequency of each item automatically. The data can then be displayed in both list format and histogram format, making it easier for the store to identify popular products and organize the store layout more effectively.

---

## What did you do particularly well?

One aspect I did particularly well in this project was implementing a **modular class-based design**. I created a `GroceryTracker` class that handles all logic related to item tracking, such as reading files, calculating frequencies, displaying lists, generating histograms, and creating backup files.

Separating the class from the main program helped keep the `main()` function focused only on program flow and user interaction. This structure made the program easier to read and maintain while demonstrating good object-oriented programming practices.

I also implemented **clear commenting and whitespace** throughout the code so that each function and logical block of code is easy to understand.

---

## Where could you enhance your code?

One potential improvement would be implementing **case-insensitive searching** so that items such as "apples", "Apples", and "APPLES" would be treated as the same item. This would make the program more robust and prevent inaccurate counts caused by inconsistent input formatting.

Another improvement would be adding **more advanced input validation** and error handling to ensure that the program handles unexpected input more gracefully.

Additionally, the program could be enhanced with a **graphical user interface (GUI)** or web interface so that store employees could interact with the data visually instead of using a console menu.

These improvements would increase the program’s **usability, reliability, and scalability**.

---

## Which pieces of the code were most challenging?

One of the most challenging parts of this project was designing the **data structure used to track item frequencies**. I needed an efficient way to store items and update their counts as the program read through the input file.

I solved this problem by using a **map from the C++ Standard Library**, which allowed each item to be stored as a key with its frequency stored as a value. This made counting items very efficient and simplified the code required to display the results.

Another challenge was organizing the code into **separate files and classes** while keeping everything connected properly. Reviewing course materials and documentation helped me understand how to structure header files, implementation files, and the main program.

Resources that helped me overcome these challenges included:

* zyBooks course materials
* C++ Standard Library documentation
* Visual Studio debugging tools

These resources will remain part of my support network for future projects.

---

## What skills from this project are transferable?

Several important programming skills from this project will transfer to future coursework and software development projects:

* **Object-oriented programming using classes**
* **Modular program design**
* **File input and output handling**
* **Using C++ Standard Library data structures such as maps**
* **Writing clear comments and documentation**
* **Creating readable and maintainable code**

These skills are fundamental to software development and will be useful in future courses and professional projects.

---

## How did you make the program maintainable, readable, and adaptable?

I made the program maintainable and readable by following several programming best practices.

First, I used **meaningful variable and function names** that clearly describe their purpose. This makes the code easier for other developers to understand.

Second, I separated the program into **multiple files**, including a header file for class declarations, an implementation file for class methods, and a main file for program execution. This modular structure makes the code easier to modify and expand.

Third, I included **detailed comments at the beginning of every function**, describing the purpose of the function, its parameters, and its return values. I also used whitespace to separate logical sections of code.

These design decisions make the program easier to maintain, debug, and expand if additional features are added in the future.
