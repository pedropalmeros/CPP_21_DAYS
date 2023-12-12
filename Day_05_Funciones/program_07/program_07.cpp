#include <iostream> 

using namespace std; 

int VolumenCaja(int longitud, int ancho = 25, int altura = 1);

int main(){
    int longitud = 100; 
    int ancho = 50; 
    int altura = 2; 
    int volumen; 

    volumen = VolumenCaja(longitud, ancho, altura); 
    cout << "La primera vez el volumen es igual a: " << volumen << endl;

    volumen = VolumenCaja(longitud, ancho); 
    cout << "La segudna vez el volumen es igual a: " << volumen << endl; 

    volumen = VolumenCaja(longitud);
    cout << "La tercer vez el volumen es igual a:  " << volumen << endl; 
}

int VolumenCaja(int longitud, int ancho, int altura){
    return longitud * ancho * altura;
}