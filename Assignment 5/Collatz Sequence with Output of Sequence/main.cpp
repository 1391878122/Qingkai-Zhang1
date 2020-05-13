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
int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
    
    //Exit stage right!
    return 0;
}
int collatz(int num1){
   int step=1,num2;
   num2=num1;
   cout<< num1 <<", ";
    while(num1!=1){
        step++;
        if(num1%2)
        num1=num1*3+1;
        else 
        num1/=2;
        if(num1!=1)
        cout << num1<<", ";
        else
        cout<<num1;
    }
    cout<<endl;
    return step;
}
