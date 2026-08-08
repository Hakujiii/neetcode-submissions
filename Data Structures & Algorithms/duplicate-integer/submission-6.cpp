class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> ans;
        for(int num : nums){
    
         if(ans.count(num)){
        return true;

         }
         else{
            ans.insert(num);
         }



        }
    return false ;



    }
};