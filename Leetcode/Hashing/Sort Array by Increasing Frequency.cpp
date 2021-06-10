// https://leetcode.com/problems/sort-array-by-increasing-frequency/

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int>umap;
        for(auto x: nums){
            umap[x]++;
        }
        
        sort(nums.begin(), nums.end() , [&](int a , int b) 
             { return  umap[a] != umap[b] ? umap[a] < umap[b] :  a > b ; } );
        
        return nums;
    }
};
