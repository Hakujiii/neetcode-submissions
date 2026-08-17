class Solution {
public:
    bool isPalindrome(string s) {
    int n = 0; 
    int m = s.size() - 1;
    while(n<m){
        n++;
    m--;
    if(s[n] != s[m]){
     return false;
   
    }
    
    
    }
    return true;
    }
};
