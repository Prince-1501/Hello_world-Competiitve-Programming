// https://practice.geeksforgeeks.org/problems/reverse-a-string/1

string reverseWord(string str){
    
  //Your code here
  if(str.size() == 0 || str.size()== 1) return str;
  return reverseWord(str.substr(1)) + str[0];
}
