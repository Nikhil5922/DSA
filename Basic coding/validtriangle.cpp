// check valid triangle or not

#include<iostream>
using namespace std;

bool validtriangle(int a , int b, int c){
    if((a+b)>c || (a+c)>b || (b+c)>a){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a,b,c;
    cout<<"enter value of a , b and c"<<endl;
    cin>>a>>b>>c;
    cout<<validtriangle(a,b,c);
}