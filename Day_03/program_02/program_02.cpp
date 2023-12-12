#include <iostream>

using namespace std;

int main(){
    unsigned short int Width = 5, Length;
    Length = 10;

    //create a new variable of the type unsigned short and initialize it wiht the
    // result of the product  of Width per Length
    unsigned short int Area = (Width * Length);

    cout << "Width: " << Width << endl; 
    cout << "Length: " << Length << endl; 
    cout << "Area: " << Area << endl; 
    return 0;
}