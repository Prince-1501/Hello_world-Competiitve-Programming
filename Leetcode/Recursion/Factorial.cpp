// https://practice.geeksforgeeks.org/problems/factorial5739/1

class Solution{
public:
    long long int factorial(int N){
        //code here
        if(N<=1) return 1;
        return N * factorial(N-1);
    }
};
