#include<iostream>
using namespace std;

int Find_Max(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }

}
int main(){
    int a,b,c;
    cout<<"Enter 1st Number:"<<endl;
    cin>>a;

    cout<<"Enter 2nd Number:"<<endl;
    cin>>b;

    cout<<"Enter 3rd Number:"<<endl;
    cin>>c;
     
    cout<<"Maximun number is : "<<Find_Max(a,b,c)<<endl; 

}