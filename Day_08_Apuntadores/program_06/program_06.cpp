#include <iostream>

using namespace std; 

class GatoSimple{
    public:
        GatoSimple(){
            suEdad = 2; 
        }
        ~GatoSimple(){}
        int obtenerEdad() const{
            return suEdad;
        }

        void AsginarEdad(int edad){
            suEdad = edad; 
        }
    
    private: 
    int suEdad;
};

int main(){
    GatoSimple * Pelusa = new GatoSimple; 
    cout << "Pelusa tiene "<< Pelusa->obtenerEdad() << " anios de edad." << endl; 
    Pelusa->AsginarEdad(8); 
    cout << "Pelusa tiene "<< Pelusa->obtenerEdad() << " anios de edad." << endl; 
}

/*
To access the methods on a object in the Heap the next syntaxis is needed

ObjectInstance->Method

Hence, in this case, this is executed on the line 26  to assing a value to a private attribute.
in line 2 and 27 is executed the case in which an attribute is extracted from the object. 
*/