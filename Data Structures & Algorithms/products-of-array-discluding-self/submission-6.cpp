class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
       vector<int> prefix(n);
       vector<int> suffix(n);
       vector<int> res(n);

       prefix[0] = 1;
       for(int i = 1; i < n; i++){
          prefix[i] = nums[i - 1] * prefix[i - 1];
       }
       suffix[n - 1] = 1;
       for(int i = n - 2; i >= 0; i--){
          suffix[i] = nums[i + 1] * suffix[i + 1];
       }
        for(int i = 0; i < n; i++){
          res[i] = prefix[i]*suffix[i];
        }
       return res;
    }
};
