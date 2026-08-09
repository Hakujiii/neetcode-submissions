class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freMap;
        for(int num : nums){
        freMap[num]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for(auto &entry : freMap){
         minHeap.push({entry.second, entry.first});
         if(minHeap.size() > k){
         minHeap.pop();
         }
        }
        vector<int> res;
        for(int i = 0; i < k; i++){
        res.push_back(minHeap.top().second);
        minHeap.pop();
        if(res.size() == k){
            return res;
        }
        
        }
        return res;
    }
};
