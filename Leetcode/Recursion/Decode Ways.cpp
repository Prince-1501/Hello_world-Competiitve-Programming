// https://leetcode.com/problems/decode-ways/

vector<int>dp(101, -1);
class Solution {
public:
    int n = 0;
    int numDecodingsHelper(string s, int pos){
        if(pos == n) return 1;
        if(s[pos] == '0') return 0;
        
        if(dp[pos] != -1) return dp[pos];

        int count = numDecodingsHelper(s , pos+1);
        if(pos < n-1 && s.substr(pos, 2) < "27"){
            count += numDecodingsHelper(s, pos+2);
        }
        return dp[pos] = count;
    }
    int numDecodings(string s) {
        n = s.size();
        fill(dp.begin(), dp.end(), -1);
        return numDecodingsHelper(s, 0);
    }
};
