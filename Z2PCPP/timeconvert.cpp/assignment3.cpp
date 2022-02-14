#include <iostream>
using namespace std;
int main(){

int loanamt;
cout<<"Enter Loan Amount : ";
cin>> loanamt;

int rate;
cout<<"Enter rate : ";
cin>> rate;

int noOfmonth;
cout<<"Enter Number of Month : ";
cin>> noOfmonth;

int monthlyIntrest = loanamt*rate/100; 
int totalmonth = noOfmonth * monthlyIntrest;  

cout<<"Loan Amount = " << loanamt << " , " << "Rate = " << rate << " , " << " No. of Months = " << noOfmonth << " , " << " Monthly Interest :" << monthlyIntrest << " , "<<" Your Interest : " << totalmonth  << endl;


return 0;
}