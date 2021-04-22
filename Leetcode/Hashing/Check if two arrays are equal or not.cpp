// Question Link: https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int n) {
        //code here
        unordered_map<ll,ll>umap;
        for(int i=0;i<n;i++)
            umap[A[i]]++;
        for(int i=0;i<n;i++){
            ll key = B[i];
            if(umap.find(key)!=umap.end()){
                auto itr = umap.find(key);
                
                if(itr->second>0)
                    itr->second--;
                else
                    return false;
                
            }else
                return false;
        }
        
        return true;
    }
};
