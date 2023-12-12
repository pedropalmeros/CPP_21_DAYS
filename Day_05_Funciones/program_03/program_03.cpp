#include <iostream>

using namespace std;

void miFuncion(); 

int x = 5; 
int y = 7;

int main(){
    cout << "x desde la función main: " << x << endl; 
    cout << "y desde la función main: " << y << endl; 
    miFuncion();
    cout << "!Ya salimos de miFuncion¡" << endl;
    cout <<"x desde la función main: " << x << endl; 
    cout <<"y desde la función main: " << y << endl; 
    return 0;
}

void miFuncion(){
    int y = 10; 
    cout << "x desde miFuncion: " << x << endl; 
    cout << "y desde miFuncion: " << y << endl; 
}