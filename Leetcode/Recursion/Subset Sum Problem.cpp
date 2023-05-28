// https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1

/****************************** RECURSION *************************************************/
/****************************** TIME LIMIT EXCEEDED *************************************************/

class Solution{   
public:
    bool subsetSum(vector<int>arr, int n, int sum){
        if(n==0) return false;
        if(sum==0) return true;
        if(arr[n-1] <= sum){
            return subsetSum(arr, n-1, sum-arr[n-1]) || subsetSum(arr, n-1, sum);
        }else{
            return subsetSum(arr, n-1, sum);
        }
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here
        int n = arr.size();
        return subsetSum(arr, n, sum);
    }
};



/****************************** MEMOIZATION *************************************************/
class Solution{   
public:
    bool subsetSum(vector<int>arr, int n, int sum, vector<vector<int>>&dp){
        if(dp[n][sum] != -1) return dp[n][sum];
        if(arr[n-1] <= sum){
            return dp[n][sum] = subsetSum(arr, n-1, sum-arr[n-1], dp) || subsetSum(arr, n-1, sum, dp);
        }else{
            return dp[n][sum] = subsetSum(arr, n-1, sum, dp);
        }
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here
        int n = arr.size();
        vector<vector<int>>dp(n+1, vector<int>(sum+1, -1));
        for(int i=0; i<=sum; i++){
            dp[0][i] = false;
        }
        for(int i=0; i<=n; i++){
            dp[i][0] = true;
        }
        return subsetSum(arr, n, sum, dp);
    }
};
