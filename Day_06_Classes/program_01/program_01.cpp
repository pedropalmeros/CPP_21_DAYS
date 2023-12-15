#include <iostream> 

using namespace std; 

class Gato{
    public:
        int suEdad; 
        int suPeso; 
};

int main(){
    Gato Pelusa; 
    Pelusa.suEdad = 5; 
    cout << "Pelusa es un gatoq ue tiene: " << Pelusa.suEdad << " anios de edad. " << endl; 
    return 0;
}