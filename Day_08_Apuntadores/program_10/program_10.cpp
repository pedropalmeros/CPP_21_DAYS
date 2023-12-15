/*
Uso de apuntadroes con métodos const

const es un prefijo y ayuda a proteger ante cambios

const int * apuntador;          | evita que se cambie el entero, pero si se puede cambiar el apuntador
int * const apuntador;          | evita que se cambie la dirección a la cual se apunta, pero si se puede cambiar el contenido. 
const int * const apuntador;    | evita que se cambie la dirección y su contenido. 

*/

#include <iostream>

using namespace std; 

class Rectangulo{
    public: 
        Rectangulo();
        ~Rectangulo();
        void AsignarLongitud(int longitud){ suLongitud = longitud; }
        int ObtenerLongitud() const{ return suLongitud; } 
        void AsignarAncho(int ancho){ suAncho = ancho; }
        int ObtenerAncho() const{ return suAncho;}
    
    private:
        int suLongitud;
        int suAncho;;
};

Rectangulo::Rectangulo(){
    suAncho = 5; 
    suLongitud = 10;
}

Rectangulo::~Rectangulo(){}

int main(){
    Rectangulo * apRect = new Rectangulo; 
    const Rectangulo * apConstRect = new Rectangulo;
    Rectangulo * const apConstApunt = new Rectangulo;

    cout << "Ancho de apRect: " << apRect->ObtenerAncho() << " pies. " << endl; 
    cout << "Ancho de PConstrect: " <<apConstRect->ObtenerAncho() << " pies. " << endl; 
    cout << "Ancho de apCosntapunt: " << apConstApunt->ObtenerAncho() << " pies. " << endl; 

    apRect->AsignarAncho(10);
    //apconstrect->AsignarAncho(10);  IF THIS LINE UNCOMMENTED THE COMPILATION FAILS, SINCE IT IS TRYING TO MODIFY A CONST POINTER
    apConstApunt->AsignarAncho(10);

    cout << "Ancho de apRect: ";
    cout << apRect->ObtenerAncho() << " pies." << endl; 
    cout<< "Ancho de apConstRect:  "; 
    cout << apConstRect->ObtenerAncho() << " pies." << endl; 
    cout << "Ancho de apConstApunt: ";
    cout << apConstApunt->ObtenerAncho() << " pies." << endl; 

    return 0; 
}
