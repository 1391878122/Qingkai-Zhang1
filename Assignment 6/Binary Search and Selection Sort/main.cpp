/* 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose:  Binary Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void selSrt(int [],int);
bool binSrch(int [],int,int,int&);
void swap(int&,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx = 0,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    selSrt(array,SIZE);
    binSrch(array,SIZE,val,indx);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
    return 0;
}
void fillAry(int a[],int size){
    for(int i=0;i<size;i++)
        cin >> a[i];
}
bool binSrch(int a[],int size,int value,int &indx){
    int first = 0,
        last = size-1,
        middle,
        position = -1;
    bool found = false;
    while(!found && first <= last){
        middle = (first + last)/2;
        if(a[middle] == value){
            found = true;
            position = middle;
        }
        else if(a[middle]>value)
            last = middle-1;
        else
            first = middle+1;
    }
    indx = position;
    return true;
}
void selSrt(int array[],int size){
    int minIndex;
    int minnum;
    for(int start = 0;start<(size-1);start++){
        minIndex = start;
        minnum = array[start];
        for(int index=start+1;index<size;index++){
            if(array[index]<minnum){
                minnum=array[index];
                minIndex=index;
            }
        }
        swap(array[minIndex],array[start]);
        
    }
}
void swap(int &a,int &b){
    int temp = a;
     a = b;
     b = temp;
}
void prntAry(int a[],int size,int rowcount){
    for(int i=0;i<size;i++){
        cout << a[i] <<" ";
        if(((i-9)%10)==0)
            cout << endl;
    }
    cout << endl;
}
