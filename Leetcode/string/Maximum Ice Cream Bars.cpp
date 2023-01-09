// https://leetcode.com/problems/maximum-ice-cream-bars/

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ans = 0;
        sort(costs.begin(), costs.end());
        for(auto x: costs){
            if(coins >= x){
                ans++; coins-=x;
            }
        }
        return ans;
    }
};
