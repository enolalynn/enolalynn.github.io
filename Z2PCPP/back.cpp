#include<iostream>
using namespace std;
int main(){
int i=0;
while(i<0){
    i++;
    if(i==4){
        break; //exist from program
        // continue;   => 1 time skip all the following statement
         //can use" continue " instead of break but output will be different
    }
    cout<< " Statement " << i << endl;
}

cout<< "--------------End of Program -------------" <<endl;


 return 0;
}