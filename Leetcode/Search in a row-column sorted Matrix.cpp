// https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1



bool search(vector<vector<int> > matrix, int n, int m, int x) 
{
    // code here
    int row=0;
    for(int i=0;i<n;i++){
        if(matrix[i][0] == x)
            return true;
        else if(matrix[i][0] > x)
        {
            row = i-1;  
            break;
        }else{
            row = i;
        }
    }
    
    if(row>=0){
        for(int i=0;i<m;i++){
            if(matrix[row][i] == x)
                return true;
        }
    }
    
    return false;
    
}
