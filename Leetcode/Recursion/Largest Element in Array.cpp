// https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        if(n==1) return arr[0];
        return max( largest(arr, n-1), arr[n-1] );
    }
};
