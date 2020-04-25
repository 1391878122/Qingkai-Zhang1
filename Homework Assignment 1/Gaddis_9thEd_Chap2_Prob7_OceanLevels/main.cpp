#include <iostream>
using namespace std;
 
int main(int argc, char** argv) {
    const float risinglevel=1.5e-3; //the rising ocean's level per year
    const float yearI=5; //after 5 years
    const float yearII=7; //after 7 years
    const float yearIII=10; //after 10 years
    float SealevelI;// rising ocean's level after 5 years 
    SealevelI=risinglevel*yearI;
    float SealevelII;// rising ocean's level after 7 years 
    SealevelII=risinglevel*yearII;
    float SealevelIII;// rising ocean's level after 10 years 
    SealevelIII=risinglevel*yearIII;
    cout<<"SealevelI = ";
    cout<<SealevelI<<"M"<<endl;
    cout<<"SealevelII = ";
    cout<<SealevelII<<"M"<<endl;
    cout<<"SealevelIII = ";
    cout<<SealevelIII<<"M"<<endl;
    return 0;}



