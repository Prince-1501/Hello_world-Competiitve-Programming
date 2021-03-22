// Question Link: https://practice.geeksforgeeks.org/problems/non-repeating-element3958/1


class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        unordered_map<int, int> umap;
        for(int i=0;i<n;i++)
            umap[arr[i]]++;
        
        // int key = arr[i];
        // umap[key]++;
        
        for(int i=0;i<n;i++){
            int key = arr[i];
            auto temp = umap.find(key);
            if(temp->second ==1)
                return key;
        }
        
        return 0;
    } 
  
};
