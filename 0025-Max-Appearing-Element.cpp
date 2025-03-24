//Given two arrays L[ ] and R[ ] of size N where L[i] and R[i] (0 ≤ L[i], R[i] < 106) denotes a range of numbers, 
//the task is to find the maximum occurred integer in all the ranges. 
//If more than one such integer exists, print the smallest one. 

#include <iostream>
#include <cstring>
using namespace std ;

int maximumOccurredElement(int L[] ,  int R[] , int n){

  // Initialize all elements of array to 0.
  int arr[101] = {0}; // Adjusted to accommodate large indices
  memset(arr, 0, sizeof(arr));

  
// Adding +1 at Li index and subtracting 1
	// at Ri index.
	int maxi = -1;
	for (int i = 0; i < n; i++) {
		arr[L[i]] += 1;
		arr[R[i] + 1] -= 1;
		if (R[i] > maxi) {
			maxi = R[i];
		}
	}

	// Finding prefix sum and index having maximum
	// prefix sum.
	int msum = arr[0], ind;
	for (int i = 1; i < maxi + 1; i++) {
		arr[i] += arr[i - 1];
		if (msum < arr[i]) {
			msum = arr[i];
			ind = i;
		}
	}

	return ind;


}


int main()
{
	int L[] = { 1, 5, 9, 13, 21 };
	int R[] = { 15, 8, 12, 20, 30 };
	int n = sizeof(L) / sizeof(L[0]);

	cout << maximumOccurredElement(L, R, n) << endl;
	return 0;
}