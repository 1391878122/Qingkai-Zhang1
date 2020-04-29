/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Histogram
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

    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    char a,b,c,d;
    cin>>d>>c>>b>>a;
    int num1,num2,num3,num4;
    int i;
    num1 = a-'0';
    num2 = b-'0';
    num3 = c-'0';
    num4 = d-'0';
    if(a>='0' && a<='9'){
        cout<<a<<" ";
        for(i=0;i<num1;i++)
        cout<<"*";
        cout<<endl;
    }
    else{
        cout<<a<<" ?"<<endl;
    }
        if(b>='0' && b<='9'){
        cout<<b<<" ";
        for(i=0;i<num2;i++)
        cout<<"*";
        cout<<endl;
    }
      else{
        cout<<b<<" ?"<<endl;
    }
        if(c>='0' && c<='9'){
        cout<<c<<" ";
        for(i=0;i<num3;i++)
        cout<<"*";
        cout<<endl;
    }
      else{
        cout<<c<<" ?"<<endl;
    }
        if(d>='0' && d<='9'){
        cout<<d<<" ";
        for(i=0;i<num4;i++)
        cout<<"*";
        cout<<endl;
    }
      else{
        cout<<d<<" ?"<<endl;
    }
    
    //Histogram Here

    
    //Exit
    return 0;
}
