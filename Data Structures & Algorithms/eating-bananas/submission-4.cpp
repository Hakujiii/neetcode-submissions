// binary search? -> search in range of the result, not in the array
// the range would be 1 - h. -> the maximum num is h.
// need 2 pointers - one at the start and one at the end of the res.
// put them in the while loop?
// need something to compute the eating time per piles.

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = 0;
        
        for(int &pile : piles){
           r = max(r, pile);
        }
        int ans = l;
        while(l <= r){
          int mid = (l + r)/2;
          int k = mid;
          long long sum = 0;
          for(int &num : piles){
            int hours = (num + k - 1)/k;
            sum += hours;
          }
          if(sum <= h){
            ans = mid;
            r = mid - 1;
          }
          else{
            l = mid + 1;
          }
        }
        return ans;
    }
};
