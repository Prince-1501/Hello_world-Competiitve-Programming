// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// Pattern Matching Algorithm by using KMP Algorithm

class Solution {
public:
    
    vector<int> fillLPS(string str){
        int n = str.size();
        vector<int>lps(n,0);
        int len =0, i = 1;
        lps[0]=0;
        while(i<n){
            if(str[len] == str[i]){
                len++;
                lps[i] = len;
                i++;
            }else{
                if(len == 0){
                    lps[i]=0;
                    i++;
                }else{
                    len = lps[len-1];
                }
            }
        }
        return lps;
    }
    
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        vector<int>lps = fillLPS(needle);
        int i=0, j=0;
        while(i<n){
            if(haystack[i] == needle[j]){
                i++;
                j++;
                if(j==m){
                    return i-j;
                }
            }
            else if(i<n && haystack[i] != needle[j]){
                if(j==0)
                    i++;
                else{
                    j = lps[j-1];
                }
            }
        }
        return -1;
    }
    
    
};



/* SOLUTION NAIVE APPROACH */

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0, j=0, n= haystack.size(), m = needle.size();
        if(haystack == needle) return 0;
        while(i<n){
            if(haystack[i] == needle[j]){
                int index = i;
                string temp = "";
                while(i<n && j<m && haystack[i] == needle[j]){
                    temp += haystack[i];
                    i++;
                    j++;
                }
                if(temp == needle){
                    return index;
                }else{
                    i=index+1;
                    j = 0;
                }

            }else{
                i++;
            }
        }
        return -1;
    }
};
