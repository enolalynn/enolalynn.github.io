#include<iostream>
using namespace std;
int main(){
    string uName , uPass ;
    cout<< "Please enter user name :";
    cin>>uName;
    cout<< "Please enter Password :";
    cin>>uPass;
    if(uName != "mmit" && uPass != "admin123"){
        cout<< "User name and password do not match !"; 
    }else if(uName == "mmit" && uPass != "admin123" ){
            cout<< " Password is incorrect ! ";
    }else if(uName != "mmit" && uPass == "admin123") {
        cout << "User name is incorrect ! ";
    }else {
        cout << "Login Success ! ";    
    }

 return 0;
}
  
  