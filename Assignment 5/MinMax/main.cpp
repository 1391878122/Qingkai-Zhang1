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
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int a,b,c,d,e;
    cin>>a>>b>>c;
    minmax(a,b,c,d,e);
    cout<<"Input 3 numbers"<<endl;
    cout<<"Min = "<<e<<endl;
    cout<<"Max = "<<d;
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}
void minmax(int a,int b,int c,int &d,int &e){
    int min,max;
    if(a>b){
        min=b;
        max=a;
    }
    else{
        max=b;
        min=a;
    }
    if(c>max)
    max=c;
    if(c<min)
    min=c;
    d=max;
    e=min;
}