/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float calculate(int,int,int,int,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    int num1,num2,num3,num4,num5;
    cout << "Find the Average of Test Scores"<<endl;
    cout << "by removing the lowest value."<<endl;
    cout << "Input the 5 test scores." <<endl;
    cin >> num1 >>num2>>num3>>num4>>num5;
    cout << "The average test score = "<<fixed<<setprecision(1)<<calculate(num1,num2,num3,num4,num5);
    //Exit stage right or left!
    return 0;
}
float calculate(int num1,int num2,int num3,int num4,int num5){
    float sum,average;
    int lowest=100;
    sum = num1+num2+num3+num4+num5;
    if (num1<lowest){
        lowest=num1;
    }
    if (num2<lowest){
        lowest=num2;
    }
    if (num3<lowest){
        lowest=num3;
    }
    if (num4<lowest){
        lowest=num4;
    }
    if (num5<lowest){
        lowest=num5;
    }
    sum -= lowest;
    average = sum / 4;
    return average;
}