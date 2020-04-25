//System Libraries
#include <iostream>  //Input/Output Library
#include<iomanip>
using namespace std;

int main() {
    int pr,h;
    float pc;
    cout <<"This program calculates the gross paycheck." <<endl;
    cout <<"Input the pay rate in $'s/hr and the number of hours." <<endl;
    cin >> pr >> h;
    if(h<=40)
        pc = pr*h;
    else
        pc = pr*40+pr*(h-40)*2;
    cout <<"Paycheck = $" <<fixed<<setw(7)<<setprecision(2)<<pc;
    return 0;
}