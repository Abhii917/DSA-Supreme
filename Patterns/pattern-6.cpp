#include <iostream>
using namespace std;

int main() {
   int n;
   cout<<"Enter number:"<<endl;
   cin>>n;

   for(int i = 1 ; i < n+1 ; i++){
    for(int j = 1 ; j < i+1 ; j++){
        cout<<j ;
    }
    cout<<endl;
   }
}

/*
for input 7 output is:

1
12
123
1234
12345
123456
1234567


*/
