#include<iostream>
using namespace std;
int main(){
    int prog, eng, math;
    cout<<"Enter mark for Programming : ";
    cin>>prog;
    cout<<"Enter mark for English : ";
    cin>>eng;
    cout<<"Enter mark for Math : ";
    cin>>math;

    int tMark = prog + eng + math;
    float avMark = tMark/3;
    cout<< " Total Mark : " << tMark << " , " << " Average Mark : " << avMark << endl;
             // fail 
   
    if(prog<= 50 || eng <= 50 || math <= 50){
      cout<< " Fail !" << endl;
    }else{
        cout<< " Pass ! " << endl;
    }
    // Distinction subject
    if(prog >= 80 && eng >= 80 && math >= 80){
      cout<< "Woow Excellent ! All subject are Distinction";
    }else if(prog>= 80 && eng <= 80 && math <= 80){
        cout<< " Distinction in Programming ! " << endl;
    }else if(prog<= 80 && eng >= 80 && math <= 80){
        cout<< " Distinction in English ! " <<endl;
    }else if(prog<= 80 && eng <= 80 && math >= 80){
        cout<< " Distinction in Math ! " << endl;
    }
    
         // find maximum mark
if(prog > eng && prog > math){
    cout<< " Subject that got maximum mark is Programming: " <<prog <<endl;
}else if(eng > prog && eng > math){
    cout<< " Subject that got maximum mark is English : " <<eng <<endl;
}else if(math>prog && math > eng){
    cout<< " Subject that got maximum mark is Math : " <<math<<endl;
}
        // find minimum mark
 if(prog < eng && prog < math){
    cout<< " Subject that got minimum mark is Programming : " <<prog<<endl;
}else if(eng < prog && eng < math){
    cout<< " Subject that got minimum mark is English : " <<eng <<endl;
}else if(math<prog && math < eng){
    cout<< " Subject that got minimum mark is Math : " <<math <<endl;
}




return 0;
}