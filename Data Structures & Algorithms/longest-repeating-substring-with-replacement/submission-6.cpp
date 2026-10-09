class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freMap;
        int l = 0;
        int maxF = 0;
        int length = 0;
        for(int r = 0; r < s.size(); r++){
            freMap[s[r]]++;
            maxF = max(maxF, freMap[s[r]]);
             if((r - l + 1) - maxF > k){
              freMap[s[l]]--;
              l++;
           }
          length = max(length, r - l + 1);
        }
        return length;
    }
};
