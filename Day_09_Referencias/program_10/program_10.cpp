/*
PASO DE APUNTADORES A OBJETOS
*/
#include <iostream> 

using namespace std; 

class GatoSimple{
    public:
        GatoSimple();
        GatoSimple(GatoSimple &); //CONSTRUCTOR DE COPIA
        ~GatoSimple();
};

GatoSimple::GatoSimple(){
    cout << "Constructor de GatoSimple."  << endl; 
}

GatoSimple::GatoSimple(GatoSimple &){
    cout<< "Constructor de copia de GatoSimple." << endl; 
}

GatoSimple::~GatoSimple(){
    cout << "Destructor de GatoSimple" << endl; 
}

GatoSimple FuncionUno(GatoSimple elGato);
GatoSimple * FuncionDos(GatoSimple * elGato); 

int main(){
    cout << "Crear un gato " << endl;
    GatoSimple Pelusa; 
    cout << "Llamando a FuncionUno .... " << endl; 
    Pelusa = FuncionUno(Pelusa); 
    cout << "LLamando a  FuncionDios ..." << endl; 
    FuncionDos(&Pelusa);
}

//FuncionUno, pasar por valor
GatoSimple FuncionUno(GatoSimple elGato){
    cout << "FuncionUno, Regresando... " << endl; 
    return elGato;
}

GatoSimple * FuncionDos(GatoSimple * elGato){
    cout << "FuncionDos. Regresando ..." << endl; 
    return elGato;
}
