// find student grade 

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
    if(number>90){
        cout<<"A+"<<endl;
    }
   else if(number>80){
    cout<<"A"<<endl;
   }
   else if(number>70){
    cout<<"B"<<endl;
   }
   else if(number>60){
    cout<<"B+"<<endl;
   }
   else if(number>50){
    cout<<"C"<<endl;
   }
   else{
    cout<<"fail"<<endl;
   }
}