class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freMap;
        for(int num : nums){
           freMap[num]++;
        }
        vector<vector<int>> buckets(nums.size() + 1);
          for(const auto &entry : freMap){
            buckets[entry.second].push_back(entry.first);
          }
          vector<int> res;
          for(int i = nums.size(); i >= 0; i--){
           for(const auto &x : buckets[i]){
            res.push_back(x);
            if(res.size() == k){
                return res;
            }
           }
          }
          return res;
    }
};
