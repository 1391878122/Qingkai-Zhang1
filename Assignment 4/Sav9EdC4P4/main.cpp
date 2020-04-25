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
    float num1,num2,num3; 
    char command;
    while(command!='n'){
    cout<<"Enter current price:"<<endl<<"Enter year-ago price:"<<endl<<"Inflation rate: ";
    cin>>num1>>num2>>command;
    num3=(num1-num2)/num2*100;
    cout<<fixed<<setprecision(2)<<num3<<"%"<<endl<<endl<<"Again:"<<endl;
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

