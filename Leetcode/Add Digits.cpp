// https://leetcode.com/problems/add-digits/


class Solution {
public:
    
    int addDigitsHelper(int num){
        int sum = 0;
        while(num != 0){
            int digit = num % 10;
            sum += digit;
            num = num / 10;
        }
        return sum;
    }
    
    int addDigits(int num) {
        
        while(num > 9){
            num = addDigitsHelper(num);
        }
        
        return num;
    }
};
