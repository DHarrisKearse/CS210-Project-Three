/**
GroceryTracker.h

Description:
Header file for the GroceryTracker class. Declares functions for
loading grocery items, counting frequencies, displaying lists and
histograms, and creating backup files.
*/

#pragma once
#include <map>
#include <string>

using namespace std;

/**
Class GroceryTracker
Description:
Handles item frequency tracking, displaying lists and histograms, and saving backups.
*/
class GroceryTracker {

private:
    map<string, int> itemFrequency; // stores item names and their counts

public:
    /**
    Constructor GroceryTracker
    Description:
    Reads items from a file and stores their frequency in a map.
    Also automatically saves a backup file.
    Parameter filename - string: name of the input file containing purchased items
    Return - none
    */
    GroceryTracker(const string& filename);

    /**
    getItemFrequency
    Description:
    Returns the number of times a specific item appears in the input file.
    Parameter item - string: the item to search for
    Return frequency - int: number of times the item appears
    */
    int getItemFrequency(const string& item);

    /**
    displayAll
    Description:
    Prints all items and their frequencies in a readable list format.
    Parameter - none
    Return - none
    */
    void displayAll();

    /**
    displayHistogram
    Description:
    Prints a histogram of all items using asterisks to represent frequency.
    Parameter - none
    Return - none
    */
    void displayHistogram();

    /**
    saveBackup
    Description:
    Saves all items and their frequencies to a backup file.
    Parameter backupFile - string: name of the file to save
    Return - none
    */
    void saveBackup(const string& backupFile);
};