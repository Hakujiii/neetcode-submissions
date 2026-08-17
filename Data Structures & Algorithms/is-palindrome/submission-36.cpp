class Solution {
public:
    bool isPalindrome(string s) {
    int n = 0;
    int m = s.size() - 2;
   for(int n = 0, m = s.size() -2; n < m; n++, m--){
   if(s[n] == s[m]){
   if(!isalnum(s[n])){n++; continue;};
   if(!isalnum(s[m])){m--; continue;};

   
   return true;

   }

   
     }   
    return false;
    }

};
