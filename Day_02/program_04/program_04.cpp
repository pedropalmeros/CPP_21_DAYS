#include <iostream>

using namespace std;

// TestFunction declaration
void TestFunction(){
    cout << "We are inside the TestFunction" << endl;
}

//Main function 
int main(){
    cout << "We are from main function" << endl;
    TestFunction();
    cout << "We are back into main function" << endl;
    return 0;
}