#include<iostream>
using namespace std;
int main(){
char ch;
cout<< " Please enter a character , 'q' to exit the program! : " <<endl;

do 
{
   cout<< " \nEnter a character : " ;
   cin>>ch;
   if(ch!='q'){
       
        if(ch>='0' && ch<= '9'){
            cout<< ch << " is a digit ! "<<endl;
        }else{
            cout<< ch << "  is not a digit! "<<endl;    
    }else{
        cout<< " \nTerminatinf from program ....!" << endl;
   }
}while(ch!='q');
 return 0;
}