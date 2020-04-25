//System Libraries
#include <iostream>  //Input/Output Library
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    const float exchange = 0.264179;
    int num1,num2,num4,num5;
    float num3,num6;
    char command;
    
    while(command!='n'){
        cout<<"Car 1"<<endl<<"Enter number of liters of gasoline:"<<endl;
        cin>>num1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>num2;
        num3=num2*1.0/num1/exchange;
        cout<<fixed<<setprecision(2)<<"miles per gallon: "<<num3<<endl<<endl;
        
        cout<<"Car 2"<<endl<<"Enter number of liters of gasoline:"<<endl;
        cin>>num4;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>num5;
        num6=num5*1.0/num4 /exchange;
        cout<<fixed<<setprecision(2)<<"miles per gallon: "<<num6<<endl<<endl;
        
        (num3>num6)?(cout<<"Car 1 is more fuel efficient"):(cout<<"Car 2 is more fuel efficient");
        cout<<endl<<endl<<"Again:"<<endl;
        
        cin>>command;
        if(command=='y')
        cout<<endl;
    }
    
    //Set the random number seed
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}