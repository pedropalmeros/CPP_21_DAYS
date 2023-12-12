#include <iostream>

using namespace std;

typedef short int SHINT;

int main(){
    SHINT lSmallNumber = 32767;
    cout << "Small Number: " << lSmallNumber << endl; 
    lSmallNumber++;
    cout << "Small Number: " << lSmallNumber << endl; 
    lSmallNumber++;
    cout << "Small Number: " << lSmallNumber << endl; 
    return 0;
}