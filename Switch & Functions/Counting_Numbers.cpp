#include<iostream>
using namespace std;

  void countN(int n){
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" ";
    }
    
}

int main(){
int n;
cout<<"Enter the value of n:"<<endl;
cin>>n;

countN(n);


}