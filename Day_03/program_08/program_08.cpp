
#include <iostream> 

using namespace std;

int main(){
    const int Domingo = 0;
    const int Lunes = 1; 
    const int Martes = 2;
    const int Miercoles = 3; 
    const int Jueves = 4;
    const int Viernes = 5; 
    const int Sabado = 6;

    int lOpt;

    cout << "Write a day (0 - 6): ";
    cin >> lOpt;
    if (lOpt == Domingo || lOpt == Sabado){
        cout << "\nYa se le agotaron los fines de semana" << endl; 
    }
    else{
        cout << "Go to Work" << endl;
    }
}