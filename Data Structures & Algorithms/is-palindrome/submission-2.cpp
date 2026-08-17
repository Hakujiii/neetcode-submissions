class Solution {
public:
    bool isPalindrome(string s) {
    
   for(int n = 0; n < s.size(); n++){
    for(int m = 0; m < s.size()-1 ; m--){
    if(n == m){
    return true;
    }
    return false;
    }

   }

    }
};
