#include <iostream>
using namespace std;
int main(){

int myPrice;
cout<<"Enter Product Price : ";
cin>> myPrice;

int discountValue = myPrice/10;  
int pirceWithDiscount = myPrice-discountValue;  

cout<< myPrice <<"Product of Price = "  << "Discount :" << discountValue << " , "<<" After discount price : "<<pirceWithDiscount  << endl;


return 0;
}