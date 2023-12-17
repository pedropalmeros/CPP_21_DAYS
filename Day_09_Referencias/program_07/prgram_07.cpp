/* EJEMPLO DE FUNCIÓN CON PARAÁMETROS PASADOS POR REFENCIA*/

#include <iostream> 

using namespace std; 

/* 
Observe that in this case the arguments are references,  
*/
void intercambiar(int &refX, int &refY ); 


/*
IN THIS CASE, THE FUNCTION WORKS WITH REFERENCES.

SOMETIMES MANY VALUES HAVE TO CHANGED IN A FUNCTION, AND THIS CHANGES HAVE TO KEPT, USING RETURN IS NOT FEASIBLE BECAUSE A SINGLE
OBJECT OR VARIABLE CAN BE RETURNED BY A FUNCTION, HENCE THE APPROACH PASS-BY-REFERENCE BY POINTER IS USED.
*/
int main(){
    int x = 5, y = 10; 

    cout << "main(). Antes del intercambio, x: " << x << " y: " << y <<  endl; 
    // SENDING THE DIRECTIONS OF X AND Y TO THE intercambiar FUNCTION
    intercambiar(x, y); 
    cout << "main(). Después de intercambio, x:  " << x << " y:  " << y << endl; 
    
    return 0; 
}

void intercambiar(int &refX, int &refY ){
    int temp; 
    cout << "Intercambiar(). Antes del intercambio : " << refX << "  y : " << refY << endl; 
    
    temp = refX; 
    refX = refY; 
    refY = temp; 

    cout << "Intercambiar(). Después del intercambio, x: " << refX << " y: " << refY << endl; 
}