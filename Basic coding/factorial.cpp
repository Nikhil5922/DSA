// find the factorial number

#include<iostream>
using namespace std;

int main(){
    int n;
    int fact=1;
    cout<<"enter a number";
    cin>>n;
    int i=n;
    while(n>0){
        fact*=n;
        n--;
    }
    cout<<"the factorial of "<<i<<" is "<<fact<<endl;

}