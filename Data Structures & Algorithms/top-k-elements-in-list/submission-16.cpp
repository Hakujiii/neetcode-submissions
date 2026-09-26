class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> freqMap;
        for(int num : nums){
          freqMap[num]++;
        }
        vector<vector<int>> buckets(nums.size() + 1);
        for(auto const &entry : freqMap){
           buckets[entry.second].push_back(entry.first);
        }
        vector<int> res;
        for(int i = buckets.size() - 1; i >=0; i--){
          for(auto const &x : buckets[i]){
              res.push_back(x);
            if(res.size() == k){
                  return res;
            }
          }
        }
        return res;
    }
};
