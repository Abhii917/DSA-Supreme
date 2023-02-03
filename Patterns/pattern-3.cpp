#include <iostream>
using namespace std;

int main() {

  int rowCount, colCount;

  cout << "Enter no of rows:" << endl;
  cin >> rowCount;

  cout << "Enter number of columns" << endl;
  cin >> colCount;

  for (int row = 0; row < rowCount; row++) {
    if (row == 0 || row == rowCount - 1) {
      for (int j = 0; j < colCount; j++) {
        cout << "* ";
      }
    } else {
      cout << "* ";

      for (int i = 0; i < colCount - 2; i++) {
        cout << "  ";
      }
      cout << "* ";
    }
    cout << endl;
  }
}

/*
hollow rectangle
eg row=5 ,col=6

* * * * * *
*         *
*         *
*         *
*         *
* * * * * *




*/