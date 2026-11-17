class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> weights; // maxHeap.
        for(int i = 0; i < stones.size(); i++){
            weights.push(stones[i]);
        }
        while(weights.size() >= 2){
           int max1 = weights.top();
           weights.pop();
           int max2 = weights.top();
           weights.pop();
           if(max1 != max2){
             weights.push(max1 - max2);
           }
           else{
            continue;
           }
        }
        if(weights.empty()){
            return 0;
        }
        return weights.top();
    }
};
