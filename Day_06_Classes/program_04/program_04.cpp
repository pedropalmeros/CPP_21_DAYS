#include <iostream>

using namespace std; 

class Gato{
    public: 
        Gato(int edadInicial); 
        int ObtenerEdad();
        void AsignarEdad(int edad);
        void Maullar();
    private:
        int suEdad;
};

//constructor de gato
Gato::Gato(int edadInicial){
    suEdad = edadInicial;
}

void Gato::AsignarEdad(int edad){
    suEdad = edad;
}

int Gato::ObtenerEdad(){
    return suEdad;
}

void Gato::Maullar(){
    cout << "Miaaauuuuuuu" << endl;
}


int main(){
    Gato Pelusa(5);
    Pelusa.Maullar();
    cout << "Pelusa es un gatoq ue tiene " ;
    cout << Pelusa.ObtenerEdad() << " anios de edad" << endl; 
    Pelusa.Maullar();
    Pelusa.AsignarEdad(7);
    cout << "ahora Peluda tiene : ";
    cout << Pelusa.ObtenerEdad() << " anios de edad" << endl; 
    return 0; 
}