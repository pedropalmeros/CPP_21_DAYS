/*
The refernce once it has been initated, it cannot be modified, is not like a pointer that can be re-directed. 
*/

#include <iostream> 

using namespace std; 

int main(){
    int intUno;
    int & rUnaRef = intUno; 

    intUno = 5; 
    cout << "intUno: " << intUno << endl; 
    cout << "rUnaRef: " << rUnaRef << endl; 
    cout << "&intUno: " << &intUno << endl; 
    cout << "&rUnaRef: " << &rUnaRef << endl; 

    int intDos = 8; 
    rUnaRef = intDos;
    cout << "\nintUno: " << intUno << endl; 
    cout << "intDos: " << intDos << endl; 
    cout << "rUnaRef: " << rUnaRef << endl; 
    cout << "&intUno: " << &intUno << endl; 
    cout << "&intDos: " << &intDos << endl; 
    cout << "&rUnaRef: " << &rUnaRef << endl; 

    return 0; 
}