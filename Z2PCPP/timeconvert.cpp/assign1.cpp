#include <iostream>
using namespace std;
int main(){

int myDays;
cout<<"Enter Number of Days to calculate: ";
cin>> myDays;

int years = myDays/365;  
int days = myDays%365;  
int months = days/30; 
days %= 30; 
cout<< myDays <<"Days = " << years << "Years :" << months <<"Months : "<< days << "Days :" << endl;


return 0;
}