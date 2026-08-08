class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashMap;
        for(const string s : strs ){
        string key = s;
        sort(key.begin(), key.end());
        hashMap[key].push_back(s);
        }

        vector<vector<string>> res;
        for(auto &x : hashMap){
        res.push_back(x.second);
        }
        return res;
    }
};
