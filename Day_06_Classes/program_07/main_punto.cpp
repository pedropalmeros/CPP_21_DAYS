#include <iostream>
#include "punto.hpp"

using namespace std; 


int main(){
    Punto Punto1(4.5, 6.5); 
    Punto1.Describe();

    Punto1.AsignarX(8.1);
    Punto1.Describe();

    Punto1.AsignarX(-4.0);
    Punto1.Describe();
}
