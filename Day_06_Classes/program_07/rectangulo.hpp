#include <iostream> 
#include "punto.hpp"

using namespace std; 

class Rectangulo{
    public:
        Rectangulo(float superior, float izquierdo, float inferior, float derecho);
        ~Rectangulo(){}

        float ObtenerSuperior() const; 
        float ObtenerIzquierdo() const;
        float ObtenerInferior() const; 
        float ObtenerDerechio() const; 

    private:
        
}