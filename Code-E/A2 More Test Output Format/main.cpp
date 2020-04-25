/* 
 * File: main.app
 * Author: Qingkai Zhang
 * Date: 3/11/20
 * Purpose: Run the template provided and examine the input and output
            fixed, setprecision, showpoint, setw(), formatting aspects, iomanip.
 * Version: 3.0
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    float a,b,c,d;
    std::cin >> a >> b >> c >> d;
    cout <<setw(9)<<setprecision(0)<<fixed<<a<<setw(10)<<setprecision(1)<<a<<setw(10)<<setprecision(2)<<a<<endl;
    cout <<setw(9)<<setprecision(0)<<fixed<<b<<setw(10)<<setprecision(1)<<b<<setw(10)<<setprecision(2)<<b<<endl;
    cout <<setw(9)<<setprecision(0)<<fixed<<c<<setw(10)<<setprecision(1)<<c<<setw(10)<<setprecision(2)<<c<<endl;
    cout <<setw(9)<<setprecision(0)<<fixed<<d<<setw(10)<<setprecision(1)<<d<<setw(10)<<setprecision(2)<<d;
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    
    //Initialize or input data here
    
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}
