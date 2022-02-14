#include <iostream>
using namespace std;
int main(){
    //type casting;
    // implicit
    // int float char string

    char x = '+';
    string z = "hello";
    int y = 2;
    y=x;
 cout << "y is : " << y << endl;

 float h = y + 1.2;
 cout << "float h is : " << h << endl;

 int a = 15;
 int b = 2;
 float c = 1.0*a/b;  //double data type //else => c = (float)a/b;
 cout<<"Float c = " << c << endl;

    return 0;
}