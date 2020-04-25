//System Level Libraries
#include <iostream>  
#include<string>
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Gaddis SortNames Problem"<<endl;
    cout<<"Type 2 for Gaddis Books Problem"<<endl;
    cout<<"Type 3 for Gaddis BankCharges Problem"<<endl;
    cout<<"Type 4 for Gaddis Race Problem"<<endl;
    cout<<"Type 5 for Gaddis ISP Problem"<<endl;
    cout<<"Type 6 for Savitch RockPaperScissors Problem"<<endl;
    cout<<"Type 7 for Savitch RomanConversion Problem"<<endl;
    cout<<"Type 8 for Savitch CompatibleSigns Problem"<<endl;
    cin>>choice;
    
if(choice=='1'){
cout<<"Sorting Names"<<endl;
cout<<"Input 3 names"<<endl;
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
cout << str1<<endl<<str2<<endl<<str3;
    
}else if(choice=='2'){
cout<<"Book Worm Points"<<endl;    
cout<<"Input the number of books purchased this month."<<endl;
    int n,p;
    cin>>n;
if (n==0)
    p=0;
if (n==1)
    p=5;
if (n==2)
    p=15;
if (n==3)
    p=30;
if (n>=4)
    p=60;
cout<<"Books purchased ="<<setw(3)<<n<<endl;
cout<<"Points earned   ="<<setw(3)<<p;

}else if(choice=='3'){
cout<<"Monthly Bank Fees"<<endl;    
cout<<"Input Current Bank Balance and Number of Checks"<<endl;
 float c,p,b;
    cin>>b>>c;
 if (c<20)
    p=0.10*c;
 if (20<=c && c<=39)
    p=0.08*c;
 if (40<=c && c<=59)
    p=0.06*c;
 if (c>=60)
    p=0.04*c;
 float lb;
 if (b<400)
    lb=15;
 if (b>400)
    lb=0;
 const float m = 10.00;
 float nb;
 if (b<400)
    nb=b-p-m-lb;
 if (b>=400)
    nb=b-p-m;
cout<<"Balance     "<<"$"<<setw(9)<<setprecision(2)<<fixed<<b<<endl;
cout<<"Check Fee   "<<"$"<<setw(9)<<setprecision(2)<<fixed<<p<<endl;
cout<<"Monthly Fee "<<"$"<<setw(9)<<setprecision(2)<<fixed<<m<<endl;
cout<<"Low Balance "<<"$"<<setw(9)<<setprecision(2)<<fixed<<lb<<endl;
cout<<"New Balance "<<"$"<<setw(9)<<setprecision(2)<<fixed<<nb;
    
}else if(choice=='4'){
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
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
    cout<<run1<<"\t"<<setw(3)<<Runner1<<endl;
    cout<<run2<<"\t"<<setw(3)<<Runner2<<endl;
    cout<<run3<<"\t"<<setw(3)<<Runner3;
    
}else if(choice=='5'){
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    //Set the random number seed
    char choice;
    int time;
    float fee;
    cin>>choice>>time;
    switch (choice){
        case 'A': fee=9.95;
                  if(time>10)
                  fee=fee+(time-10)*2;
                break;
    
        case 'B': fee=14.95;
                  if(time>20)
                  fee=fee+(time-20)*1;
                break;
        case 'C': fee=19.95;
    }
    cout<<"Bill ="<<" $ "<<fee;
    
}else if(choice=='6'){
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    char play1,play2;
    int flag;
    cin >>play1>>play2;
    if((play2=='r')||(play2=='R')){
        if((play1=='r')||(play1=='R')) flag = 3;
        if((play1=='p')||(play1=='P')) flag = 0;    
        if((play1=='s')||(play1=='S')) flag = 2;
    } 
     if((play2=='s')||(play2=='S')){
        if((play1=='r')||(play1=='R')) flag = 2;
        if((play1=='p')||(play1=='P')) flag = 1;    
        if((play1=='s')||(play1=='S')) flag = 3;
    } 
    if((play2=='p')||(play2=='P')){
        if((play1=='r')||(play1=='R')) flag = 0;
        if((play1=='p')||(play1=='P')) flag = 3;    
        if((play1=='s')||(play1=='S')) flag = 1;
    }   
    switch(flag){
        case 0:cout<<"Paper covers rock.";
                break;
        case 1:cout<<"Scissors cuts paper.";
                break;
        case 2:cout<<"Rock breaks scissors.";
                break;
        case 3:cout<<"Nobody wins.";
                break;       
      }
     
}else if(choice=='7'){
         unsigned short n2Cnvrt;
    //Initialize Variables
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>n2Cnvrt;
    if(n2Cnvrt>=1000&&n2Cnvrt<=3000){
    //Process or map Inputs to Outputs
        //Determine 1000's, 100's, 10's, 1's
        unsigned char n1000s,n100s,n10s,n1s;
        n1000s=n2Cnvrt/1000;
        n100s=(n2Cnvrt-n1000s*1000)/100;
        n10s=(n2Cnvrt-n1000s*1000-n100s*100)/10;
        n1s=n2Cnvrt%10;
        cout<<n2Cnvrt<<" is equal to ";
        //Output the number of 1000's in Roman Numerals
        switch(n1000s){
            case 3:cout<<'M';
            case 2:cout<<'M';
            case 1:cout<<'M';
        }
        //Output the number of 100's
        cout<<(n100s==9?"CM":
               n100s==8?"DCCC":
               n100s==7?"DCC":
               n100s==6?"DC":
               n100s==5?"D":
               n100s==4?"CD":
               n100s==3?"CCC":
               n100s==2?"CC":
               n100s==1?"C":"");
        //Output the number of 10's
        if(n10s==9)cout<<"XC";
        if(n10s==8)cout<<"LXXX";
        if(n10s==7)cout<<"LXX";
        if(n10s==6)cout<<"LX";
        if(n10s==5)cout<<"L";
        if(n10s==4)cout<<"XL";
        if(n10s==3)cout<<"XXX";
        if(n10s==2)cout<<"XX";
        if(n10s==1)cout<<"X";
        //Output the number of 1's
        if(n1s==9)cout<<"IX";
        else if(n1s==8)cout<<"VIII";
        else if(n1s==7)cout<<"VII";
        else if(n1s==6)cout<<"VI";
        else if(n1s==5)cout<<"V";
        else if(n1s==4)cout<<"IV";
        else if(n1s==3)cout<<"III";
        else if(n1s==2)cout<<"II";
        else if(n1s==1)cout<<"I";         
    //The Path to Exit
    }else{
        cout<<n2Cnvrt<<" is Out of Range!";
    }
    
}else if(choice=='8'){
    int  type1,type2;
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
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
}else{
        cout<<"Not an Option"<<endl;
    }
    //Clean Up
    //Exit stage right!
    return 0;
}
