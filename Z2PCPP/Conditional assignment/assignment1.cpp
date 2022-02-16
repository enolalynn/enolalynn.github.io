#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter any non-zero number : ";
cin>>num;

if(num==0){
    cout<<  " Please Enter Non-zero number again!";
}else if(num<0){
    cout<<  " The number is Negative !";
}else{
    cout<< " The number is Positive ! ";
}   
return 0;
}
        