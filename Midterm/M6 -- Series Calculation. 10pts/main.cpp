/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x,fx=0,term;
    int nterms,i,j;
    double sum=0;
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    //Calculate Sequence sum here
    for(i=1;i<=nterms;i++){
        j=2*i-1;
        fx=pow(x,j)* pow(-1,i+1);
        for(j;j>=1;j--)
         fx/=j;
        sum+=fx;
        
    }
    
    //Output the result here
    cout<<fixed<<setprecision(6)<<sum<<endl;
    
    //Exit
    return 0;
}