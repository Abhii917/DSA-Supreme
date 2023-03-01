#include<iostream>
#include <limits.h>
using namespace std;

int main(){
    double celsius;
    cout<<"Enter temperature in celsius:"<<endl;
    cin>>celsius;

    double k = celsius + 273.15;
    double f = celsius * 1.80 +32.00;

    cout<<"celsius to kelvin:"<<k<<endl;
    cout<<"celsius to Fahrenheit:"<<f<<endl;


    
}



//  public double[] convertTemperature(double celsius) {
//         double[] ans = new double[2];
//         double k = celsius + 273.15;
//         double f = celsius * 1.80 + 32.00;
//         ans[0] = k;
//         ans[1]= f;
