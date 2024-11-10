#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("People.txt"); // Open the file
    if (!inputFile) {
        cout << "Error: Could not open file 'People.txt'.\n";
        return 1;
    }

    cout << "PRAIRIEVILLE POPULATION GROWTH\n";
    cout << "(each * represents 1,000 people)\n";

    int year, population;

    // Read year and population data from the file
    while (inputFile >> year >> population) {
        cout << year << " ";

        // Display asterisks representing the population in thousands
        for (int i = 0; i < population / 1000; i++) {
            cout << "*";
        }
        cout << endl;
    }

    inputFile.close(); // Close the file
    return 0;
}
