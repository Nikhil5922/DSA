//check number is +ve or -ve

#include<iostream>
using namespace std;

int main(){
    int p;
    cout<<"enter a number";
    cin>>p;
    if(p==0){
        cout<<"Number is zero"<<endl;
    }
    else if(p>0){
        cout<<"Number is positive"<<endl;

    }
    else
        cout<<"Number is negative"<<endl;
}