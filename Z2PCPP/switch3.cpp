#include<iostream>
using namespace std;
int main(){
    // even odd

    int num;
    string result;
    cout << "Enter any number : ";
    cin>> num;
    result=(num%2==0)?"EVEN ":"ODD ";

    cout<< num << " is " << result << endl;
    return 0;
}