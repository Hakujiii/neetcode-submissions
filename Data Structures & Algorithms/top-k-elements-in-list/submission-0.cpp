class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int, int> frequencyMap;
     for(int num : nums){
     frequencyMap[num]++;
     }
     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
     for(const auto& entry : frequencyMap){
        minHeap.push({entry.first, entry.second});
        if(minHeap.size() > k){
        minHeap.pop();
        }
     }
     vector<int> res;
     for(int i = 0; i < k; i++){
    res.push_back(minHeap.top().first);
    minHeap.pop();
     }

     return res;
        

    
    }
};
