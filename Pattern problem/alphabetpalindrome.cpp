#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;

    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i; j++){
            cout<<char(j+'A'-1)<<" ";
        }
        for(int j=i-1; j>=1; j--){
            cout<<char(j+'A'-1)<<" ";
        }
        cout<<endl;
    }
}