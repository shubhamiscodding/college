#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("test.txt");
    string line;

    if (file.is_open()) {

        
        file << "Data" << endl;
        file << "data0" << endl; 
        file << "data1" << endl; 
        cout << file.tellg() << endl;
        file.seekg(0, ios::beg);

        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();
        cout << "Data added successfully.";
    } else {
        cout << "Error opening file." << endl;
    }

    return 0;
}
