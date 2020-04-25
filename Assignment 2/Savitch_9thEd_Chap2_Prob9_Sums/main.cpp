//System Libraries
#include <iostream>  //Input/Output Library
#include<iomanip>
using namespace std;

int main(int argc, char** argv) {
    
    float x;//Variable to input 10 times
    float Totsum,Possum,Negsum;//Sums
    
    //Initialize Variables
    Totsum=Possum=Negsum=0;
    
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    int i;
    for(i=0;i<=9;i++){
    cin>>x;
    x>0?Possum+=x:Negsum+=x;
    }  
 
    //Sum total simply sum of both positive and negative
    Totsum=Possum+Negsum;

    //Display Outputs
    
    cout<<"Negative sum ="<<setw(4)<<Negsum<<endl;
    cout<<"Positive sum ="<<setw(4)<<Possum<<endl;
    cout<<"Total sum    ="<<setw(4)<<Totsum;
    //Exit stage right!
    return 0;
}
