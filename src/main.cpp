#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
using std::ifstream;


int main() {
    ifstream inFile;
    string currentLineData;
    string data;
    inFile.open("../imageFiles/formattedBlackImageHex");
    if(!inFile) {
        cerr << "Error: file could not be opened" << endl;
        exit(1);
    }


    inFile >> hex >> currentLineData;
    while(!inFile.eof()) {
        data.append(currentLineData);
        cout << hex << "the next group of 2 hexdigits is " << currentLineData << endl;
        inFile >> currentLineData;
    }
    inFile.close();
    //cout << data << endl;
    cout << "EoF reached.." << endl;
}