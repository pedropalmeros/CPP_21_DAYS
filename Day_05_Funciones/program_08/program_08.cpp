#include <iostream> 

using namespace std; 

int Duplicar(int); 
long Duplicar(long); 
float Duplicar(float); 
double Duplicar(double); 

int main(){
    int     miInt = 6500;
    long    miLong = 65000;
    float   miFloat = 6.5F; 
    double  miDoble = 1.5e20; 

    int     intDuplicado; 
    long    longDuplicado; 
    float   floatDuplicado; 
    double  doubleDuplicado; 

    cout << "entero inicial : " << miInt <<  endl; 
    cout << "long inicial : " << miLong << endl; 
    cout << "float incial : " << miFloat << endl; 
    cout << "double inicial: " << miDoble << endl; 

    intDuplicado = Duplicar(miInt);
    longDuplicado = Duplicar(miLong);
    floatDuplicado = Duplicar(miFloat);
    doubleDuplicado = Duplicar(miDoble);
    
    cout << "Entero duplicado " << intDuplicado << endl; 
    cout << "Long duplicado " << longDuplicado << endl; 
    cout << "Floatante duplicado " << floatDuplicado << endl; 
    cout << "Double duplicado " << doubleDuplicado << endl; 
}

int Duplicar(int original){
    cout << "En duplicar (int)" << endl; 
    return original * 2; 
}

long Duplicar(long original){
    cout << "En duplicar (long)" << endl; 
    return original * 2; 
}

float Duplicar(float original){
    cout << "En duplicar (float)" << endl; 
    return original * 2; 
}

double Duplicar(double original){
    cout << "En duplicar (double)" << endl; 
    return original * 2; 
}

