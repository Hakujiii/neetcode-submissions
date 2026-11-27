class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int maxSub = nums[0], currSum = 0;
       for(int &num : nums){
        if(currSum < 0){
            currSum = 0;
        }
        currSum += num;
        maxSub = max(maxSub, currSum);
       }
       return maxSub;
    }
};
