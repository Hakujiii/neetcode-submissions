class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0;
        int bot = m - 1;
        int row = -1;
        while(top <= bot){
            int mid = (top + bot)/2;
              if(target >= matrix[mid][0]){
                row = mid;
                top = mid + 1;
              }
              else{
                bot = mid - 1;
              }
        }
        if(row == -1){
            return false;
        }
       
       int left = 0;
       int right = n - 1;
       while(left <= right){
          int mid = (left + right)/2;
          if(target == matrix[row][mid]){
             return true;
          }
          else if(target >= matrix[row][mid]){
            left = mid + 1;
          }
          else{
            right = mid - 1;
          }
       }
      return false;
    }
};
