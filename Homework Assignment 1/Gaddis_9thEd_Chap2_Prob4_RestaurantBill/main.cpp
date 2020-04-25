#include <iostream>
using namespace std;
int main(int argc, char** argv) {
const float taxpercentage=0.0675;
const float tippercentage=0.2;
const float mealcost=88.67;
float taxamount;
taxamount=taxpercentage*mealcost;
float tipamount;
tipamount = tippercentage*mealcost;
float totalbill;
totalbill=mealcost+taxpercentage*mealcost+tippercentage*mealcost;
cout<<"tax amount = ";
cout<<taxamount<<endl;
cout<<"meal cost = ";
cout<<mealcost<<endl;
cout<<"tip amount = ";
cout<<tipamount<<endl;
cout<<"total bill = ";
cout<<totalbill<<endl;
return 0;}


