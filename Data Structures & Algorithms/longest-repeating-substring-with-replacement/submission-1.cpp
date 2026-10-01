class Solution {
public:
    int characterReplacement(string s, int k) {
     unordered_map<char, int> freMap;
     for(char c : s){
        freMap[c]++;
     }
      int length = 0;
     for(const auto &entry : freMap){
         char res = entry.first;
          int l = 0;
      int countRes = 0;
     for(int r = 0; r < s.size(); r++){
       if(s[r] == res){
          countRes++;
          }
        while((r - l + 1) - countRes > k){
            if(s[l] == res){
           countRes--;
            }
           l++;
        }
    
      length = max(length, r - l + 1);
     }
   
     }
     return length;
    }
};
