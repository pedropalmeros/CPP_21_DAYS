#include <iostream> 
#include "punto.hpp"
using namespace std; 

Punto::Punto(float x, float y){
    XCoord = x; 
    YCoord = y; 
}

void Punto::AsignarX(float val){
    XCoord = val;
}

void Punto::AsignarY(float val){
    YCoord = val;
}

float Punto::ObtenerX(){
    return XCoord;
}

float Punto::ObtenerY(){
    return YCoord;
}

void Punto::Describe(){
    cout << "XCoord: " << XCoord << "    YCoord: " << YCoord << endl;
}