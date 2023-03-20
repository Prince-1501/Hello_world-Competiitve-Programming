// https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1

vector<long long int>dp(1001, -1);
class Solution {
  public:
    int mod = 1000000007;
    long long int nthFibonacci(long long int n){
        if(dp[n] != -1) return dp[n];
        // code here
        if(n<=1){
            return dp[n] = n;
        };
        return dp[n] = (nthFibonacci(n-1)%mod + nthFibonacci(n-2)%mod)%mod;
    }
};
