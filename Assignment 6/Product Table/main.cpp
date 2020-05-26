/* 
 * File:   main.cpp
 * Author: 
 * Created:
 * Purpose:  
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    /*
    //Declare Variables
    const int ROWS=6;
    int tablSum[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tablSum,ROWS);
    
    //Display the outputs
    prntTbl(tablSum,ROWS);
*/
    //Exit stage right or left!
    cout<<"Think of this as a Product/Muliplication Table"<<endl<<"           C o l u m n s"<<endl;
    cout<<"     |   1   2   3   4   5   6"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"   1 |";
    for(int i=1;i<=6;i++)
        cout<<setw(4)<<i;
        cout<<endl;
    cout<<"R  2 |";
    for(int i=1;i<=6;i++)
        cout<<setw(4)<<i*2;   
        cout<<endl;
    cout<<"O  3 |";
     for(int i=1;i<=6;i++)
        cout<<setw(4)<<i*3;   
        cout<<endl;
    cout<<"W  4 |";
    for(int i=1;i<=6;i++)
        cout<<setw(4)<<i*4;   
        cout<<endl;
    cout<<"S  5 |";
    for(int i=1;i<=6;i++)
        cout<<setw(4)<<i*5;   
        cout<<endl;
  
     cout<<"   6 |";
    for(int i=1;i<=6;i++)
        cout<<setw(4)<<i*6;   
        cout<<endl;
    return 0;
}