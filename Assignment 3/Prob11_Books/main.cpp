//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int n,p;
    cin>>n;
if (n==0)
    p=0;
if (n==1)
    p=5;
if (n==2)
    p=15;
if (n==3)
    p=30;
if (n>=4)
    p=60;
cout<<"Book Worm Points"<<endl;    
cout<<"Input the number of books purchased this month."<<endl;
cout<<"Books purchased ="<<setw(3)<<n<<endl;
cout<<"Points earned   ="<<setw(3)<<p;
    //Set the random number seed
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

