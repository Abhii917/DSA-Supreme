#include<iostream>
using namespace std;
 
int sum(int n){
    int result = 0;

    for (int i = 1; i <= n; i++){
        result = result + i;
    }
    return result;
}


int main(){
    int n;
    cout<<"Enter value n: "<<endl;
    cin>>n;

    cout<<"Sum of N number is : "<<sum(n);
}