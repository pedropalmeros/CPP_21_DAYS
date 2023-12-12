#include <iostream> 

using namespace std; 

inline int Duplicar(int);

int main(){
    int numero; 
    
    cout << "Escriba un número on el que quiera trabjar: ";
    cin >> numero; 
    cout << endl; 

    numero = Duplicar(numero); 
    cout << "Número : " << numero << endl; 

    numero = Duplicar(numero);
    cout << "Número : " << numero << endl;

    numero = Duplicar(numero); 
    cout << "Número : " << numero << endl; 

    return 0; 
}

int Duplicar(int numero){
    return numero * 2; 
}