// Question Link: https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1

int NumberofElementsInIntersection (int a[], int b[], int n, int m )
{
    // Your code goes here
    unordered_set<int>s;
    for(int i=0;i<n;i++)    
        s.insert(a[i]);
    
    int count=0;
    for(int i=0;i<m;i++){
        int key = b[i];
        if(s.find(key)!=s.end()){
            count++;
            s.erase(key);
        }
    }
    return count;
}
