//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {
    //Set the random number seed
    double a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e;
    f=(a+b+c+d+e)/5;
    cout<<"Input 5 numbers to average."<<endl;
    cout<<"The average = "<<setprecision(1)<<fixed<<f;
    
    return 0;
}