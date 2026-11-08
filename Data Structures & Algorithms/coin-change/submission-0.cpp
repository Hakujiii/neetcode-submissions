class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<long long> dp(amount + 1, INT_MAX);
        dp[0] = 0;
        for(int i = 0; i <= amount; i++){
            for(int &coin : coins){
                if(i - coin >= 0 && dp[i - coin] >= 0){
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }
        if(dp[amount] != INT_MAX){
           return dp[amount];
        }
        return -1;
    }
};
