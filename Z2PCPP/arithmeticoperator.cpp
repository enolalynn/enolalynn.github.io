// #include <iostream>
// using namespace std;
// int main(){
// // declare variable a,b;
//  int a,b;
// //  a=4;
// //  b = 2;

// cout << "Enter First Number:";
// cin >> a;
// cout << "Enter Second Number:";
// cin >> b;
// // add a and b assign result to sum
// // binary operaors => work with 2 operands!
// int sum = a + b;
// int sub = a - b;
// int mul = a * b;
// float div = (float)a / b;
// int mod = a % b;

// cout << a "+" << b "=" << sum << endl;
// cout << a "+" << b "=" << a+b << endl;
// cout << a "-" << b "=" << sub << endl;
// cout << a "*" << b "=" << mul << endl;
// cout << a "/" << b "=" << div << endl;
// cout << a "%" << b "=" << mod << endl;


//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
     int firstNumber,secondNumber;
     bool result;
     cout<<"Enter First Number: " ;
     cin>> firstNumber;
     cout<<"Enter Second Number: ";
     cin>>secondNumber;
     result = (firstNumber == secondNumber) ;  
// compare firstNumber is equal to secondNumber?
     cout<< firstNumber << "  ==  " << secondNumber << " ? is : " << result << endl ;
 result = (firstNumber != secondNumber) ;  
 // compare firstNumber is equal to secondNumber?
     cout<< firstNumber << "  !=  " << secondNumber << " ? is : " << result << endl ;
}