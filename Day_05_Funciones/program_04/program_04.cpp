#include <iostream> 

using namespace std; 

void miFunc();

int main(){
    int x = 5; 
    cout << "\nEn main x vale: " << x << endl; 
    
    miFunc();
    
    cout << "\nDe regreso en main, x vale: " << x << endl; 
    
    return 0; 
}


void miFunc(){
    int x = 8; 
    cout << "\nEn miFunc, la variable local x vale: " << x << endl; 
    {
        cout << "\nEn el bloque de miFunc, x vale: " << x;
        int x = 9; 

        cout << "\nLa misma varialbe local x vale: " << x; 

    }

    cout << "\nFuera del bloque, en miFunc(), x vale: " << x << endl; 
}