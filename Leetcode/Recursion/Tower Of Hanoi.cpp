// https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1

class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long count = 0;
    void TOHHelper(int N, int from, int to, int aux){
        if(N>0){
            TOHHelper(N-1, from, aux, to);
            cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
            count++;
            TOHHelper(N-1, aux, to, from);
        }
    } 
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        TOHHelper(N, from, to , aux);
        return count;
    }

};
