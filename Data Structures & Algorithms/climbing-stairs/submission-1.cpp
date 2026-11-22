class Solution {
public:
    int climbStairs(int n) {
          unordered_map<int, int> steps; //  steps[i] = number of ways to reach that step.
        steps[0] = 1;
        steps[1] = 2;
        for(int i = 2; i < n; i++){
            steps[i] = steps[i - 1] + steps[i - 2];
        }
        return steps[n - 1];
        
    }
};
