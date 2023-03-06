// https://practice.geeksforgeeks.org/problems/sum-of-array2326/1

class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    // code here
	    if(n == 0) return 0;
	    return arr[n-1] + sum(arr, n-1);
	}
};
