#include <iostream>

using namespace std; 

int Area(int longitud, int ancho); // function prototype

int main(){
    int longitudDeJardin;
    int anchoDeJardin;
    int areaDeJardin; 

    cout << "\n¿Cuál es el ancho de su jardín? : "; 
    cin >> anchoDeJardin; 
    cout << "\n¿Cuál es la longitud de su jardín? : "; 
    cin >> longitudDeJardin;
    
    areaDeJardin = Area(longitudDeJardin, anchoDeJardin);

    cout << "\nSu jardín es de: ";
    cout << areaDeJardin;
    cout << " metros cuadrados \n\n"; 

    return 0;
}

int Area(int jardinLongitud, int jardinAncho){
    return jardinLongitud * jardinAncho;
}