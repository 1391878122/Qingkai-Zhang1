#include <iostream>
using namespace std;
const float milBdgt=7.0e11f; //Military Budget=700 Billion   
const float fedBdgt=4.1e12f; //Federal Budget=4.1Trillion
int main(int argc, char** argv) {
    float milprcnt;
    milprcnt=milBdgt/fedBdgt;//Military Percent= Military Budget/Federal Budget
    cout<<"Percentage is"<<endl;
    cout<<milprcnt<<endl;
    return 0;
}
