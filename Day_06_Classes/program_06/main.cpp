#include "gato.hpp"

Gato::Gato(int edadInicial){
    suEdad = edadInicial; 
}

Gato::~Gato(){}


int main(){
    Gato Pelusa(5);
    Pelusa.Maullar();
    cout << "Pelusa es un gato que tiene: " << Pelusa.ObtenerEdad() << " aniosde edad." << endl;
    Pelusa.Maullar();
    Pelusa.AsignarEdad(7);
    cout << "Ahora Pelusa tiene: " << Pelusa.ObtenerEdad() << " anios de edad" << endl; 
    return 0; 
}