#include <iostream>

using namespace std; 

class GatoSimple{
    public:
        GatoSimple();
        ~GatoSimple();
        int ObtenerEdad() const{ return *suEdad; }
        void AsignarEdad (int edad){ *suEdad = edad;}
        int ObtenerPeso() const {return *suPeso;}
        void AsignarPeso (int peso){ *suPeso = peso;}
    private:
        int *suEdad; 
        int *suPeso;
};

GatoSimple::GatoSimple(){
    /* 
    Observe that in the private section of the class, the two attributes are pointers, as they belong to a class for objects in the heap
    both of them has te be created as entities in the heap, that's why in line 23 and 24 are initialized with NEW INT and the initial value
    BOTH OF THEM ARE POINTERS. 
    */
    suEdad = new int(2); 
    suPeso = new int(5);
}

GatoSimple::~GatoSimple(){
    /*
    Since the private attributes are pointers of a classs of objects that might be in the Heap, THE MEMORY DE-ALLOCATION HAS TO BE DONE MANUALLY, (in the 
    constructor of the class, the NEW was used), hence in the destructor the DELETE has be used to realese the memory
    */
    delete suEdad;
    delete suPeso;
}

int main(){
    GatoSimple * Pelusa = new GatoSimple; 
    cout << "Pelusa tiene " << Pelusa->ObtenerEdad() << " anios de edad. " << endl; 
    cout << "Cambiando la edad de pelusa. " << endl; 
    Pelusa->AsignarEdad(15);
    cout << "Pelusa tiene " << Pelusa->ObtenerEdad() << " anios de edad. " << endl; 
}


