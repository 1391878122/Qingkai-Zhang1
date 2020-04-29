/* 
 * File:   main.cpp
 * Author: YOUR NAME GOES HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Draw the shape
    int i,j,k;
    switch(shape){
    case 'x':
    if(x%2){ //odd number of lines
    
    for(int i=x;i>=1;i--){
    for(int j=x;j>=1;j--){
    if(j==i || j==(x-i+1))
    cout<<j;
    else
    cout<<" ";  }
    cout<<"\n";
     }
    }
    else {//even number of lines
    for(int i=1;i<=x;i++){
    for(int j=1;j<=x;j++){
    if(j==i || j==(x-i+1))
    {
    cout<<j;
    }
    else
    cout<<" ";
    }
    cout<<"\n";
            }
        }
    break;
    case 'b':
    if(x%2){ //odd number of lines
    for(int i=x;i>=1;i--){
    for(int j=x;j>=1;j--){
    if(j==i)
    cout<<j;
    else
    cout<<" ";  }
    cout<<"\n";
     }
    }
    else {//even number of lines
    for(int i=1;i<=x;i++){
    for(int j=1;j<=x;j++){
    if(j==i)
    {
    cout<<j;
    }
    else
    cout<<" ";
    }
    cout<<"\n";
            }
        }
    break;
    case 'f':
    if(x%2){ //odd number of line
    for(int i=x;i>=1;i--){
    for(int j=x;j>=1;j--){
    if(j==(x-i+1))
    cout<<j;
    else
    cout<<" ";  }
    cout<<"\n";
     }
    }
    else {//even number of lines
    for(int i=1;i<=x;i++){
    for(int j=1;j<=x;j++){
    if( j==(x-i+1))
    {
    cout<<j;
    }
    else
    cout<<" ";
    }
    cout<<"\n";
            }
        }
    break;
    }   
}

void problem2(){
     //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    char a,b,c,d;
    cin>>d>>c>>b>>a;
    int num1,num2,num3,num4;
    int i;
    num1 = a-'0';
    num2 = b-'0';
    num3 = c-'0';
    num4 = d-'0';
    if(a>='0' && a<='9'){
        cout<<a<<" ";
        for(i=0;i<num1;i++)
        cout<<"*";
        cout<<endl;
    }
    else{
        cout<<a<<" ?"<<endl;
    }
        if(b>='0' && b<='9'){
        cout<<b<<" ";
        for(i=0;i<num2;i++)
        cout<<"*";
        cout<<endl;
    }
      else{
        cout<<b<<" ?"<<endl;
    }
        if(c>='0' && c<='9'){
        cout<<c<<" ";
        for(i=0;i<num3;i++)
        cout<<"*";
        cout<<endl;
    }
      else{
        cout<<c<<" ?"<<endl;
    }
        if(d>='0' && d<='9'){
        cout<<d<<" ";
        for(i=0;i<num4;i++)
        cout<<"*";
        cout<<endl;
    }
      else{
        cout<<d<<" ?"<<endl;
    }    
}

void problem3(){
     unsigned short number;
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    int num1,num2,num3,num4;
    num1 = number / 1000;
    num2 = (number-num1*1000) / 100;
    num3 = (number-num1*1000-num2*100) / 10;
    num4 = number%10;
    if(num1){
    switch(num1){
        case 1: cout<<"One ";
                break;
        case 2:cout<<"Two ";
                break;
        case 3: cout<<"Three ";
                break;
        case 4:cout<<"Four ";
                break;
        case 5: cout<<"Five ";
                break;
        case 6:cout<<"Six ";
                break;
        case 7: cout<<"Seven ";
                break;
        case 8:cout<<"Eight ";
                break;
        case 9:cout<<"Nine ";
                break;
    }
    cout<<"Thousand ";}
    if(num2){
    switch(num2){
        case 1: cout<<"One ";
                break;
        case 2:cout<<"Two ";
                break;
        case 3: cout<<"Three ";
                break;
        case 4:cout<<"Four ";
                break;
        case 5: cout<<"Five ";
                break;
        case 6:cout<<"Six ";
                break;
        case 7: cout<<"Seven ";
                break;
        case 8:cout<<"Eight ";
                break;
        case 9:cout<<"Nine ";
                break;
    }
    cout<<"Hundred ";}
    if(num3>1){
    switch(num3){
        case 2:cout<<"Twenty ";
                break;
        case 3: cout<<"Thirty ";
                break;
        case 4:cout<<"Forty ";
                break;
        case 5: cout<<"Fifty ";
                break;
        case 6:cout<<"Sixty ";
                break;
        case 7: cout<<"Seventy ";
                break;
        case 8:cout<<"Eighty ";
                break;
        case 9:cout<<"Ninety ";
                break;
        }
    switch(num4){
        case 1: cout<<"One ";
                break;
        case 2:cout<<"Two ";
                break;
        case 3: cout<<"Three ";
                break;
        case 4:cout<<"Four ";
                break;
        case 5: cout<<"Five ";
                break;
        case 6:cout<<"Six ";
                break;
        case 7: cout<<"Seven ";
                break;
        case 8:cout<<"Eight ";
                break;
        case 9:cout<<"Nine ";
                break;
        }
    }
    else if(num3==1){
        switch(num4){
        case 1: cout<<"Eleven ";
                break;
        case 2:cout<<"Twelve ";
                break;
        case 3: cout<<"Thirteen ";
                break;
        case 4:cout<<"Fourteen ";
                break;
        case 5: cout<<"Fifteen ";
                break;
        case 6:cout<<"Sixteen ";
                break;
        case 7: cout<<"Seventeen ";
                break;
        case 8:cout<<"Eighteen ";
                break;
        case 9:cout<<"Nine ";
                break;
        }
    }
    else if(num3==0){
        switch(num4){
        case 1: cout<<"One ";
                break;
        case 2:cout<<"Two ";
                break;
        case 3: cout<<"Three ";
                break;
        case 4:cout<<"Four ";
                break;
        case 5: cout<<"Five ";
                break;
        case 6:cout<<"Six ";
                break;
        case 7: cout<<"Seven ";
                break;
        case 8:cout<<"Eight ";
                break;
        case 9:cout<<"Nine ";
                break;
        }
    }
    //Calculate the 1000's, 100's, 10's and 1's
    
    //Output the check value
    
    cout<<"and no/100's Dollars"<<endl;    
}

void problem4(){
    char package,cheapname;
    unsigned short hours;
    double cheap,save,sum,sum1=16.99,sum2=26.99,sum3=36.99;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    if(package =='a'||package =='A'){
        sum = 16.99;
        if(hours>=10 && hours<20){
            sum+= (hours-10)*0.95;
        }
        if(hours>=20){
            sum+= 9.5+(hours-20)*0.85;
        }
    }
    
    if(package =='b'||package =='B'){
        sum = 26.99;
        if(hours>=20 && hours<30){
            sum+= (hours-20)*0.74;
        }
        if(hours>=30){
            sum+= 7.4+(hours-30)*0.64;
        }
    }
     if(package =='c'||package =='C'){
        sum = 36.99;
    }
    
    cout<<"$"<<sum;
    
    if(hours>=10 && hours<20){
            sum1+= (hours-10)*0.95;
        }
    else if(hours>=20 && hours<30){
            sum1+= 9.5+(hours-20)*0.85;
            sum2+= (hours-20)*0.74;
    }
    else if(hours>=30 ){
           sum1+= 9.5+(hours-20)*0.85;
           sum2+= 7.4+(hours-30)*0.64;
    }
    //Output the Charge
    if(sum1<sum2){
        cheap = sum1;
        cheapname = 'A';
    }
    else{
        cheap = sum2;
        cheapname = 'B';
    }
    if(cheap>sum3){
        cheap=sum3;
        cheapname = 'C';
    }
    //Output the cheapest package and the savings
    cout<<fixed<<setprecision(2)<<" "<<cheapname<<" $"<<sum-cheap<<endl;   
}

void problem5(){
     float payRate;
    unsigned short hrsWrkd,hours;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if(hrsWrkd<=20){
        hours = hrsWrkd;
    }
    if(hrsWrkd>=20 && hrsWrkd<40){
        hours = 20 + (hrsWrkd-20)*1.5;
    }
    if(hrsWrkd>=40){
        hours = 20 + 30 +(hrsWrkd-40)*2;
    }
    
    //Output the check
    cout<<"$"<<fixed<<setprecision(2)<<payRate*hours<<endl;
    
}

void problem6(){
   float x,fx=0,term;
    int nterms,i,j;
    double sum=0;
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    //Calculate Sequence sum here
    for(i=1;i<=nterms;i++){
        j=2*i-1;
        fx=pow(x,j)* pow(-1,i+1);
        for(j;j>=1;j--)
         fx/=j;
        sum+=fx;
        
    }
    
    //Output the result here
    cout<<fixed<<setprecision(6)<<sum<<endl;  
}
