#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
using std::ifstream;



int main() {
    ifstream infile;
    int num;
    infile >> hex >> num;
    infile.open("../imageFiles/formattedBlackImageHex");
    if(!infile) {
        cerr << "Error: infile could not be opened" << endl;
        exit(1);
    }
    infile >> hex >> num;
    while(!infile.eof()){
        cout << "the next group of 2 hexdigits is " << num << hex << endl;
        infile >> num;
    }
    infile.close();
    cout << "EoF reached.." << endl;
}