// when we meet a house -> there would be 2 options -> rob it or not.
// if decided to rob -> then take the money from that house, add it to the sum from the previous two steps.
// if not rob -> then the money we have would be the money of the previous house.
// we could use either recursion or dp to solve this
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 1, 0);
        dp[0] = 0;
        dp[1] = nums[0];
        for(int i = 2; i <= n; i++){
            dp[i] = max(dp[i - 1], nums[i - 1] + dp[i - 2]);
        }
        return dp[n];
    }
};
