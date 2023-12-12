#include <iostream> 

using namespace std; 


int Duplicador(int CantidadADuplicar);

int main()
{
    int resultado = 0; 
    int entrada; 

    cout << "Escriba un número entre 0 y 10,000 para duplicarlo: "; 
    cin >> entrada; 

    cout << "\nAntes de llamar al duplicador ... "  << endl; 
    cout << "\nentrada: " << entrada << " duplicada: " << resultado << endl; 

    resultado = Duplicador(entrada); 

    cout << "\nRegresando del duplicador .... \n " << endl; 
    cout << "\nentrada: " << entrada << " duplicado: " << resultado << endl; 

    return 0; 

}

int Duplicador(int original){
    if (original <= 10000){
        return original * 2; 
    }
    else{
        return -1;
    }
    cout << "No puede llegar aquí \n";
}