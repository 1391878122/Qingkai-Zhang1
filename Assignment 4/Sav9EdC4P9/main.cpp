#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    float num1,num2,num3,max1,max2;
    cin >> num1 >> num2 >> num3;
    cout <<"Enter first number:"<<endl<<endl;
    cout <<"Enter Second number:"<<endl<<endl;
    cout <<"Enter third number:"<<endl<<endl;
    
    num1>num2 ? max1=num1 : max1=num2;
    max1>num3 ? max2=max1 : max2=num3;
    
    cout <<"Largest number from two parameter function:"<<endl<<max1<<endl<<endl;
    cout <<"Largest number from three parameter function:"<<endl<<max2<<endl;

    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

