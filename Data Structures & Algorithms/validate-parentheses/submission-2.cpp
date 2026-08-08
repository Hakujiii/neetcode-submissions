class Solution {
public:
    bool isValid(string s) {
    stack<char> stackk;
    unordered_map<char, char> hashMap = {{')', '('}, {']', '['}, {'}', '{'}};
    for(char c : s){
    if(hashMap.count(c)){
    if(!stackk.empty() && stackk.top() == hashMap[c] ){
    stackk.pop();
    }
    else{
      return false;
    }
    }
    else{
      stackk.push(c);
    }
    }
return stackk.empty();



    }
};
