class Solution {
public:
    bool isPalindrome(string s) {
    int n = 0;
    int m = s.size() -1;
    while(n < m){
    if(!isalnum(s[n])){n++; continue;}
    if(!isalnum(s[m])){m--; continue;}
    if(tolower(s[n]) != tolower(s[m])){
        return false;
    }
    n++;
    m--;
    }
    return true;
    }
};
