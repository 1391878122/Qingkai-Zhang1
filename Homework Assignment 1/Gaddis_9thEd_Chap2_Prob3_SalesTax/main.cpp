#include <iostream>
using namespace std;
const float Statesalestax=0.04; 
const float Countysalestax=0.02;
const float price=95;
int main(int argc, char** argv) {
    float totaltaxamount; 
   totaltaxamount=price*(Statesalestax+Countysalestax);
    cout<<"totaltaxamount = ";
    cout<<totaltaxamount<<endl;
    return 0;}


