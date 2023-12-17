/* EJEMPLO DE FUNCIÓN CON PARAÁMETROS PASADOS POR PUNTERO*/

#include <iostream> 

using namespace std; 

/* 
Observe that in this case the arguments are pointers (and are set as in the declarations)
Since *pointerX and *pointerY are varaibles used to store directions, when the function 
intercambiar(int*, int*) is invoked, two directions have to be sent to this function. 
As a reminder &a is the direction of the variable a.
PLEASE DO NOT GET CONFUSED WITH REFERENCES. 
*/
void intercambiar(int *pointerX, int *pointerY ); 


/*
IN THIS CASE, THE FUNCTION WORKS WITH POINTERS AND ITS DIRECTIONS, HENCE THE THINGS MODIFIED IN THE 
FUNCTION REMAINS OUTSIDE THE FUNCTION. THIS IS THE MAIN DIFFERENCE AND APPLICATION FOR THIS APPROACH INSTEAD OF 
THE PASSING BY-VALUE APPROACH. 

SOMETIMES MANY VALUES HAVE TO CHANGED IN A FUNCTION, AND THIS CHANGES HAVE TO KEPT, USING RETURN IS NOT FEASIBLE BECAUSE A SINGLE
OBJECT OR VARIABLE CAN BE RETURNED BY A FUNCTION, HENCE THE APPROACH PASS-BY-REFERENCE BY POINTER IS USED.
*/
int main(){
    int x = 5, y = 10; 

    cout << "main(). Antes del intercambio, x: " << x << " y: " << y <<  endl; 
    // SENDING THE DIRECTIONS OF X AND Y TO THE intercambiar FUNCTION
    intercambiar(&x, &y); 
    cout << "main(). Después de intercambio, x:  " << x << " y:  " << y << endl; 
    
    return 0; 
}

void intercambiar(int *pointerX, int *pointerY ){
    int temp; 
    cout << "Intercambiar(). Antes del intercambio : " << *pointerX << "  y : " << *pointerY << endl; 
    
    temp = *pointerX; 
    *pointerX = *pointerY; 
    *pointerY = temp; 

    cout << "Intercambiar(). Después del intercambio, x: " << *pointerX << " y: " << *pointerY << endl; 
}