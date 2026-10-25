class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); // number of rows.
        int n = matrix[0].size();  // number of columns.

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

        int l = 0;
        int r = n - 1;
        while(l <= r){
            int mid = (l + r)/2;
            if(target == matrix[row][mid]){
                return true;
            }
            else if(target > matrix[row][mid]){
               l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
    return false;
    }
};
