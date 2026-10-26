class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<pair<int, int>> temp;
        for(int i = 0 ; i < n; i++){
            while(!temp.empty() && temp.top().first < temperatures[i]){
                int indexes = temp.top().second;
                ans[indexes] = i - indexes;
                temp.pop();
            }
            temp.push({temperatures[i], i});
        }
        return ans;
    }
};
