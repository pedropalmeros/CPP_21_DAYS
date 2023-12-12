#include <iostream>

using namespace std;

int main(){
    cout << "El tamaño de un entero es: \t\t" << sizeof(int) << " bytes." << endl;
    cout << "El tamaño de un entero corto es: \t\t" << sizeof(short) << " bytes." << endl;
    cout << "El tamaño de un entero largo es: \t\t" << sizeof(long) << " bytes." << endl;
    cout << "El tamaño de un caracter es: \t\t" << sizeof(char) << " bytes." << endl;
    cout << "El tamaño de un punto flotante es: \t\t" << sizeof(float) << " bytes." << endl; 
    cout << "El tamaño de un doble es: \t\t" << sizeof(double) << " bytes." << endl;
    cout << "El tamaño de un boolean es: \t\t" << sizeof(bool) << " bytes." << endl;
}