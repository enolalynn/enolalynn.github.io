#include <iostream>
using namespace std;
 int a=10;
 const float PI=3.14;
 void display(){
     int a= 20;
     cout<<"value of an inside display function:" << a;
     a=50;
     cout<<"value of an inside display function:" << a;

 }
  void displayAnother(int a){
     
     cout<<"\nvalue of an another display function:" << a;
 }

void Area(int radius){
    float area=PI * radius * radius;
    cout<< "\nArea is:" <<area;
}

int main() {
    display();
     cout<<"\nValue of an outside display function:" << a;
    displayAnother(30);
    Area(12);
    // PI=3.145;
}