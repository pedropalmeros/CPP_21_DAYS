#include <iostream>

using namespace std; 

typedef unsigned short int USHORT;

int main(){
    USHORT lSmallNumber = 65535;
    cout << "Small Number: " << lSmallNumber << endl;
    lSmallNumber++;
    cout << "Small Number: " << lSmallNumber << endl; 
    lSmallNumber++;
    cout << "Small Number: " << lSmallNumber << endl; 
    return 0; 
}