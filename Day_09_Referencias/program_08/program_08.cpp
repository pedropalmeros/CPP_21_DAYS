/*
REGRESO DE VARIOS VALORES POR MEDIO DE APUNTADORES.
*/

#include <iostream> 

using namespace std; 

short Factor(int n, int* apSquare, int* apCube);


int main(){
    int number, valSquared, valCube; 
    short error; 

    cout << "Introduce a number(0 - 20): ";
    cin >> number;

    error = Factor(number, &valSquared, &valCube);

    if(!error){
        cout << "Number " << number << endl; 
        cout << "Number squared" << valSquared << endl; 
        cout << "Number Cubic: " << valCube << endl; 
    }

    return 0;
}

short Factor(int n, int *apSquare, int *apCube){
    short Valor = 0; 
    if ( abs(n > 20)){
        Valor = 1; 
    }
    else{
        *apSquare = n*n; 
        *apCube = n*n*n;
        Valor = 0; 
    }

    return Valor;
}
