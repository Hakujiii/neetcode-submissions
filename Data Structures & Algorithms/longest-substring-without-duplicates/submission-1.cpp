class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> hashSet;
        int l = 0;
        int res = 0;
        for(int r = 0; r < s.size(); r++){
         while(hashSet.find(s[r]) != hashSet.end()){
           hashSet.erase(s[l]);
           l++;
         }
         hashSet.insert(s[r]);
         res = max(res, r - l + 1);
        }
     return res;
    }
};
