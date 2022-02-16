#include <iostream>
using namespace std;
int main(){
    int dow;
    cout << "Enter number of week's day (1-7) : ";
    cin>> dow;
    switch (dow){
        case    1:
        cout<<"\n Sunday";
        break;
        case    2:
        cout<<"\n Monday";
        break;
        case    3:
        cout<<"\n Tueday";
        break;
        case    4:
        cout<<"\n Wednesday";
        break;
        case    5:
        cout<<"\n Thursday ";
        break;
        case    6:
        cout<<"\n Friday ";
        break;
        case    7:
        cout<<"\n Saturday ";
        break;
        default:
        cout<<"\n Wrong number of day";
        break;
    }
    return 0;
}