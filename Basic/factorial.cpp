#include<iostream>
using namespace std;

long long int fact(long long int n){
    long long int ans = 1;
    for(int i=1; i<=n; i++){
        ans = ans*i;
    } 
    return ans;
}


int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<fact(n)<<endl;

}