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
#include<fstream>
#include <iomanip>
using namespace std;

/*
 *
 */
//Fuction Prototypes
void coutMenu();
void showResult(int);
void createDice(int[],int);
bool searchA(int [],int);
void selectionSort(int[],int);
void swap(int&,int&);
int main(int argc, char** argv) {
    ofstream outputFile;
    outputFile.open("GameRecord.txt");
    outputFile << "***********************Game Record**********************"<<endl;
    bool status = true;
    int x = 1;
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
       createDice(Dealercard,1);
       createDice(Dealercard,2);
       createDice(Playercard,1);
       createDice(Playercard,2);
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
        int j;
        do
        {
        cout<<"Input your choice : Hit or Stand"<<endl;
        cin>>input;
        if(input=="Hit"){
            
            createDice(Dealercard,i);
            createDice(Playercard,i);

            if(sumD<11 && Dealercard[i]==1)
                sumD+=Dealercard[i]+10;
            else{
                sumD+=Dealercard[i];      
            }
            if( searchA(Dealercard,i-1) && sumD >21)
                sumD-=10;
            
            if(sumP<11 && Playercard[i]==1)
                sumP+=Playercard[i]+10;
            else
                sumP+=Playercard[i];

             if( searchA(Playercard,i-1) && sumP >21)
                sumP-=10;
            
            cout<<"Dealer card"<<i<<" is : "<<Dealercard[i]<<endl<<endl;
            cout<<"Player card"<<i<<" is "<<Playercard[i]<<endl;
            cout<<"Player POINT is "<<sumP<<endl<<endl;
            i++;
            if(sumP>21 )
                flag = 3; //lose
            }
        if(input=="Stand"){
             j = i;
            while(sumD<=17){//Dealer would keep Hit until the point is over 17
               
                 createDice(Dealercard,j);
                  if(sumD<11 && (searchA(Dealercard,j)))
                    sumD+=Dealercard[j]+10;
                  else
                    sumD+=Dealercard[j];
                 j++;
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
        
        outputFile << "Round "<<x<<" :"<<endl;
        x++;
        switch(flag){
            case 1: 
                   outputFile <<"You Win!!"<<endl;
                    break;
            case 2: 
                    outputFile <<"The Point is Equal!!"<<endl;
                    break;
            case 3: 
                    outputFile <<"You Lose!!"<<endl;
                    break;
        }   
        
        showResult(flag);
        cout << "Dealercard in Sequence: ";
        selectionSort(Dealercard,j-1);
        cout<<"Dealer POINT is "<<sumD<<endl;
        cout << "Playercard in Sequence: ";
        selectionSort(Playercard,i-1);
        cout<<"Player POINT is "<<sumP<<endl<<endl;
        
    outputFile<<"Dealer POINT is "<<sumD<<endl;
    outputFile << "Dealercard in Sequence: ";
         for(int y =1; y <=j-1; y++)
            outputFile << setw(4) << Dealercard[y];
            outputFile << endl;
    outputFile<<"Player POINT is "<<sumP<<endl;
    outputFile << "Playercard in Sequence: ";
        for(int y =1; y <=i-1; y++)
            outputFile << setw(4) << Playercard[y];
            outputFile << endl<<endl;     
        
    cout<<"Input Y to repeat the Game";
    cin>>input1;
    cout<<endl;
    if(input1!='Y')
        status = false;
    }
    outputFile.close();
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
            case 1: cout<<"You Win!!"<<endl;
                   // outputFile <<"You Win!!"<<endl;
                    break;
            case 2: cout<<"The Point is Equal!!"<<endl;
                   // outputFile <<"The Point is Equal!!"<<endl;
                    break;
            case 3: cout<<"You Lose!!"<<endl;
                   // outputFile <<"You Lose!!"<<endl;
                    break;
        }   
}
void createDice(int array[],int index){
    array[index] =(rand()%(10))+1;
}
bool searchA(int array[],int index){
    bool status = false;
    for(int i = 0;i<index;i++){
        if(array[i]==1)
            status = true;
    }
       if(status)
           return true;
       else
           return false;
}
void selectionSort(int array[],int size){
    int minIndex,minValue;
    for(int start = 1; start <(size); start++){
        minIndex = start;
        minValue = array[start];
        for(int index = start+1;index<=size;index++){
            if(array[index]<minValue){
                minValue = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex],array[start]);
    }
    for(int i =1; i <=size; i++)
        cout << setw(4) << array[i];
     cout << endl;
}
void swap(int &a, int &b){
    int temp =a;
    a = b;
    b= temp;
}

