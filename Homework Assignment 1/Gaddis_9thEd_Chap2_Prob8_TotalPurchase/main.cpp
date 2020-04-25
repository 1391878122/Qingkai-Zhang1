#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    const float Priceofitem1=15.95;
    const float Priceofitem2=24.95;
    const float Priceofitem3=6.95;
    const float Priceofitem4=12.95;
    const float Priceofitem5=3.95;
    const float tax=0.07;
    float Saletax,Subtotal,total;
    Subtotal = Priceofitem1+Priceofitem2+Priceofitem3+Priceofitem4+Priceofitem5;
    Saletax = Subtotal*tax;
    total = Subtotal+Saletax;
    cout<<"Priceofitem1 = ";
    cout<<Priceofitem1<<"$"<<endl;
    cout<<"Priceofitem2 = ";
    cout<<Priceofitem2<<"$"<<endl;
    cout<<"Priceofitem3 = ";
    cout<<Priceofitem3<<"$"<<endl;
    cout<<"Priceofitem4 = ";
    cout<<Priceofitem4<<"$"<<endl;
    cout<<"Priceofitem5 = ";
    cout<<Priceofitem5<<"$"<<endl;
    cout<<"Subtotal = ";
    cout<<Subtotal<<"$"<<endl;
    cout<<"Saletax = ";
    cout<<Saletax<<"$"<<endl;
    cout<<"total = ";
    cout<<total<<"$"<<endl;
    return 0;}
