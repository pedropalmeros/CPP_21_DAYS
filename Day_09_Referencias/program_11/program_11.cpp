#include <iostream>

using namespace std; 

class GatoSimple{
    public:
        GatoSimple();
        GatoSimple(GatoSimple &);
        ~GatoSimple();
        int ObtenerEdad() const { return suEdad; }
        void AsignarEdad(int edad){suEdad = edad; }
    private:
        int suEdad;
};

GatoSimple::GatoSimple(){
    cout << "Constructor de GatoSimple... " << endl; 
    suEdad =1; 
}

GatoSimple::GatoSimple(GatoSimple &){
    cout << "Constructor de copia de GatoSimple...." << endl; 
}

GatoSimple::~GatoSimple(){
    cout << "Destructor de GatoSimple..." << endl; 
}

const GatoSimple * const FuncionDos(const GatoSimple * const elGato);

int main(){
    cout << "Crear un gato ... " << endl; 
    GatoSimple Pelusa;
    cout << "Pelusa tiene: " ;
    cout << Pelusa. ObtenerEdad();
    cout << " años de edad." << endl; 
    int edad = 5; 
    Pelusa.AsignarEdad(edad);
    cout << "Pelusa tiene "; 
    cout << Pelusa.ObtenerEdad();
    cout << " años de edad. " << endl; 
    cout << "Llamando a FuncionDos ... "  << endl; 
    FuncionDos(&Pelusa);
    cout << "Pelusa tiene ";
    cout<< Pelusa.ObtenerEdad(); 
    cout << " años de edad." << endl; 

    return 0; 
}

const GatoSimple * const FuncionDos(const GatoSimple * const elGato){
    cout << "FuncionDos. Regresando...." << endl; 
    cout << "Ahora Pelusa tiene " << elGato->ObtenerEdad(); 
    cout << " años de edad." << endl; 
    // elGaot->AsignarEdad(8);  --- XQ ES PUNTERO CONST
    return elGato; 
}