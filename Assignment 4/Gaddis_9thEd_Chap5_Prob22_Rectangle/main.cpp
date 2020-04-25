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
    char icon;
    int num,i,j;
    cin >> num >>icon;
    for(i=1;i<num;i++){
      for(j=0;j<num;j++) {
          cout<<icon;
          if(j==(num-1))
          cout<<endl;
      } 
    }
    for(j=0;j<num;j++) {
          cout<<icon;
      } 
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
