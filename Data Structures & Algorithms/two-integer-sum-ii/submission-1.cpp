class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> hashMap;
        vector<int> res;
        for(int i = 0; i < numbers.size(); i++){
            int diff = target - numbers[i];
            if(hashMap.count(diff)){
              res.push_back(hashMap[diff]);
              res.push_back(i + 1);
            }
            hashMap[numbers[i]] = i + 1;
        }
        return res;

    }
};
