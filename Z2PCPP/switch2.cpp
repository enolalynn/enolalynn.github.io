#include <iostream>
using namespace std;
int main(){
    char grade;
    cout << "Enter your grade : ";
    cin>> grade;
    switch (grade){
        case  'A':
        cout<<"\nExcellent !";
        break;
        case  'B':
        cout<<"\n Credit !";
        break;
        case  'C':
        cout<<"\n Well done!";
        break;
        case  'D':
        cout<<"\n You Passed!";
        break;
        case  'E':
        cout<<"\n Better try again! ";
        break;
        
        default:
        cout<<"\n Invalid Grade";
        break;
    }
    cout << "Enter your grade : " << grade << endl;
    return 0;
}