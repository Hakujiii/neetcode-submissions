class Solution {
public:
    bool checkInclusion(string s1, string s2) {
            unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        for(char c : s1){
            map1[c]++;
        }
        int n = s1.size();
        int l = 0;
        for(int r = 0; r < s2.size(); r++){
            map2[s2[r]]++;
            while(r - l + 1 > n){
              map2[s2[l]]--;
              if(map2[s2[l]] == 0){
                map2.erase(s2[l]);
              }
              l++;
            }
             if(map1 == map2){
            return true;
            }
        }
        return false;
    
    }
};
