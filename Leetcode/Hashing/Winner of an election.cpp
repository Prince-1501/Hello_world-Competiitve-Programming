//  https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1

class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        
        unordered_map<string , int>umap;
        for(int i=0;i<n;i++){
            umap[arr[i]]++;
        }
        
        string name = "";
        int max_vote = 0;
        
        for(auto itr = umap.begin(); itr!=umap.end(); itr++){
            string key = itr->first;
            int val = itr->second;
            
            if(val>max_vote){
                max_vote = val;
                name = key;
            }
            else if(val == max_vote){
                if(key<name)
                    name = key;
            }
        }
        
        vector<string> ans;
        ans.push_back(name);
        string temp = to_string(max_vote);
        ans.push_back(temp);
        
        return ans;
    }  
};
