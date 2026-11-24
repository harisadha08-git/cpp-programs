//Reading from a File
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("sample.txt");
    string line;

    if (inFile.is_open()) {
        // Read until the end of the file
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to find or open file." << endl;
    }

    return 0;
}