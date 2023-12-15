#include <iostream> 

using namespace std; 

class Gato{
    public: 
        Gato(int edadInicial);
        ~Gato();
        int Obteneredad() const; 
        void AsignarEdad(int edad); 
        void Maullar();

    private:
    int suEdad; 
};

Gato::Gato(int edadInicial){
    suEdad = edadInicial; 
    cout << "Constructor de Gato \n";
}

Gato::~Gato(){
    cout << "Destructor de Gato" << endl; 
}

int Gato::Obteneredad() const{
    return (suEdad);
}

void Gato::AsignarEdad(int edad){
    suEdad = edad; 
}

void Gato::Maullar(){
    cout << "Miauuuuuu" << endl; 
}

int main(){
    Gato Pelusa(5);
    Pelusa.Maullar();
}