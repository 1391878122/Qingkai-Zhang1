//System Libraries
#include <iostream>  //Input/Output Library
#include<math.h>
#include<iomanip>
using namespace std;

int main(int argc, char** argv) {
   cout << "Calculate trig functions" << endl;
   
   cout << "Input the angle in degrees." << endl;
  
const float pi= 3.1415926;

int n;
cin >>n;

float a;
a=sin((1.0*n/180)*pi);
   
float b;
b=cos((1.0*n/180)*pi);
   
float c;
c=tan((1.0*n/180)*pi);
   
    cout <<"sin("<<n<<") = "<<setprecision(4)<<fixed<< a << endl;
    cout <<"cos("<<n<<") = "<<setprecision(4)<<fixed<< b <<endl;
    cout <<"tan("<<n<<") = "<<setprecision(4)<<fixed<< c ;

    return 0;
}