#include <iostream>   //I/O Library
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);
int fctrl(int);
bool isPrime(int);
int collatz(int);
int collatz1(int);
void timeconvert(int,int);
float calculate(float,int,float);
float calculate(int,int,int,int,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for MINMAX"<<endl;
    cout<<"Type 2 for Factorial"<<endl;
    cout<<"Type 3 for IsPrime"<<endl;
    cout<<"Type 4 for Collatz Sequence"<<endl;
    cout<<"Type 5 for Collatz Sequence With Output Of Sequence"<<endl;
    cout<<"Type 6 for Sav9EdC5P12"<<endl;
    cout<<"Type 7 for Savitch_9thEd_Chap5_Prob1_TimeConverter"<<endl;
    cout<<"Type 8 for Gaddis_9thEd_Chap6_Prob9_Present_Value"<<endl;
    cout<<"Type 9 for Gaddis_9thEd_Chap6_Prob10_Average"<<endl;
    cin>>choice;

    switch(choice){
        case '1':{
        int a,b,c,d,e;
        cin>>a>>b>>c;
        minmax(a,b,c,d,e);
        cout<<"Input 3 numbers"<<endl;
        cout<<"Min = "<<e<<endl;
        cout<<"Max = "<<d;
            break;
        }
        case '2':{
        int n;
        cin >> n;
        cout <<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
        cout <<"Input the number for the function."<<endl;
        cout<<n<<"! = " << fctrl(n);
            break;
        }
        case '3':{
        int n;
        cin >> n;
        cout << "Input a number to test if Prime."<<endl;

        if(isPrime(n))
        cout <<n<<" is not prime.";
        else
        cout <<n<<" is prime.";
            break;
        }
        case '4':{
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
            break;
        }
        case '5':{
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
            break;
        }
        case '6':{
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
            break;
        }
        case '7':{
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
            break;
        }
        case '8':{
        float rate,fvalue;
        int year;
        cout << "This is a Present Value Computation"<<endl;
        cout << "Input the Future Value in Dollars"<<endl;
        cin >> fvalue;
        cout << "Input the Number of Years" <<endl;
        cin >> year;
        cout << "Input the Interest Rate %/yr" <<endl;
        cin >> rate;
        cout << "The Present Value = $"<<fixed<<setprecision(2)<<calculate(fvalue,year,rate)+0.01;
            break;
        }
        case '9':{
         int num1,num2,num3,num4,num5;
        cout << "Find the Average of Test Scores"<<endl;
        cout << "by removing the lowest value."<<endl;
        cout << "Input the 5 test scores." <<endl;
        cin >> num1 >>num2>>num3>>num4>>num5;
        cout << "The average test score = "<<fixed<<setprecision(1)<<calculate(num1,num2,num3,num4,num5);
            break;
        }
        default:
            cout<<"Not an Option"<<endl;
    }

    //Clean Up

    //Exit stage right!
    return 0;
}
void minmax(int a,int b,int c,int &d,int &e){
    int min,max;
    if(a>b){
        min=b;
        max=a;
    }
    else{
        max=b;
        min=a;
    }
    if(c>max)
    max=c;
    if(c<min)
    min=c;
    d=max;
    e=min;
}
int fctrl(int n){
    int sum=1;
    for(int i=1;i<=n;i++)
       sum*=i;
    return sum;
}
bool isPrime(int n){
    bool status = false;
    for(int i=2;i<n;i++){
        if(n%i==0)
        status = true;
    }
    return status;
}
int collatz(int num1){
   int step=1,num2;
   num2=num1;
    while(num1!=1){
        step++;
        if(num1%2)
        num1=num1*3+1;
        else
        num1/=2;
    }
}
int collatz1(int num1){
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
float calculate(float fvalue,int year,float rate){
    float pvalue;
    pvalue = fvalue / (pow((1+rate*1.0/100),year));
    return pvalue;
}
float calculate(int num1,int num2,int num3,int num4,int num5){
    float sum,average;
    int lowest=100;
    sum = num1+num2+num3+num4+num5;
    if (num1<lowest){
        lowest=num1;
    }
    if (num2<lowest){
        lowest=num2;
    }
    if (num3<lowest){
        lowest=num3;
    }
    if (num4<lowest){
        lowest=num4;
    }
    if (num5<lowest){
        lowest=num5;
    }
    sum -= lowest;
    average = sum / 4;
    return average;
}
