class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        unordered_map<int, int> hashMap;
        for(int i = 0; i < nums.size(); i++){
       int complement = target - nums[i];
       if(hashMap.find(complement) != hashMap.end()){
       indices.push_back(hashMap.find(complement) -> second);
       indices.push_back(i);
       }
       hashMap[nums[i]] = i;
        }
        return indices;

    }
};
