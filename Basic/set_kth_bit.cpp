#include<iostream>
#include <limits.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int k;
    cout<<"enter value of k:"<<endl;
    cin>>k;

    int mask = 1 << k;
        int ans = n | mask;
        cout<< ans;
}