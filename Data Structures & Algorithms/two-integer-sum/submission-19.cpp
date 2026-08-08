class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> hashMap;
       for(int i = 0; i < nums.size(); i++){
       int diff = target - nums[i];
       if(hashMap.find(diff) != hashMap.end()){
        ans.push_back(hashMap.find(diff) -> second);
        ans.push_back(i);
       }
      
       hashMap[nums[i]] = i;
       } 
       return ans;
    }
};
