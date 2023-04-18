// https://leetcode.com/problems/divisor-game/

class Solution {
public:
    bool divisorGame(int n) {
        // if(n<=1) return false;
        // for(int x=1; x<n; x++){
        //     if(n%x==0){
        //         return !divisorGame(n-x);
        //     }
        // }
        // return false;

        if(n%2==0)return true;
        return false;
    }
};
