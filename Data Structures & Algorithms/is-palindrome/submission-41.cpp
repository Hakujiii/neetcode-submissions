class Solution {
public:

    bool isPalindrome(string s) {
   
   for(int n = 0, m = s.size() -1; n < m; n++, m--){
   
   if(!isalnum(s[n])){n++;};
   if(!isalnum(s[m])){m--;};
   if(tolower(s[n]) == tolower(s[m])){
   
   return true;

   }
   
   
     }   
    return false;
    }

};
