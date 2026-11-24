//Writing to a File

//Use ofstream and the insertion operator (<<) to write text to a file

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open file in write mode (use ios::app to append instead of overwrite)
    ofstream outFile("sample.txt");

    if (outFile.is_open()) {
        outFile << "Welcome to C++ session\n";
        outFile << "This is sample file handling session\n";
        outFile.close();
        cout << "Write successful." << endl;
    } else {
        cout << "Error opening file." << endl;
    }

    return 0;
}