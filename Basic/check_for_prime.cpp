#include<iostream>
using namespace std;

bool isPrime(int n){
    int i = 2;
    for ( i = 2; i < n; i++)
    {
        if(n % i == 0){
            return false;
        }
        return true;
    }
    
}

int main(){
   int n;
   cout<<"Enter a number:"<<endl;
   cin>>n;

   bool ans = isPrime(n);

   if(ans){
    cout<<"Prime"<<endl;
   }else{
    cout<<"Not Prime";
   }
   
}