// https://leetcode.com/problems/target-sum/

class Solution {
public:

		int countSubset(vector<int>& nums, int n, int sum, vector<vector<int>>&dp){
	    if(dp[n][sum] != -1) return dp[n][sum];
	    if(n==0 and sum > 0) return 0;
	    else if(n==1){
	        if(sum==0){
	            if(nums[0] == 0) return 2;
	            else return 1;
	        }else{
	            if(nums[0] == sum) return 1;
	            else return 0;
	        }
	    }
	    else if(n==0 and sum==0) return 1;
	    
	    int ans = countSubset(nums, n-1, sum, dp);
	    if(nums[n-1] <= sum){
	        ans+=countSubset(nums,n-1, sum-nums[n-1], dp);
	    }
	    return dp[n][sum] = ans;
	}
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
				int sum = 0;
				for(auto x: nums) {sum += x;}
				if(sum < abs(target) || (target + sum) % 2 !=0 ) return 0;
				
				sum = (sum+target)/2;
				vector<vector<int>>dp(n+1, vector<int>(sum+1, -1));
        return countSubset(nums, n, sum, dp);
    }
};
