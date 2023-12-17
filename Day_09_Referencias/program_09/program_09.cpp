/*
"REGRESO" DE VARIOS VALORED DE UNA FUNCIÓN POR MEDIO DE REFERENCIAS
*/

#include <iostream> 

using namespace std; 

typedef unsigned short USHORT;

enum CODIGO_ERR{ EXITO, ERROR};

CODIGO_ERR Factor(USHORT, USHORT &, USHORT &); 

int main(){
    USHORT numero, alCuadrado, alCubo;
    CODIGO_ERR resultado; 

    cout << "Escriba un número (0 - 20): " ; 
    cin >> numero; 

    resultado = Factor(numero, alCuadrado, alCubo); 

    if (resultado == EXITO){
        cout << "numero : " << numero << endl; 
        cout << "al cuadrado:  " << alCuadrado << endl; 
        cout << "al cubo: " << alCubo << endl; 
    }
    else{
        cout << "!Se encontró un error!" << endl;
    }

    return 0; 
}

CODIGO_ERR Factor(USHORT numero, USHORT &cuadrado, USHORT &cubo){
    if( numero > 20 ){
        return ERROR; 
    }
    else{
        cuadrado = numero * numero; 
        cubo = cuadrado * numero;
        return EXITO;
    }
}