#include <iostream>
using namespace std;
int main(){
   int num;
   cout << "Enter a number! ";
   if(num%5==0 && num%3==0){
       cout << num << " is divisible by 5 and 3" << endl;
   }else if (num%5==0){
  cout << num << " is divisible by 5 " << endl;
   }else if (num%3==0){
  cout << num << " is divisible by 3 " << endl;
   }else{
       cout << num << " is not divisible by 3 or 5 " << endl;
   }

    return 0;
}