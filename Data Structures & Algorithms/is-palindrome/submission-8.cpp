class Solution {
public:
    bool isPalindrome(string s) {
    
   for(int n = 0; n < s.size(); n++){
    for(int m = s.size() - 1; m >=0 ; m--){
    if(s[n] == s[m]){
    return true;
    break;
    }
    else{ return false;}
    }

   }

    }
};
