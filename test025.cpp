// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the sum of squares
// of distance between all distinct pairs
void findSquareSum(
	int Coordinates[][2], int N)
{
	long long xq = 0, yq = 0;
	long long xs = 0, ys = 0;

	// Stores final answer
	long long res = 0;

	// Traverse the array
	for (int i = 0; i < N; i++) {
		int a, b;

		a = Coordinates[i][0];
		b = Coordinates[i][1];

		res += xq;
		res -= 2 * xs * a;

		// Adding the effect of this
		// point for all the previous
		// x - points
		res += i * (long long)(a * a);

		// Temporarily add the
		// square of x-coordinate
		xq += a * a;
		xs += a;
		res += yq;
		res -= 2 * ys * b;
		res += i * (long long)b * b;

		// Add the effect of this point
		// for all the previous y - points
		yq += b * b;
		ys += b;
	}

	// Print the desired answer
	cout << res;
}

// Driver Code
int main()
{
	int n;
    cin>>n;
    int arr[n][2];
    for (int i=0;i<n;i++){
        for (int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
	findSquareSum(arr, n);
	return 0;
}

