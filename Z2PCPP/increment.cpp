#include <iostream>
using namespace std;
int main(){
    int a= 2;  // a = 2 assign
    // a++;  // a = 3;
    cout << "Value of a after increment a = " << ++a << endl; //output => orginal value (not increase yet but work next line ) it means pre increment
    cout << " After cout a = " << a << endl;

    // int b= 5;  // a = 2 assign
    // // a++;  // a = 3;
    // cout << "Value of b after decrement b = " << b-- << endl; //output => orginal value (not decrease yet but work next line ) it means pre decrement
    // cout << " After cout b = " << b << endl;

    int b= 5;  // a = 2 assign
    // a++;  // a = 3;
    cout << "Value of b after decrement b = " << --b << endl; //output => orginal value (not decrease yet but work next line ) it means pre decrement
    cout << " Value of b = " << b << endl;

    int c = ++a+b; //a=4,b=4 => c=4+4 = 8
    int d = a+ b--; //a=4,b=4 => d=8,b=3
    cout<< " Value of d = " << d << endl;


    return 0;
}