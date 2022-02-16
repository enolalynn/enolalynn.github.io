#include <iostream>
using namespace std;
int main(){
    int num1 ,num2, num3;
    cout<< "Enter any three number : ";
    cin>> num1 >>num2 >> num3;
//  1. assign first number to max
 int max_num =num1;
// 2. compare second number and max: change max based on the result
if(num2>max_num){
    max_num=num2;
}
// 3.compare third number and max : change max based on the result
if(num3>max_num){
    max_num=num3;
}
   

    
    return 0;
}