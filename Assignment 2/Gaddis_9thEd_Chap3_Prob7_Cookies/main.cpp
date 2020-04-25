//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

int main(int argc, char** argv) {
    
    cout << "Calorie Counter" << endl;
    
    cout << "How many cookies did you eat?" << endl;
    
 
    
    const float a=40;
    const float b=10;
    const float c=300;
     
     float d; // calories of a cokkie;
     d=(b*c)/a;
     
     int n; //numbers of eaten cookies
     cin >>n; 
     
     float K; //consumed calories
      K=d*n;
    
       cout << "You consumed "<<K<<" calories." ;
 
    return 0;
}
