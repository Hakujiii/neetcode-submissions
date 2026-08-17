class Solution {
public:

    bool isPalindrome(string s) {
   
   for(int n = 0, m = s.size() -1; n < m; n++, m--){
   
   if(!isalnum(s[n])){n++; continue;};
   if(!isalnum(s[m])){m--; continue;};
 if(s[n] == s[m]){
   
   return true;

   }

   
     }   
    return false;
    }

};
