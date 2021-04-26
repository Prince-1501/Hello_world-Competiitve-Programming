// Link: https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int>s;
        int pre_sum=0;
        for(int i=0;i<n;i++){
            pre_sum += arr[i];
            
            if(pre_sum == 0)
                return true;
            if(s.find(pre_sum)!=s.end())
                return true;
            
            s.insert(pre_sum);
        }
        return false;
    }
};
