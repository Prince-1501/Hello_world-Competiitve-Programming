// https://leetcode.com/problems/perfect-squares/

vector<int>dp(10001, -1);
class Solution {
public:
    int solve(int n){
        if(n<=0) return 0;
        int ans = INT_MAX;
        if(dp[n] != -1) return dp[n];

        for(int i=1; i*i<=n; i++){
            int sqnum = i*i;
            int count = 1+ solve(n-sqnum);
            ans = min(ans, count);
        }
        return dp[n] = ans;
    }
    int numSquares(int n) {
        return solve(n);
    }
};
