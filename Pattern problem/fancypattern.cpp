#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i==j){
                cout<<i;
            }
            else
            cout<<i<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            if(j==n-i+1){
                cout<<n-i+1;
            }
            else
            cout<<n-i+1<<"*";
        }
        cout<<endl;
    }
}