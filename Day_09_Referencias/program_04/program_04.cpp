#include <iostream> 

using namespace std; 

class GatoSimple{
    public: 
        GatoSimple(int edad, int peso); 
        ~GatoSimple(){}
        int ObtenerEdad(){ return suEdad; }
        int ObtenerPeso() { return suPeso; }
    
    private:
    int suEdad; 
    int suPeso;   
};

GatoSimple::GatoSimple(int edad, int peso){
    suEdad = edad; 
    suPeso = peso;
}

int main(){
    GatoSimple Pelusa(5, 8); 
    GatoSimple & rGato = Pelusa; 

    cout << "Pelusa tiene: " << Pelusa.ObtenerEdad() <<  " anios de edad. " << endl; 
    cout << "Y Pelusa pesa: " << rGato.ObtenerPeso() << " libras. " << endl; 
    return 0; 
}