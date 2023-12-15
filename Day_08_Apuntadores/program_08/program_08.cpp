/*
THIS POINTER
*/

#include <iostream>

using namespace std; 

class Rectangulo{
    public: 
        Rectangulo();
        ~Rectangulo();
        void AsignarLongitud(int longitud){ this->suLongitud = longitud;}
        int ObtenerLongitud() const{ return this->suLongitud; }
        void AsignarAncho(int ancho) {this->suAncho = ancho;} 
        int ObtenerAncho() const {return this->suAncho;}
    private:
        int suLongitud;
        int suAncho;
};

Rectangulo::Rectangulo(){
    suAncho = 5; 
    suLongitud = 10; 
}

Rectangulo::~Rectangulo(){}

int main(){
    Rectangulo elRect;

    cout << "elRect tiene " << elRect.ObtenerLongitud() << " pies de largo. " << endl; 
    cout << "elRect tiene " << elRect.ObtenerAncho() << " pies de largo. " << endl;

    elRect.AsignarAncho(10);
    elRect.AsignarLongitud(20); 

    cout << "elRect tiene " << elRect.ObtenerLongitud() << " pies de largo. " << endl; 
    cout << "elRect tiene " << elRect.ObtenerAncho() << " pies de ancho" << endl; 

    return 0; 
}