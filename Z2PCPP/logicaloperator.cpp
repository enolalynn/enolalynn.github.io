#include <iostream>
using namespace std;
int main(void){
    bool result;
    int a =5;
    int b = 6;
    result = (a<10) || (b>20);
    cout << "Result is:" << result << endl ;
    cout << "Not of Result is:" << !result << endl ;
    return 0;
}