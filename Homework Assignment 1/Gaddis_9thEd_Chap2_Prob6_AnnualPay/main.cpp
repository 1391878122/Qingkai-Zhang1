#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    const float Payamount=2200.0; 
    const float Payperiod=26;
    float AnnualPay; 
    AnnualPay=Payamount*Payperiod;
    cout<<"AnnualPay = ";
    cout<<AnnualPay<<"$"<<endl;
    return 0;}