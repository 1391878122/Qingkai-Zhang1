/* 
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    
    //Initialize Variables
    int n;
    cin >> n;
    cout << "Input a number to test if Prime."<<endl;
    
    if(isPrime(n))
    cout <<n<<" is not prime.";
    else
    cout <<n<<" is prime.";
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}
bool isPrime(int n){
    bool status = false;
    for(int i=2;i<n;i++){
        if(n%i==0)
        status = true;
    }
    return status;
}