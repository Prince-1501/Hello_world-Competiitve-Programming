// https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/1

class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
        int MOD = 1e9+7;
       //Your code here
       if(N==0) return 0;
       if(R==0) return 1;
       if(R%2==0){
           long long ans = power(N, R/2);
           return ( ans%MOD * ans%MOD  )%MOD;
       }else{
           long long ans = power(N, (R-1)/2);
           return ( ans%MOD * ans%MOD * N%MOD)%MOD;
       }
    }

};
