/* EJEMPLO DE FUNCIÓN CON PARAÁMETROS PASADOS POR VALOR*/

#include <iostream> 

using namespace std; 

void intercambiar(int x, int y ); 

int main(){
    int x = 5, y = 10; 

    cout << "main(). Anges del intercambio, x: " << x << " y: " << y <<  endl; 
    intercambiar(x, y); 
    cout << "main(). Después de intercambio, x:  " << x << " y:  " << y << endl; 
    
    return 0; 
}

void intercambiar(int x, int y ){
    int temp; 
    cout << "Intercambiar(). Antes del intercambio : " << x << "y : " << y << endl; 
    
    temp = x; 
    x = y; 
    y = temp; 

    cout << "Intercambiar(). Después del intercambio, x: " << x << " y: " << y << endl; 
}