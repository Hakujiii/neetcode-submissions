class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double> carFleet;
        vector<pair<int, int>>  cars;
        for(int i = 0; i < position.size(); i++){
           cars.push_back(make_pair(position[i], speed[i]));            
        }
        int fleets = 0;
        sort(cars.begin(), cars.end());
        for(int i = cars.size() - 1; i >= 0; i--){
           int s = cars[i].second;
           int p = cars[i].first;
           double t = (target - p)/(double)s;
           if(carFleet.empty() || t > carFleet.top()){
              carFleet.push(t);
              fleets++;
           }
           
        }
     return fleets;
    }
};
