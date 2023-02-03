#include <iostream>
using namespace std;

int main() {
  int row;
  cout<<"Enter numbers of rows:"<<endl;
  cin>>row;
cout<<endl;
  
  for(int i =0 ;i<row+1;i++){
    for(int j=0;j<i+1;j++){
      cout<<"*  ";
    }
    cout<<endl;
  }
  
}

//output:

/*

*  
*  *  
*  *  *  
*  *  *  *  
*  *  *  *  *  
*  *  *  *  *  *  
*  *  *  *  *  *  *  
*  *  *  *  *  *  *  *  
*  *  *  *  *  *  *  *  *  
*  *  *  *  *  *  *  *  *  *

*/