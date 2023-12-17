#include <iostream>

using namespace std; 

class GatoSimple{
    public:
        GatoSimple();
        GatoSimple(GatoSimple &);
        ~GatoSimple();
        int ObtenerEdad() const { return suEdad; }
        void AsignarEdad(int edad){ suEdad = edad; }
    private:
        int suEdad;
};

GatoSimple::GatoSimple(){
    cout << "Constructor de GatoSimple... " << endl; 
    suEdad = 1; 
}

GatoSimple::GatoSimple(GatoSimple &){
    cout << "Constructor de copia Gatosimple .... "  << endl; 
}

GatoSimple::~GatoSimple(){
    cout << "Destructor de Gatosimple... " << endl; 
}

const GatoSimple & FuncionDos(const GatoSimple & elGato ); 

int main(){
    cout << "Crear un gato ..." << endl; 
    GatoSimple Pelusa, miGato;
    cout << "Pelusa tiene " << Pelusa.ObtenerEdad(); 
    cout << " años de edad. " << endl; 
    int edad = 5;
    Pelusa.AsignarEdad(edad);
    cout << "Pelusa tiene " << Pelusa.ObtenerEdad();
    cout << " años de edad..." << endl; 
    cout << "Llamando a FuncionDos..." << endl; 
    FuncionDos(Pelusa);
    cout << "Pelusa tiene " << Pelusa.ObtenerEdad();
    cout << " años de edad" << endl; 
}

// FuncionDos, para una referencia a un objeto const
const GatoSimple & Funciondos(const GatoSimple & elGato){
        cout << "FuncionDos. Regresando...." << endl; 
        cout << "Ahora Pelusa tiene " << elGato.ObtenerEdad();
        cout << " años de edad... " << endl; 
        // elGato.AsignarEdad(8); // CONST
        return elGato;
}