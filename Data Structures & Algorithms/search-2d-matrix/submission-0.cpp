class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(vector<int> &nums : matrix){
           for(int &num : nums){
             if(num == target){
                return true;
             }
           }
        }
        return false;
    }
};
