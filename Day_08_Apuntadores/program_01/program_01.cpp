#include <iostream>

using namespace std; 

int main(){
    int shortvar = 5; 
    long longVar = 65535;
    long sVar = -65535; 

    cout << "Variable de tipo short sin signo: " << shortvar << endl; 
    cout << "Dirección de la variable shortVar: " << &shortvar << endl; 

    cout << "Variable de tipo longVar: " << longVar << endl; 
    cout << "Dirección de la variable longVar: " << &longVar << endl; 

    cout << "Variable de tipo lon sVar: " << longVar << endl; 
    cout << "Dirección de la variable longVar: " << &longVar << endl; 

    return 0; 
}