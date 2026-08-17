class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freMap;
        for(int num : nums){
          freMap[num]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for(const auto &input : freMap ){
          minHeap.push({input.second, input.first});
          if(minHeap.size() > k){
             minHeap.pop();   
          }
        }
        vector<int> res;
        for(const auto &x : freMap){
            res.push_back(x.first);
            if(res.size() == k){
             return res;
            }
        }
        return res;
    }
};
