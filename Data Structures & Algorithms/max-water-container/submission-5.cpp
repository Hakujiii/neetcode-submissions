class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int maxArea = 0;
        while(l < r){
          int area = (r - l)*min(heights[l], heights[r]);
           if(heights[l] < heights[r]){
              l++;
           }
           else{
              r--;
           }
           maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};
