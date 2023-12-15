#include <iostream> 

using namespace std; 

class Gato{
    public: 
        Gato (int edadInicial);
        ~Gato();
        int ObtenerEdad() const {return suEdad;}
        void AsignarEdad(int edad) { suEdad = edad; } 
        void Maullar() const { cout << "Miauuuuuuuuu " << endl; }
    private:
        int suEdad;
};
