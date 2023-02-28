// Using Bitwise Method
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    int binary = 0;
    int i = 0;

    while(n > 0){
       int bit = (n & 1);
       binary = bit*pow(10,i++)+binary;
       n = n >> 1;

    }
    cout<<binary<<endl;


}