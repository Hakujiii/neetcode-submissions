class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int length = 0;
        int maxf = 0;
        int l = 0;
        for(int r = 0; r < s.size(); r++){
          count[s[r]]++;
         maxf = max(maxf, count[s[r]]);
         while((r - l + 1) - maxf > k){
             count[s[l]]--;
             l++;
         }
         length = max(length, r - l + 1);
        }
        return length;
    }
};
