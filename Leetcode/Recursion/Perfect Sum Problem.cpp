// https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1


/****************************** RECURSION *************************************************/
/****************************** TIME LIMIT EXCEEDED *************************************************/

class Solution{

	public:
	int mod = 1e9+7;  // 1000000007
	int countSubset(int arr[], int n, int sum){
	    if(n==0 and sum > 0) return 0;
	    else if(n==1){
	        if(sum==0){
	            if(arr[0] == 0) return 2;
	            else return 1;
	        }else{
	            if(arr[0] == sum) return 1;
	            else return 0;
	        }
	    }
	    else if(n==0 and sum==0) return 1;
	    
	    if(arr[n-1] <= sum){
	        return countSubset(arr,n-1, sum-arr[n-1]) + countSubset(arr, n-1, sum);
	    }else
	        return countSubset(arr, n-1, sum);
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        return countSubset(arr, n, sum);
        
	}
	  
};


/****************************** MEMOIZATION *************************************************/

class Solution{

	public:
	int mod = 1e9+7;  // 1000000007
	int countSubset(int arr[], int n, int sum, vector<vector<int>>&dp){
	    if(dp[n][sum] != -1) return dp[n][sum];
	    if(n==0 and sum > 0) return 0;
	    else if(n==1){
	        if(sum==0){
	            if(arr[0] == 0) return 2;
	            else return 1;
	        }else{
	            if(arr[0] == sum) return 1;
	            else return 0;
	        }
	    }
	    else if(n==0 and sum==0) return 1;
	    
	    int ans = countSubset(arr, n-1, sum, dp) % mod;
	    if(arr[n-1] <= sum){
	        ans+=countSubset(arr,n-1, sum-arr[n-1], dp);
	        ans %= mod;
	    }
	    return dp[n][sum] = ans;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>>dp(n+1, vector<int>(sum+1, -1));
        return countSubset(arr, n, sum, dp) % mod;
        
	}
	  
};
