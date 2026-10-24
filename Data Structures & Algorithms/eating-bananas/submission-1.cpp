class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = 0;
        int k = 0;
 
        for(int &pile : piles){
            r = max(r, pile);
        }
        int ans = l;
        while(l <= r){
            int mid = (l + r)/2;
            int k = mid;
            long long sum = 0;
            for(int &pile : piles){
                int hours = (pile + k -1)/k;
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
