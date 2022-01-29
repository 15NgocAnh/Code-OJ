#include <bits/stdc++.h>
using namespace std;

void sortArrGiam(int a[], int n){
    for(int i=0;i<n-1;i++)
        for(int j=i;j<n;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                	a[i]=a[j];
                	a[j]=temp;
            }
        }
}

// Function to assign rank to
// array elements
void changeArr(int input[], int N)
{
	
	// Copy input array into newArray
	int newArray[N];
	copy(input, input + N, newArray);

	// Sort newArray[] in ascending order
	sortArrGiam(newArray, N);
	int i;
	
	// Map to store the rank of
	// the array element
	map<int, int> ranks;

	int rank = 1;

	for(int index = 0; index < N; index++)
	{

		int element = newArray[index];

		// Update rank of element
		if (ranks[element] == 0)
		{
			ranks[element] = rank;
			rank++;
		}
	}

	// Assign ranks to elements
	for(int index = 0; index < N; index++)
	{
		int element = input[index];
		input[index] = ranks[input[index]];
	}
}

// Driver code
int main()
{
	int n;
	cin >>n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin >>arr[i];
	}
	changeArr(arr, n);
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] <<endl;
	}
	return 0;
}

// This code is contributed by divyeshrabadiya07

