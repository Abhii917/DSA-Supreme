#include<iostream>
using namespace std;

int Add(int a,int b){
    int result = a+b;
    return result;
}

int main(){
    int a,b;
    cout<<"Enter 1st Number:"<<endl;
    cin>>a;

    cout<<"Enter 2nd Number:"<<endl;
    cin>>b;

    cout<<"Addition of two numbers is : "<<Add(a,b)<<endl;
}