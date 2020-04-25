//System Libraries
#include <iostream>  //Input/Output Library
#include<cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
     int num,sum=0,i;
    cin >> num;
    for(i=1;i<=num;i++){
        sum += (pow(2,(i-1)));
    }
    //Declare Variables
   int dollars=sum/100;      //How many Dollars in the result
   int pennies=sum%100; //How many Pennies in the result
   cout<<"Pay = $"<<dollars<<"."<<(pennies<10?"0":"")<<pennies;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
