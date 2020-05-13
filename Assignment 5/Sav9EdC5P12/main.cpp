/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    char flag2;
    //Set the random number seed
    do{
    int num1=0,num2=0,num3=0,num4=0,num5=0,num6=0;
    char flag,flag1;
     cout << "Enter hour:"<<endl<<endl;
     cin >> num1;
     cout << "Enter minutes:"<<endl<<endl;
     cin >>num2;
     cout << "Enter A for AM, P for PM:"<<endl<<endl;
     cin >>flag;
     cout <<  "Enter waiting time:"<<endl<<endl;
     cin >>num3;
     if(num1>=10 && num2>=10)
     cout <<"Current time = "<<num1<<":"<<num2<<" "<<flag<<"M"<<endl;
     if(num1>=10 && num2<10)
     cout <<"Current time = "<<num1<<":0"<<num2<<" "<<flag<<"M"<<endl;
     if(num1<10 && num2>=10)
     cout <<"Current time = 0"<<num1<<":"<<num2<<" "<<flag<<"M"<<endl;
     if(num1<10 && num2<10)
     cout <<"Current time = 0"<<num1<<":0"<<num2<<" "<<flag<<"M"<<endl;
     switch(flag){
         case 'A':num6=num1*60+num2;
            break;
         case 'P':num6=num1*60+num2+60*12;
            break;
     }
     num6+=num3;
    if(num6>=24*60)
        num6-=24*60;
    num4 = num6 / 60;
    num5 = num6 %60;
    if(num4 >= 12){
        flag1 = 'P';
        num4 -= 12;
    }
    else
        flag1 = 'A';
    if(num4<10 && num5<10)
     cout <<"Time after waiting period = 0"<<num4<<":0"<<num5<<" "<<flag1<<"M"<<endl<<endl;
     if(num4<10 && num5>=10)
     cout <<"Time after waiting period = 0"<<num4<<":"<<num5<<" "<<flag1<<"M"<<endl<<endl;
     if(num4>=10 && num5<10)
     cout <<"Time after waiting period = "<<num4<<":0"<<num5<<" "<<flag1<<"M"<<endl<<endl;
     if(num4>10 && num5>10)
     cout <<"Time after waiting period = "<<num4<<":"<<num5<<" "<<flag1<<"M"<<endl<<endl;
     cout << "Again:"<<endl;
     cin >> flag2;
    if(flag2=='y')
    cout << endl;
    }while(flag2=='y');
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}