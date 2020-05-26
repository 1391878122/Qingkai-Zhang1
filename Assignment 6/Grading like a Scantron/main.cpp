/* 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose: Compare the answer sheet to the key
 *          and grade
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(const string &);
void read(string[],int );
int  compare(string [],string [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string key,answers,score;
    int size = 21;
    string fileKey[size],fileAns[size];
    read(fileKey,size);
    read(fileAns,size);
   
    
    float pRight;
     pRight=compare(fileKey,fileAns,size);
    cout<<endl<<"Percentage Correct = "<<pRight*1.0/(size-1)*100<<"%"<<endl;
 /*   //Initialize or input i.e. set variable values
    read(fileKey,key);
    read(fileAns,answers);
    
    //Score the exam
   // pRight=compare(key,answers,score);
    
    //Display the outputs
    cout<<"C/W     ";print(score);
    cout<<"Percentage Correct = "<<pRight/score.size()*100<<"%"<<endl;
    */
    //Exit stage right or left!
    return 0;
}
void read(string fileKey[], int size){
    for(int i=0;i<size;i++)
    cin >> fileKey[i];
}
int  compare(string a1[],string a2[],int size){
    cout << "C/W     ";
    int j = 0;
    for(int i=1;i<size;i++){
        if(a1[i]==a2[i]){
            cout << "C ";
            j++;}
        else
            cout << "W ";
    }
   
    return j;
}

