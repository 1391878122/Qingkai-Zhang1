/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include<string>
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void timeconvert(int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    char flag2;
    cout << "Military Time Converter to Standard Time" <<endl;
    cout << "Input Military Time hh:mm" << endl;
    //Set the random number seed
    do{
        int num1,num2;
        char a;
        cin >> setw(2) >> num1;
        cin >> setw(1) >> a;
        cin >> setw(2) >> num2;
        timeconvert(num1,num2);
        cout << "Would you like to convert another time (y/n)"<<endl;
        cin >> flag2;
    
    }while(flag2=='y'||flag2=='Y');
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
void timeconvert(int num1,int num2){
    if(num1>24||num2>60)
        cout << num1 << ":" << num2 << " is not a valid time"<<endl;
    else if(num1>0 && num1<12)
        cout << num1 << ":" << num2 << " = "<< num1 << ":" << num2 <<" AM"<<endl;
    else if(num1==0)
        cout << "0"<<num1 << ":" << num2 << " = "<< num1+12 << ":" << num2 <<" AM"<<endl;
    else if(num1>12 && num1<24)
        cout << num1 << ":" << num2 << " = "<< num1-12 << ":" << num2 <<" PM"<<endl;
    else if(num1==12)
        cout << num1 << ":" << num2 << " = "<< num1 << ":" << num2 <<" PM"<<endl;
    
}

