#include <iostream> 

using namespace std; 

int main(){
    int variableLocal = 5; 
    int *apLocal = &variableLocal; 
    int *apHeap = new int; 

    *apHeap = 7; 
    cout << "VariableLocal:  "<< variableLocal << endl; 
    cout << "*apLocal: " << *apLocal << endl; 
    cout << "*apheap: " << *apHeap << endl; 

    delete apHeap;
    apHeap = new int; 
    *apHeap = 9;
    cout << "*apHeap: "<< *apHeap << endl; 
    delete apHeap;
    return 0;

}