class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> res;
        for(int num : nums){
        if(res.count(num)){
          return true;

        }
        else{
            res.insert(num);
        }
        }
        return false;
    }
};