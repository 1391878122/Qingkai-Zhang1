//System Libraries
#include <iostream>  //Input/Output Library
#include<string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    string str1,str2,str3,str4;
    
    cin >> str1 >>str2>>str3;
    if(str3<str2){
    str4 = str3;
    str3 = str2;
    str2 = str4;}
    
    if(str2<str1){
    str4 = str2;
    str2 = str1;
    str1 = str4;}
    
    if(str3<str2){
    str4 = str3;
    str3 = str2;
    str2 = str4;}
    
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cout << str1<<endl<<str2<<endl<<str3;
    //Set the random number seed
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

