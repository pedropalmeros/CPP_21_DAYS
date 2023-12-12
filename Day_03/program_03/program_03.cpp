// Using TYPEDEF
#include <iostream>

using namespace std;

typedef unsigned short int USHORT;

int main(){
    USHORT lWidth = 5;
    USHORT lLength;

    lLength = 10;

    USHORT Area = lLength * lWidth; 

    cout << "Width: " << lWidth << endl; 
    cout << "Length: " << lLength << endl; 
    cout << "Area: " << Area << endl; 
}