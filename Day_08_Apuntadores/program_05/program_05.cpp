#include <iostream>

using namespace std; 

class GatoSimple{
    public:
        GatoSimple();
        ~GatoSimple();
    private:
        int suEdad; 
};

GatoSimple::GatoSimple(){
    cout << "Se llamó al constructor" << endl; 
    suEdad = 1; 
}

GatoSimple::~GatoSimple(){
    cout << "Se llamó al destructor" << endl; 
}


int main(){
    cout << "Gatosimple Pelusa ...." << endl; 
    GatoSimple Pelusa; 
    cout << "GatoSiple *apFelix = new GatoSimple..." << endl; 
    GatoSimple *apFelix = new GatoSimple; //GATOSIMPLE EN EL HEAP COMO APUNTADOR
    cout << "Delete apFelix..." << endl; 
    delete apFelix;
    cout << "Sliendo, obaserve cómo se va Pelusa" << endl; 
}

/*  
----------------- OBJECT IN THE STACK
In this case in Line 25 an object is created in the STACK (PILA).
SINCE THIS OBJECT IS IN THE STACK THE MEMORY MANAGEMENT IS MADE AUTOMATICALLY BY THE COMPILER.
Observer that after the last COUT (line 30) in the console is called the destructor and 
in line 25 the constructor is called automatically. 

---- OBJECT IN THE HEAP
Objects in the HEAP does not manage the memory allocation automatically it has to be manual. 
THE OBJECTS IN THE HEAP ARE MANAGED BY POINTERS AND REFERECES. 
In line 27 the object GATOSIMPLE is created and we can ACCESS IT BY THE POINTER APFELIX.
In line 29 the object GATOSIMPLE is deleted, and the constructor is invoked. 

*/