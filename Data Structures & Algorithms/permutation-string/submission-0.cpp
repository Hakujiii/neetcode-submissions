class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> map1, window;
        for(char &c : s1){
            map1[c]++;
        }
        
        int  l = 0;
        int n = s1.size();
        for(int r = 0; r < s2.size(); r++){
            window[s2[r]]++;
            while(r - l + 1 > n){
                window[s2[l]]--;
                if(window[s2[l]] == 0){
                    window.erase(s2[l]);
                }
                l++;
            }
              if(window == map1){
            return true;
          }
        }
     
    
            return false;
    
        
    }
};
