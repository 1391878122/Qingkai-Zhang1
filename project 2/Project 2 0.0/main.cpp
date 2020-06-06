/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: Qingkai
 *
 * Created on 2020年4月16日, 下午5:12
 */

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

/*
 *
 */

int main(int argc, char** argv) {
    bool status = true;
    while(status){
    srand(unsigned(time(0)));
    int Dealercard1,Dealercard2,Dealercard3;
    int Playercard1,Playercard2,Playercard3;
    int sumD=0;
    int sumP=0;
    int point;
    string input;
    char input1;

    int flag = 0;

    //games status, true for continue, false for finish
    status=true;
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

        //set status to true for default
        status=true;
        //first turn
        Dealercard1=(rand()%(10))+1;
        Dealercard2=(rand()%(10))+1;
        Playercard1=(rand()%(10))+1;
        Playercard2=(rand()%(10))+1;
        //rolling the dice by getting random number
        //round 1
        cout<<"Dealer card1 is Dealercard1"<<endl;
        cout<<"Dealer card2 is : "<<Dealercard2<<endl<<endl;
        if(Dealercard1==1||Dealercard2==1)
            sumD=Dealercard1+Dealercard2+10;
        else
            sumD=Dealercard1+Dealercard2;

        cout<<"Player card1 is "<<Playercard1<<endl;
        cout<<"Player card2 is "<<Playercard2<<endl;
        if(Playercard1==1||Playercard2==1)
            sumP= Playercard1+ Playercard2+10;
        else
            sumP = Playercard1+ Playercard2;
        cout<<"Player POINT is "<<sumP<<endl<<endl;

        if(Dealercard1==10&&Dealercard2==1){
            if(Playercard1==1&&Playercard2==10)
                flag=2;//push
            else if(Playercard2==1&&Playercard1==10)
                flag=2;//push
            else
                flag=3;//lose Dealer BlackJack
        }


         if((Playercard2==1&&Playercard1==10)||(Playercard1==1&&Playercard2==10)){
            if(Dealercard1==1&&Dealercard2==10)
                flag=2;//push
            else if(Dealercard2==1&&Dealercard1==10)
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
            Dealercard3=(rand()%(10))+1;
            Playercard3=(rand()%(10))+1;

            if(sumD<11 && Dealercard3==1)
                sumD+=Dealercard3+10;
            else
                sumD+=Dealercard3;

            if(sumP<11 && Playercard3==1)
                sumP+=Playercard3+10;
            else
                sumP+=Playercard3;

            cout<<"Dealer card"<<i<<" is : "<<Dealercard3<<endl<<endl;
            cout<<"Player card"<<i<<" is "<<Playercard3<<endl;
            cout<<"Player POINT is "<<sumP<<endl<<endl;
            i++;
            if(sumP>21 )
                flag = 3; //lose



            }
        if(input=="Stand"){
            while(sumD<=17){//Dealer would keep Hit until the point is over 17
                 Dealercard3=(rand()%(10))+1;
                  if(sumD<11 && Dealercard3==1)
                    sumD+=Dealercard3+10;
                  else
                    sumD+=Dealercard3;
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

        switch(flag){
            case 1: cout<<"You Win!!"<<endl<<endl;
                    break;
            case 2: cout<<"The Point is Equal!!"<<endl<<endl;
                    break;
            case 3: cout<<"You Lose!!"<<endl<<endl;
                    break;
        }
    cout<<"Input Y to repeat the Game";
    cin>>input1;
    if(input1!='Y')
        status = false;
    }
    return 0;
}
