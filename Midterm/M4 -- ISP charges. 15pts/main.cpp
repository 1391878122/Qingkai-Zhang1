/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  ISP charges
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
    char package,cheapname;
    unsigned short hours;
    double cheap,save,sum,sum1=16.99,sum2=26.99,sum3=36.99;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    if(package =='a'||package =='A'){
        sum = 16.99;
        if(hours>=10 && hours<20){
            sum+= (hours-10)*0.95;
        }
        if(hours>=20){
            sum+= 9.5+(hours-20)*0.85;
        }
    }
    
    if(package =='b'||package =='B'){
        sum = 26.99;
        if(hours>=20 && hours<30){
            sum+= (hours-20)*0.74;
        }
        if(hours>=30){
            sum+= 7.4+(hours-30)*0.64;
        }
    }
     if(package =='c'||package =='C'){
        sum = 36.99;
    }
    
    cout<<"$"<<sum;
    
    if(hours>=10 && hours<20){
            sum1+= (hours-10)*0.95;
        }
    else if(hours>=20 && hours<30){
            sum1+= 9.5+(hours-20)*0.85;
            sum2+= (hours-20)*0.74;
    }
    else if(hours>=30 ){
           sum1+= 9.5+(hours-20)*0.85;
           sum2+= 7.4+(hours-30)*0.64;
    }
    //Output the Charge
    if(sum1<sum2){
        cheap = sum1;
        cheapname = 'A';
    }
    else{
        cheap = sum2;
        cheapname = 'B';
    }
    if(cheap>sum3){
        cheap=sum3;
        cheapname = 'C';
    }
    //Output the cheapest package and the savings
    cout<<fixed<<setprecision(2)<<" "<<cheapname<<" $"<<sum-cheap<<endl;
        
    //Exit
    return 0;
}
