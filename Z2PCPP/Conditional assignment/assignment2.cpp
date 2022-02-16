#include<iostream>
using namespace std;
int main(){
int price, quantity;

cout<< "Please Enter Item Price : ";
cin>> price;
cout<< "Please Enter Item Quantity : ";
cin>> quantity;
 int tPrice = price * quantity;
 int discount = tPrice*10/100;
 int tExpense = tPrice-discount;

 if(tPrice > 5000){
     cout<<  " Total Price : " << tPrice << "  - " << " Ten percent Discount for buying > 5000 : "<< discount   << "  = "<< " Total expense : " << tExpense<< endl;
 }else{
     cout<<" Total Price : " << tPrice << endl ;
 }
    return 0;
}