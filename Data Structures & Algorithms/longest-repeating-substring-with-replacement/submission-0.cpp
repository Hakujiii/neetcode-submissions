class Solution {
public:
    int characterReplacement(string s, int k) {
      unordered_map<char, int> freMap;
      for(char c : s){
         freMap[c]++;
      }
      int length = 0;
      for(auto const& entry : freMap){
        char res = entry.first;
        int l = 0;
        int countChar = 0;
           for(int r = 0; r < s.size(); r++){
             if(s[r] == res){
               countChar++;
             }
             while((r - l + 1) - countChar > k){
                if(s[l] == res){
                countChar--;
                }
                l++;
             }
             length = max(length, r - l + 1);
           }
      }
      return length;
    }
};
