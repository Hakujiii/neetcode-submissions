class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<int> count(26, 0);
    unordered_map<string, vector<string>> hashMap;
    for( string s : strs){
    fill(count.begin(), count.end(), 0);
    for(char c : s){
        count[c - 'a']++;
    }
    string key = to_string(count[0]);
   for(int i = 0; i < 26; i++){
    key += to_string(count[i]) ;
   } 
   hashMap[key].push_back(s);
   
   
   }
    vector<vector<string>> res;
   for(const auto &x : hashMap){
    res.push_back(x.second);
    
    }
    return res;
  
    }
   

};
