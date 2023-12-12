#include <iostream> 

using namespace std;

int main(){
    enum lDays{Domingo, Lunes, Martes, Miercoles, Jueves, Viernes, Sabado};
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