/**
Corner Grocer Item-Tracking Program
CS 210 – Programming Languages
Author: Dhandeaka Harris-Kearse
Date: 2/23/2026

Description:
This program tracks grocery item purchases from an input file, calculates frequency
of each item, displays a histogram, allows searching for individual items, and
saves a backup file. It demonstrates use of classes, maps, file I/O, functions,
modular design, comments, and whitespace for readability.

main.cpp

Description:
Main program that uses the GroceryTracker class to provide a menu-driven
interface for searching items, displaying item frequencies, and showing
histograms.
*/

#include <iostream>
#include "GroceryTracker.h"
using namespace std;

/**
displayMenu
Description:
Prints the main menu options for the user.
Parameter - none
Return - none
*/
void displayMenu() {
    cout << "\n**************************\n";
    cout << "* 1 - Search for an Item *\n";
    cout << "* 2 - Display All Items  *\n";
    cout << "* 3 - Display Histogram  *\n";
    cout << "* 4 - Exit Program       *\n";
    cout << "**************************\n";
}

/**
getUserChoice
Description:
Prompts user for menu choice and validates input.
Parameter - none
Return choice - int: validated menu choice (1-4)
*/
int getUserChoice() {
    int choice;
    while (true) {
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 4) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Enter a number between 1 and 4.\n";
        } else {
            cin.ignore(10000, '\n'); // clear input buffer
            return choice;
        }
    }
}

/**
main
Description:
Organizes program flow. Creates GroceryTracker object, displays menu,
and calls class methods based on user selection.
Parameter - none
Return - int: exit status (0 = success)
*/
int main() {

    // Create tracker object and load data from input file
    GroceryTracker tracker("CS210_Project_Three_Input_File.txt");

    int choice;
    string item;

    do {
        displayMenu();
        choice = getUserChoice();

        // Execute functionality based on menu selection
        switch (choice) {
            case 1:
                cout << "Enter item to search: ";
                cin >> item;
                cout << item << " appears " << tracker.getItemFrequency(item) << " times.\n";
                break;

            case 2:
                tracker.displayAll();
                break;

            case 3:
                tracker.displayHistogram();
                break;

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                // This case should never occur because of input validation
                cout << "Unexpected error. Please try again.\n";
        }

        cout << endl; // whitespace between menu iterations

    } while (choice != 4);

    return 0;
}