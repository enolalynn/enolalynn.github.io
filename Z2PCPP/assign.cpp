#include <iostream>
using namespace std;
int main(void){
    // assign value to variables;
    int a,b;
    a = 7;
    b = 2;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    a += b; //a= a+b; => a=9
    cout << "After a += b " << a << endl;

     a *= b; //a= a*b; => a = 9*2;
    cout << "After a *= b , a = " << a << endl;
     
    a -= b; //a= a-b; =>  a = 18 - 2; => a = 16
    cout << "After a -= b , a = " << a << endl;

    a /= b; //a= a/b; =>  a = 16/ 2; => a = 8
    cout << "After a /= b , a = " << a << endl;

   a %= b; //a= a%b; =>  a = 8 % 2; => a = 0
    cout << "After a %= b , a = " << a << endl;

    //seconds:
    // minutes : 60;
    // hours : 3600;
    // eg. 7500s // firstly we compute hours then minute
    // hour = seconds/3600;

    

return 0;
}