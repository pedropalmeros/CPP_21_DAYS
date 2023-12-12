#include <iostream>

using namespace std;

// AddIntegers function
int AddIntegers (int x, int y){
    cout << "AddIntegers has received " << x << " and " << y << " to be added." << endl; 
    return x + y;
}

int main(){
    cout << "Hello from main";

    int a, b, c;

    cout << "Introduce the frist element: ";
    cin >> a;

    cout << "Introduce the second element: ";
    cin >> b;

    cout << "Calling the AddIntegers function" << endl;
    c = AddIntegers(a,b);

    cout << "Once again from main." << endl;
    cout << "The result of the sum is : " << c <<  endl;
    cout << "Exiting..." << endl; 
    return 0;
}