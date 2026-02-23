/**
GroceryTracker.cpp

Description:
Implementation file for the GroceryTracker class. Implements methods for
loading grocery items, counting frequencies, displaying lists and histograms,
and creating backup files.
*/

#include "GroceryTracker.h"
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

/**
Constructor GroceryTracker
Description:
Reads items from a file and stores their frequency in a map.
Also automatically saves a backup file.
Parameter filename - string: name of the input file containing purchased items
Return - none
*/
GroceryTracker::GroceryTracker(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error: Unable to open input file: " << filename << endl;
        exit(1);
    }

    string item;

    while (file >> item) {  // read each item and update frequency map
        itemFrequency[item]++;
    }
    file.close();

    saveBackup("frequency.dat");  // create backup automatically
}

/**
getItemFrequency
Description:
Returns the number of times a specific item appears in the input file.
Parameter item - string: the item to search for
Return frequency - int: number of times the item appears
*/
int GroceryTracker::getItemFrequency(const string& item) {
    if (itemFrequency.find(item) != itemFrequency.end()) {
        return itemFrequency[item];
    }
    return 0;
}

/**
displayAll
Description:
Prints all items and their frequencies in a readable list format.
Parameter - none
Return - none
*/
void GroceryTracker::displayAll() {
    cout << "\nItem Frequencies:\n";
    for (auto const& pair : itemFrequency) {
        cout << pair.first << " " << pair.second << endl;
    }
}

/**
displayHistogram
Description:
Prints a histogram of all items using asterisks to represent frequency.
Parameter - none
Return - none
*/
void GroceryTracker::displayHistogram() {
    cout << "\nItem Histogram:\n";
    for (auto const& pair : itemFrequency) {
        cout << pair.first << " ";
        for (int i = 0; i < pair.second; i++) {
            cout << "*";
        }
        cout << endl;
    }
}

/**
saveBackup
Description:
Saves all items and their frequencies to a backup file.
Parameter backupFile - string: name of the file to save
Return - none
*/
void GroceryTracker::saveBackup(const string& backupFile) {
    ofstream out(backupFile);
    if (!out) {
        cerr << "Error: Unable to create backup file." << endl;
        return;
    }

    for (auto const& pair : itemFrequency) {
        out << pair.first << " " << pair.second << endl;
    }
    out.close();
}

