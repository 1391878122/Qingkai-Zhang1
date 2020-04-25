//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    char choice;
    int time;
    float fee;
    cin>>choice>>time;
    switch (choice){
        case 'A': fee=9.95;
                  if(time>10)
                  fee=fee+(time-10)*2;
                break;
    
        case 'B': fee=14.95;
                  if(time>20)
                  fee=fee+(time-20)*1;
                break;
        case 'C': fee=19.95;
    }
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cout<<"Bill ="<<" $ "<<fee;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

