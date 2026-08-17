class Solution {
public:
    bool isPalindrome(string s) {
    int n = 0; 
    int m = s.size() - 1;
    while( n<m){
    if(s[n] == s[m]){
     return true;
    }
    else{
        return false;
    }

    }


    }
};
