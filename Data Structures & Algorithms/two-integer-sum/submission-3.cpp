class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> target_indexes;
    
        unordered_map<int, int> hashTable;
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
        if(hashTable.find(complement) != hashTable.end()){
         target_indexes.push_back(i);
         target_indexes.push_back(complement);
         break;
        }
          else{
            hashTable[nums[i]] = i;
          }
        }
        return target_indexes;
        }

    
};
