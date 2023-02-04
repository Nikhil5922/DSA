#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        if(i==1){
            cout<<"  1 ";
        }
        else if(i<n && i>1){
        cout<<"1 ";
        for(int j=1; j<=i; j++){
            cout<<"  ";
        }
        cout<<i;
        }
        else{
            for(int j=1; j<=n; j++){
                cout<<j<<"  ";
            }
        }

        cout<<endl;
    }
}