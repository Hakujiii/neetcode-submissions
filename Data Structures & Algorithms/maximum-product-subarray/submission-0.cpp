class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int maxProduct = nums[0];
       int product = 1;
       for(int r = 0; r < nums.size(); r++){
        product *= nums[r];
        maxProduct = max(maxProduct, product);
        if(nums[r] == 0){
            product = 1;
        }
       }
       product = 1;
       for(int l = nums.size() - 1; l >= 0; l--){
        product *= nums[l];
        maxProduct = max(maxProduct, product);
        if(nums[l] == 0){
            product = 1;
        }
       } 
       return maxProduct;
    }
};
