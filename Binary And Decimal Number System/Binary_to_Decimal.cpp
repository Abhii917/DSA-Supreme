#include<iostream>
#include<cmath>
using namespace std;

int DecimalToBinary(int n){
    int decimal=0;
    int i = 0;
    while(n != 0){
        int bit = n % 10;
        decimal = decimal + bit*(pow(2,i++));
        n /= 10;
    }
    return decimal;

}

int main(){
    int n;
    cout<<"Enter binary number:";
    cin>>n;
    cout<<DecimalToBinary(n)<<endl;
}