//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>  //Input/Output Library
using namespace std;

int main(int argc, char** argv) {
    int prepay;
    float repay,newapay,newmpay;
    cin >> prepay;
    repay = prepay/2*0.076;
    newapay = prepay*1.076;
    newmpay = newapay/12.0;
    std::cout <<"Input previous annual salary." << std::endl;
    cout << "Retroactive pay    = $" <<fixed<<setw(7)<<setprecision(2)<<repay<<endl;
    cout << "New annual salary  = $"<<newapay<<endl;
    cout << "New monthly salary = $" <<setw(7)<<newmpay;

    return 0;
}
