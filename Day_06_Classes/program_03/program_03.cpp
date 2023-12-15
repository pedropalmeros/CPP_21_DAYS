#include <iostream> 

using namespace std;

class Gato{
    public:
        int getEdad();
        void setEdad(int edad);
        void Maullar();
    private:
        int suEdad;
};

int Gato::getEdad(){
    return suEdad; 
}

void Gato::setEdad(int edad){
    suEdad = edad;
}

void Gato::Maullar(){
    cout << "Miauuuuu" << endl;
}

int main(){
    Gato Pelusa;
    Pelusa.setEdad(5);
    Pelusa.Maullar();
    cout << "Pelusa es un gato que tiene: " << Pelusa.getEdad() << " anios de edad. " << endl; 
    Pelusa.Maullar();
    return 0;
}