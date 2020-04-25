//This program determines the size of char,integers,float,double.
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout << " The size of an integer is " << sizeof(char);
    cout << "bytes.\n" ;
    cout << "The size of an integer is " << sizeof(int);
    cout << "bytes.\n" ;
    cout << "The size of an integer is " << sizeof(float);
    cout << "bytes.\n" ;
    cout << " The size of an integer is " << sizeof(double);
    cout << "bytes.\n" ;
    return 0;
}

