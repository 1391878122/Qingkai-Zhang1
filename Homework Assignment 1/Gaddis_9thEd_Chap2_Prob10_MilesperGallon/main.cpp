#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    const float GallonsofGasUsed= 15;
    const float Milesdriven=375; //traveling distance before refueling
    float MPG;// miles per gallon
    MPG=Milesdriven/GallonsofGasUsed;
    cout<<"MPG = ";
    cout<<MPG<<"mil/gal"<<endl;
    return 0;}

