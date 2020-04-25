//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    char play1,play2;
    int flag;
    cin >>play1>>play2;
    if((play2=='r')||(play2=='R')){
        if((play1=='r')||(play1=='R')) flag = 3;
        if((play1=='p')||(play1=='P')) flag = 0;    
        if((play1=='s')||(play1=='S')) flag = 2;
    } 
    
     if((play2=='s')||(play2=='S')){
        if((play1=='r')||(play1=='R')) flag = 2;
        if((play1=='p')||(play1=='P')) flag = 1;    
        if((play1=='s')||(play1=='S')) flag = 3;
    } 
    if((play2=='p')||(play2=='P')){
        if((play1=='r')||(play1=='R')) flag = 0;
        if((play1=='p')||(play1=='P')) flag = 3;    
        if((play1=='s')||(play1=='S')) flag = 1;
    }   
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    switch(flag){
        case 0:cout<<"Paper covers rock.";
                break;
        case 1:cout<<"Scissors cuts paper.";
                break;
        case 2:cout<<"Rock breaks scissors.";
                break;
        case 3:cout<<"Nobody wins.";
                break;       
    }
    //Set the random number seed
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
