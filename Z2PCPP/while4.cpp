#include<iostream>
using namespace std;
int main(){
int num,i=1;
cout<< " Enter how many number from 1 : ";
cin>>num;
while (i<=num)//((i<=5 || j>=1))
{
   
    if(i%2){
        cout<<i << endl;
    }
    i++;
}


    return 0;
}