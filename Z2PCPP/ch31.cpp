#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";\
    cin>>num;
    if(num>=0 && num<=9){ //both of condition must true .
        cout<<"You entered one digit!" << endl;
    }

    if(num%2){ // => equal to (num%2==1)3

        cout<<"You entered an Odd Number!" << endl;
    }else{
        cout<<"You entered an EVEN Number !"<< endl;
    }


    return 0;
}