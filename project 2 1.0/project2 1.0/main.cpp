/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on 2020/6/1, 10:03am
 */

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

/*
 *
 */
void coutMenu();
void showResult(int);
int main(int argc, char** argv) {
    bool status = true;
    while(status){
    srand(unsigned(time(0)));
    int Dealercard[10];
    int Playercard[10];
    int sumD=0;
    int sumP=0;
    int point;
    string input;
    char input1;

    int flag = 0;

    //games status, true for continue, false for finish
    status=true;
   

        //set status to true for default
        status=true;
        //first turn
        Dealercard[1]=(rand()%(10))+1;
        Dealercard[2]=(rand()%(10))+1;
        Playercard[1]=(rand()%(10))+1;
        Playercard[2]=(rand()%(10))+1;
        //rolling the dice by getting random number
        //round 1
        cout<<"Dealer card1 is Dealercard1"<<endl;
        cout<<"Dealer card2 is : "<<Dealercard[2]<<endl<<endl;
        if(Dealercard[1]==1||Dealercard[2]==1)
            sumD=Dealercard[1]+Dealercard[2]+10;
        else
            sumD=Dealercard[1]+Dealercard[2];

        cout<<"Player card1 is "<<Playercard[1]<<endl;
        cout<<"Player card2 is "<<Playercard[2]<<endl;
        if(Playercard[1]==1||Playercard[2]==1)
            sumP= Playercard[1]+ Playercard[2]+10;
        else
            sumP = Playercard[1]+ Playercard[2];
        cout<<"Player POINT is "<<sumP<<endl<<endl;

        if(Dealercard[1]==10&&Dealercard[2]==1){
            if(Playercard[1]==1&&Playercard[2]==10)
                flag=2;//push
            else if(Playercard[2]==1&&Playercard[1]==10)
                flag=2;//push
            else
                flag=3;//lose Dealer BlackJack
        }


         if((Playercard[2]==1&&Playercard[1]==10)||(Playercard[1]==1&&Playercard[2]==10)){
            if(Dealercard[1]==1&&Dealercard[2]==10)
                flag=2;//push
            else if(Dealercard[2]==1&&Dealercard[1]==10)
                flag=2;//push
            else
                flag=1;//Win player BlackJack
         }

        int i =3;
        do
        {
        cout<<"Input your choice : Hit or Stand"<<endl;
        cin>>input;
        if(input=="Hit"){
            Dealercard[i]=(rand()%(10))+1;
            Playercard[i]=(rand()%(10))+1;

            if(sumD<11 && Dealercard[3]==1)
                sumD+=Dealercard[i]+10;
            else
                sumD+=Dealercard[i];

            if(sumP<11 && Playercard[i]==1)
                sumP+=Playercard[i]+10;
            else
                sumP+=Playercard[i];

            cout<<"Dealer card"<<i<<" is : "<<Dealercard[i]<<endl<<endl;
            cout<<"Player card"<<i<<" is "<<Playercard[i]<<endl;
            cout<<"Player POINT is "<<sumP<<endl<<endl;
            i++;
            if(sumP>21 )
                flag = 3; //lose
            }
        if(input=="Stand"){
            while(sumD<=17){//Dealer would keep Hit until the point is over 17
                 Dealercard[i]=(rand()%(10))+1;
                  if(sumD<11 && Dealercard[i]==1)
                    sumD+=Dealercard[i]+10;
                  else
                    sumD+=Dealercard[i];
                    if(sumD>21)
                        flag=1;
            }
            cout<<"Dealer POINT is "<<sumD<<endl;
            cout<<"Player POINT is "<<sumP<<endl<<endl;
            if(sumD<=21 && sumP<=21){
            if(sumD > sumP){
               flag = 3;//lose
                }
            else if(sumD == sumP){
               flag = 2;//push
                }
            else if(sumD < sumP){
               flag = 1;//Win
                    }
                }
            else if(sumP>21)
                flag = 3;//lose
            else if(sumD>21 && sumP<=21)
                flag = 1;//win
            }

        }while(flag==0);
        showResult(flag);
        
    cout<<"Input Y to repeat the Game";
    cin>>input1;
    if(input1!='Y')
        status = false;
    }
    return 0;
}
void coutMenu(){
     for(int i=0;i<15;i++)
    {
        cout<<"*";
    }
    cout<<" Game Start ";
    for(int i=0;i<15;i++)
    {
        cout<<"*";
    }
    cout<<endl<<endl;
}
void showResult(int flag){
    switch(flag){
            case 1: cout<<"You Win!!"<<endl<<endl;
                    break;
            case 2: cout<<"The Point is Equal!!"<<endl<<endl;
                    break;
            case 3: cout<<"You Lose!!"<<endl<<endl;
                    break;
        }   
}


