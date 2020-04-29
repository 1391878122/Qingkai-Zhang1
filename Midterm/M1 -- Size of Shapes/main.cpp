//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
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
    //Exit
    return 0;
}

