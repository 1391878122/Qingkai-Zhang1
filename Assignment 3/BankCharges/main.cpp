//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {


float c,p,b;
    cin>>b>>c;
if (c<20)
    p=0.10*c;
if (20<=c && c<=39)
    p=0.08*c;
if (40<=c && c<=59)
    p=0.06*c;
if (c>=60)
    p=0.04*c;
float lb;
if (b<400)
    lb=15;
if (b>400)
    lb=0;
const float m = 10.00;

float nb;
if (b<400)
    nb=b-p-m-lb;
if (b>=400)
    nb=b-p-m;
cout<<"Monthly Bank Fees"<<endl;    
cout<<"Input Current Bank Balance and Number of Checks"<<endl;
cout<<"Balance     "<<"$"<<setw(9)<<setprecision(2)<<fixed<<b<<endl;
cout<<"Check Fee   "<<"$"<<setw(9)<<setprecision(2)<<fixed<<p<<endl;
cout<<"Monthly Fee "<<"$"<<setw(9)<<setprecision(2)<<fixed<<m<<endl;
cout<<"Low Balance "<<"$"<<setw(9)<<setprecision(2)<<fixed<<lb<<endl;
cout<<"New Balance "<<"$"<<setw(9)<<setprecision(2)<<fixed<<nb;
    //Set the random number seed
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

