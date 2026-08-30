class Solution {
public:
    bool isValid(string s) {
       unordered_map<char, char> hashMap = {{')', '('}, {']', '['}, {'}', '{'}};
       stack<char> stackk;
       for(char c : s){
        if(hashMap.count(c)){
          if(!stackk.empty() && hashMap[c] == stackk.top()){
            stackk.pop();
          }
          else{
            return false;
          }
        }else{
        stackk.push(c);
        }
       }
       return stackk.empty();
    }
};
