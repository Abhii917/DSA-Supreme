
#include <bits/stdc++.h>
using namespace std;

void WavePrint(int m, int n, int arr[R][C])
{
	
	for (int j = 0; j < n; j++) {

		// If the current column
		// is even indexed, print
		// it in forward order
		if (j % 2 == 0) {
			for (int i = 0; i < m; i++) {
				cout << arr[i][j] << " ";
			}
		}

		// If the current column
		// is odd indexed, print
		// it in reverse order
		else {
			for (int i = m - 1; i >= 0; i--) {
				cout << arr[i][j] << " ";
			}
		}
	}
}

int main()
{
	int arr[R][C] = { { 1, 2, 3, 4 },
					{ 5, 6, 7, 8 },
					{ 9, 10, 11, 12 },
					{ 13, 14, 15, 16 },
					{ 17, 18, 19, 20 } };

	WavePrint(R, C, arr);

	return 0;
}




output: 1 5 9 13 17 18 14 10 6 2 3 7 11 15 19 20 16 12 8 4 
