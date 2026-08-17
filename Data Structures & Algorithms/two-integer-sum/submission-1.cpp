class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> target_indexes;
        int complement;
        unordered_map<int, int> hashTable;
        for(int i = 0; i < nums.size(); i++){
            complement = target - nums[i];
        if(hashTable.find(complement) != hashTable.end()){
         target_indexes.push_back(i);
         target_indexes.push_back(complement);
        }

        }
        return target_indexes;
        }

    
};
