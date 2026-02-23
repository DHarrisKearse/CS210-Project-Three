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

## What I Learned

* How to design and implement **modular class-based logic** for tracking and displaying item frequencies.
* Practical experience using **maps** for frequency counting and data management.
* Developing **menu-driven programs** with input validation and robust error handling.
* Importance of **backups and persistent storage** via file output.
* Hands-on experience using **Git and GitHub** for version control, commits, and remote repository management.
* Creating **clear documentation** with a README to explain project goals, design decisions, and usage.

## Future Enhancements

* Case-insensitive item searches for improved usability
* Allow user-defined histogram symbols
* Real-time updates with new purchases appended to the input file
* GUI or web interface for store managers
* Unit testing for frequency calculations and file operations

## Author

Created as part of **CS 210 – Programming Languages** coursework
