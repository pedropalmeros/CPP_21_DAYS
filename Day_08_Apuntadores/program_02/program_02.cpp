#include <iostream> 

using namespace std; 

typedef unsigned short int USHORT; 

int main(){
    USHORT miEdad; 
    USHORT * apEdad = NULL;

    miEdad = 5; 
    cout << "miEdad: " << miEdad << endl;

    apEdad = &miEdad; 
    cout << "miEdad: " << miEdad << endl; 

    apEdad = &miEdad; 
    cout << "*apEdad: " << *apEdad << "\n\n";
    cout << "*apEdad = 7 \n" << endl; 

    *apEdad = 7; 
    cout << "*apEdad: " << *apEdad << endl; 
    cout << "miEdad: " << miEdad << "\n\n"; 
    cout << "miedad = 9\n"; 
    miEdad = 9;
    cout << "miEdad: " << miEdad << endl; 
    cout << "*apEdad: " << *apEdad << endl;

    return 0;
}