#include<iostream>
using namespace std;
int main(){
     int rows=5;
    int cols=7;

    for(int i = 0 ; i < rows ; i++ ){
        for(int j = 0 ; j < cols ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

/*
output-

* * * * * * * *
* * * * * * * *
* * * * * * * *
* * * * * * * *
* * * * * * * *

*/