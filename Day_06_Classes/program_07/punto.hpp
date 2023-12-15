#include <iostream> 
using namespace std; 

class Punto{
    public: 
        Punto(float x, float y);
        void AsignarX(float val );
        void AsignarY(float val );
        float ObtenerX();
        float ObtenerY(); 
        void Describe();

    private:
        float XCoord; 
        float YCoord;
};   