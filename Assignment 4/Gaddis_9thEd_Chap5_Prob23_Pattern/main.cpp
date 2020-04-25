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
    
    int num,i,j;
    cin >> num ;
    for(i=1;i<=num;i++){
      for(j=0;j<i;j++) {
          cout<<'+';
          if(j==(i-1))
          cout<<endl<<endl;
      } 
    }
   
    for(i=num;i>0;i--){
      for(j=0;j<i;j++) {
          cout<<'+';
          if(j==(i-1)&&(i!=1))
          cout<<endl<<endl;
      } 
    }
     
   
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

