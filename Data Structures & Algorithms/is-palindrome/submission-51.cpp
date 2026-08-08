class Solution {
public:
    bool isPalindrome(string s) {
        
        for(int i = 0, m = s.size() - 1; i < m;){
        if(!isalnum(s[i])){i++;continue;}
        if(!isalnum(s[m])){m--;continue; }
        if(tolower(s[i]) != tolower(s[m])){
            return false;
        }
        i++;
        m--;
        }
     return true;
    }
};
