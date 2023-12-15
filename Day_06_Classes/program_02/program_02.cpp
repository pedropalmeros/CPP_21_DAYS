#include <iostream> 

using namespace std; 

class Gato{
    public:
    unsigned int getEdad(){
        return this->suEdad;
    }
    void setEdad(unsigned int Edad){
        this->suEdad = Edad;
    }

    unsigned int getPeso(){
        return this->suPeso;
    }

    void setPeso(unsigned int Peso){
        this->suPeso = Peso; 
    }
    private:
        unsigned int suEdad; 
        unsigned int suPeso; 
};

int main(){
    Gato Pelusa; 
    Pelusa.setEdad(5); 
    cout << "Pelusa es un gatoq ue tiene: " << Pelusa.getEdad() << " anios de edad. " << endl; 
    return 0;
}