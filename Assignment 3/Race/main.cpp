//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
//User Libraries

//Global Constants, no Global Variables are allowed


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){

float Runner1,Runner2,Runner3;
float Rt1, Rt2, Rt3;
string name1,name2,name3;
string run1,run2,run3;
	
cin>>name1>>Rt1>>name2>>Rt2>>name3>>Rt3;  

     if ((Rt1<Rt2)&&(Rt2<Rt3)){
	    Runner1=Rt1;
	    run1=name1;
	    Runner2=Rt2;
	    run2=name2;
	    Runner3=Rt3;
	    run3=name3;
	}
	
	 if ((Rt1<Rt3)&&(Rt3<Rt2)){
	    Runner1=Rt1;
	    run1=name1;
	    Runner2=Rt3;
	    run2=name3;
	    Runner3=Rt2;
	    run3=name2;
	}
    if ((Rt2<Rt1)&&(Rt1<Rt3)){
	    Runner1=Rt2;
	    run1=name2;
	    Runner2=Rt1;
	    run2=name1;
	    Runner3=Rt3;
	    run3=name3;
	}
   if ((Rt2<Rt3)&&(Rt3<Rt1)){
	    Runner1=Rt2;
	    run1=name2;
	    Runner2=Rt3;
	    run2=name3;
	    Runner3=Rt1;
	    run3=name1;
	}
	 if ((Rt3<Rt1)&&(Rt1<Rt2)){
	    Runner1=Rt3;
	    run1=name3;
	    Runner2=Rt1;
	    run2=name1;
	    Runner3=Rt2;
	    run3=name2;
	}
	 if ((Rt3<Rt2)&&(Rt2<Rt1)){
	    Runner1=Rt3;
	    run1=name3;
	    Runner2=Rt2;
	    run2=name2;
	    Runner3=Rt1;
	    run3=name1;
	}
	cout<<"Race Ranking Program"<<endl;
	cout<<"Input 3 Runners"<<endl;
	cout<<"Their names, then their times"<<endl;
	cout<<run1<<"\t"<<setw(3)<<Runner1<<endl;
	cout<<run2<<"\t"<<setw(3)<<Runner2<<endl;
	cout<<run3<<"\t"<<setw(3)<<Runner3;
    //Set the random number seed
    
	
    //Set the random number seed
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

