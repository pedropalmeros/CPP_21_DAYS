#include <iostream>

using namespace std; 

int main(){
    unsigned short int miEdad = 5, suEdad = 10; 
    unsigned short int * apEdad = &miEdad; // un apuntador

    cout << "miEdad: " << miEdad << "\t| su edad: " << suEdad << endl; 
    cout << "&miedad: "  << &miEdad << "\t| &suEdad: " << &suEdad << endl; 
    cout << "apEdad: " << apEdad << "\t| *apEdad: " << *apEdad << endl;     
    //reasignando apuntador
    apEdad = &suEdad; 
    cout << "miEdad: " << miEdad << "\tsuEdad: " << suEdad << endl; 
    cout << "&miEdad: " << &miEdad << "\t&suEdad: " << &suEdad << endl; 
    cout << "apEdad: " << apEdad << endl; 
    cout << "*apEdad: " << *apEdad << endl; 
    cout << "&apEdad: " << &apEdad << endl; 
}