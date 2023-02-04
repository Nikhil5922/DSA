// counting from 1 to N;

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value to n:"<<endl;
    cin>>n;
    //printing number from 1 to n;
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
}

// counting from N to 1;
int main(){
     int n;
    cout<<"enter value to n:"<<endl;
    cin>>n;
    //printing number from n to 1;
    for(int i=n; i>=1; i--){
        cout<<i<<" ";
    }
}