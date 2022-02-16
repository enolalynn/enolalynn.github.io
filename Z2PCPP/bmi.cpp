#include <iostream>
using namespace std;
int main(){
   const int COE = 703;
   float weight;
   float height;
   cout << "Enter your weight in lb : ";
    cin>> weight;
    cout << "Enter your height in inches : ";
    cin>> height;
    float bmi = (weight /(height*height)) * COE;
    cout << " Your BMI is ; " << bmi << endl;

    // < 18.5
 if (bmi<18.5){
     cout << " Underweight ! " << endl;
 }else{
      // 18.5< 24.9
    if (bmi>=18.5 && bmi <= 24.9){
     cout << " Normalweight ! " << endl;
    }else{
         if (bmi>=25 && bmi <= 29.9){
         cout<< " Over Weight !"<< endl;
         }else{
         cout<< " Obesity !" << endl;
     }
     
   }

 }
   
    // 25 < 29.9

    return 0;
}