/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Convert a number to English check amount
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short number;
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    int num1,num2,num3,num4;
    num1 = number / 1000;
    num2 = (number-num1*1000) / 100;
    num3 = (number-num1*1000-num2*100) / 10;
    num4 = number%10;
    if(num1>0){
    switch(num1){
        case 1: cout<<"One ";
                break;
        case 2: cout<<"Two ";
                break;
        case 3: cout<<"Three ";
                break;
        case 4: cout<<"Four ";
                break;
        case 5: cout<<"Five ";
                break;
        case 6: cout<<"Six ";
                break;
        case 7: cout<<"Seven ";
                break;
        case 8: cout<<"Eight ";
                break;
        case 9: cout<<"Nine ";
                break;
    }
    cout<<"Thousand ";}
    if(num2>0){
    switch(num2){
        case 1: cout<<"One ";
                break;
        case 2: cout<<"Two ";
                break;
        case 3: cout<<"Three ";
                break;
        case 4: cout<<"Four ";
                break;
        case 5: cout<<"Five ";
                break;
        case 6: cout<<"Six ";
                break;
        case 7: cout<<"Seven ";
                break;
        case 8: cout<<"Eight ";
                break;
        case 9: cout<<"Nine ";
                break;
    }
    cout<<"Hundred ";}
    if(num3>1){
    switch(num3){
        case 2:cout<<"Twenty ";
                break;
        case 3: cout<<"Thirty ";
                break;
        case 4: cout<<"Forty ";
                break;
        case 5: cout<<"Fifty ";
                break;
        case 6: cout<<"Sixty ";
                break;
        case 7: cout<<"Seventy ";
                break;
        case 8: cout<<"Eighty ";
                break;
        case 9: cout<<"Ninety ";
                break;
        }
    switch(num4){
        case 1: cout<<"One ";
                break;
        case 2: cout<<"Two ";
                break;
        case 3: cout<<"Three ";
                break;
        case 4: cout<<"Four ";
                break;
        case 5: cout<<"Five ";
                break;
        case 6: cout<<"Six ";
                break;
        case 7: cout<<"Seven ";
                break;
        case 8: cout<<"Eight ";
                break;
        case 9: cout<<"Nine ";
                break;
        }
    }
    else if(num3==1){
        switch(num4){
        case 0: cout<<"Ten ";
                break;
        case 1: cout<<"Eleven ";
                break;
        case 2: cout<<"Twelve ";
                break;
        case 3: cout<<"Thirteen ";
                break;
        case 4: cout<<"Fourteen ";
                break;
        case 5: cout<<"Fifteen ";
                break;
        case 6: cout<<"Sixteen ";
                break;
        case 7: cout<<"Seventeen ";
                break;
        case 8: cout<<"Eighteen ";
                break;
        case 9: cout<<"Nineteen ";
                break;
        }
    }
    else if(num3==0){
        switch(num4){
        case 1: cout<<"One ";
                break;
        case 2: cout<<"Two ";
                break;
        case 3: cout<<"Three ";
                break;
        case 4: cout<<"Four ";
                break;
        case 5: cout<<"Five ";
                break;
        case 6: cout<<"Six ";
                break;
        case 7: cout<<"Seven ";
                break;
        case 8: cout<<"Eight ";
                break;
        case 9: cout<<"Nine ";
                break;
        }
    }
    //Calculate the 1000's, 100's, 10's and 1's
    
    //Output the check value
    
    cout<<"and no/100's Dollars"<<endl;
    
    //Exit
    return 0;
}