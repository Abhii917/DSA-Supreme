// fancy pattern

#include<iostream>
using namespace std;

int main(){
     int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;

     for(int row=0; row<n; row=row+1) {
		
		for(int col=0; col<row+1; col = col + 1) {
			cout << row+1;
			if(col != row)
				cout << "*";
		}
		cout << endl;
	}

	for(int row=0; row<n; row=row+1) {
		
		for(int col=0; col<n-row; col = col + 1) {
			cout << n-row;
			if(col != n-row-1)
				cout << "*";
		}
		cout << endl;
	}
}





/*Enter value of n:
7




1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
6*6*6*6*6*6
7*7*7*7*7*7*7
7*7*7*7*7*7*7
6*6*6*6*6*6
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1




*/