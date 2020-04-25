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
    

    int  type1,type2;
    string astrology1,astrology2;

    cin>>astrology1>>astrology2;  
    
    if(astrology1=="Aries"||astrology1=="Leo"||astrology1=="Sagittarius")
        type1=0;
    if(astrology1=="Taurus"||astrology1=="Virgo"||astrology1=="Capricorn")
        type1=1;
    if(astrology1=="Gemini"||astrology1=="Libra"||astrology1=="Aquarius")
        type1=2;
    if(astrology1=="Cancer"||astrology1=="Scorpio"||astrology1=="Pisces")
        type1=3;
        
    if(astrology2=="Aries"||astrology2=="Leo"||astrology2=="Sagittarius")
        type2=0;
    if(astrology2=="Taurus"||astrology2=="Virgo"||astrology2=="Capricorn")
        type2=1;
    if(astrology2=="Gemini"||astrology2=="Libra"||astrology2=="Aquarius")
        type2=2;
    if(astrology2=="Cancer"||astrology2=="Scorpio"||astrology2=="Pisces")
        type2=3;    
    
        
	cout<<"Horoscope Program which examines compatible signs."<<endl;
	cout<<"Input 2 signs."<<endl;
	if(type1==type2){
	    if(type1==0)
	    cout<<astrology1<<" and "<<astrology2<<" are compatible Fire signs.";
	    if(type1==1)
	    cout<<astrology1<<" and "<<astrology2<<" are compatible Earth signs.";
	    if(type1==2)
	    cout<<astrology1<<" and "<<astrology2<<" are compatible Air signs.";
	    if(type1==3)
	    cout<<astrology1<<" and "<<astrology2<<" are compatible Water signs.";
	
	}
	else
	cout<<astrology1<<" and "<<astrology2<<" are not compatible signs.";

    //Set the random number seed
    
	
    //Set the random number seed
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

