/* 
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    
    //Initialize Variables
    int n;
    cin >> n;
    cout <<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
    cout <<"Input the number for the function."<<endl;
    cout<<n<<"! = " << fctrl(n);;
   
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}
int fctrl(int n){
    int sum=1;
    for(int i=1;i<=n;i++)
       sum*=i; 
    return sum;
}