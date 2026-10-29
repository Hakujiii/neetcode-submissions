class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(const vector<char> &rows : board){
            unordered_set<char> numSet1;
            for(char c : rows){
              if(c == '.'){
                continue;
              }
              if(numSet1.find(c) != numSet1.end()){
                return false;
              }
              numSet1.insert(c);
            }
        }

        for(int col = 0; col < 9; col++){
            unordered_set<char> numSet2;
            for(int row = 0; row < 9; row++){
                char c = board[row][col];
                if(c == '.'){
                    continue;
                }
                if(numSet2.find(c) != numSet2.end()){
                    return false;
                }
                numSet2.insert(c);
            }
        }

        for(int boxRow = 0; boxRow < 3; boxRow++){
            for(int boxCol = 0; boxCol < 3; boxCol++){
                unordered_set<char> numSet3;
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 3; j++){
                        char c = board[boxRow*3 + i][boxCol*3 + j];
                        if(c == '.'){
                            continue;
                        }
                        if(numSet3.find(c) != numSet3.end()){
                            return false;
                        }
                        numSet3.insert(c);
                    }
                }
            }
        }
        return true;
    }
};
