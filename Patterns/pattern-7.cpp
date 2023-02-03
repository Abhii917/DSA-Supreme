#include <iostream>
using namespace std;

int main() {
   int n;
   cout<<"Enter number:"<<endl;
   cin>>n;
   cout<<endl;

   for(int row=0 ; row < n;row++){

    for(int col = 0; col <n-row ;col++){

        cout<<col+1;
    }

    cout<<endl;
   }

}


/*
for input 6 output is:

123456
12345
1234
123
12
1


*/