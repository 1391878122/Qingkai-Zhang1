
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
 
    cout << "Temperature Converter" << endl;
    
    cout << "Input Degrees Fahrenheit" << endl;
 
     
     float F; //Degrees·Fahrenheit
     cin >>F; 
     
     float C; //Degrees·Centigrade
      C = 5.0/9.0*(F-32.0);
    
        
        cout<< setprecision(1)<<fixed << F << " Degrees Fahrenheit = " << setprecision(1)<<fixed << C << " Degrees Centigrade";
    //Set the random number seed
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}