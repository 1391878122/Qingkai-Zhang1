//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

int main(int argc, char** argv) {
    cout << "Insurance Calculator" << endl;
    
    cout << "How much is your house worth?" << endl;
 
    const float P= 0.8; //percentage of initial cost
     
     int n; //The payment of Structure
     cin >>n; 
     
     float K; //Replacement const
      K=P*n;
    
       
       cout << "You need " <<"$" << K << " of insurance.";
      
    return 0;
}
