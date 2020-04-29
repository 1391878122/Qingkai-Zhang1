/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd,hours;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if(hrsWrkd<=20){
        hours = hrsWrkd;
    }
    if(hrsWrkd>=20 && hrsWrkd<40){
        hours = 20 + (hrsWrkd-20)*1.5;
    }
    if(hrsWrkd>=40){
        hours = 20 + 30 +(hrsWrkd-40)*2;
    }
    
    //Output the check
    cout<<"$"<<fixed<<setprecision(2)<<payRate*hours<<endl;
    
    //Exit
    return 0;
}
