class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
         int diff = target - nums[i];
        if(hashMap.find(diff) != hashMap.end()){
         res.push_back(hashMap.find(diff) -> second);
         res.push_back(i);
        }
        hashMap[nums[i]] = i;
        }
        return res;
    }
};
