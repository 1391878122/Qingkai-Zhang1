//System Libraries
#include <iostream>  //Input/Output Library
#include<iomanip>
using namespace std;

int main() {
   
    cout <<"Input the maximum room capacity and the number of people" <<endl;
 
    int n,K;
    cin >>n>>K;
     
    int m;
    
    if(n>=K)
    {
        m = n-K;
        cout <<"Meeting can be held." <<endl;
        cout <<"Increase number of people by " <<m<<" will be allowed without violation.";
    }
    else{
         m = -n+K;
         cout <<"Meeting cannot be held." <<endl;
         cout <<"Reduce number of people by " <<m<<" to avoid fire violation.";
    }
    return 0;
}