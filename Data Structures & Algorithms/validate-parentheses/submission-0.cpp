class Solution {
public:
    bool isValid(string s) {
    stack<char> store;
    unordered_map<char, char> m = {{')', '('}, {']', '['}, {'}', '{'}};
    for(char c : s){
      if(m.count(c)){
      if(!store.empty() && store.top() ==  m[c]){
        store.pop();
      }
      else{
        return false;
      }}
      else{
        store.push(c);
      }
      
      
    }
     return store.empty();
    }
};
