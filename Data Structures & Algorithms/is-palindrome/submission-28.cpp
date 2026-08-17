class Solution {
public:
    bool isPalindrome(string s) {
    int n = 0;
    int m = s.size() - 2;
   for(int n = 0, m = s.size() -2; n < m; n++, m--){
   if(s[n] == s[m]){
   return true;
   break;
   }

   
     }   
    return false;
    }

};
