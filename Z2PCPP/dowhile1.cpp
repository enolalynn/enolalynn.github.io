#include<iostream>
using namespace std;
int main(){
int num;
cout<< " If you entered 0 , program will terminate! : " <<endl;
cin>>num;
do 
{
   
    cout<< " Please enter a non zero number : ";
    cin>>num;
    if(num>0){
        cout<<num<< " is Positive ! "<<endl;
    }else if (num<0){
        cout<<num<< " is Negative ! "<<endl;
    }else{
        cout<<num<< "  Terminating from program ...! "<<endl;
        
    }

}while(num!=0);
 return 0;
}