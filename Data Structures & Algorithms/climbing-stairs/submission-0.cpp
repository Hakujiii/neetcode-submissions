// n = (n - 1) + (n - 2).
// dynamic programing -> need something to store the value, and use it when needed.
// kinda like recursion but we don't have to compute a num twice or more.
// use hash map would be good? -> the key would be the step and the value would be number of ways to reach that step -> then we can use the sum of the previous two steps to calculate the new one.
// for each new steps taken, push it into the hash map, then use it for the next turn. -> the loop stops when it reach n.
// how to create the base case?
// using prefix?
// return the last element.
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
