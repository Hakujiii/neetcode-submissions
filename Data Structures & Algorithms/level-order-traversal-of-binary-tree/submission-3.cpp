/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// nodes are on the same level share the same key in the map 
// keys are levels.
// traverse from top to bottom then check for their level -> dfs.

class Solution {
public:
    void dfs(TreeNode* root, int level, unordered_map<int, vector<int>> &hashMap){
     // traverse from left to right.
     if(root == nullptr){
        return;
     }  
     hashMap[level].push_back(root->val);
     dfs(root->left, level + 1, hashMap);
     dfs(root->right, level + 1, hashMap);

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>> res;
       unordered_map<int, vector<int>> hashMap; 
       dfs(root, 0, hashMap);  
       for(int level  = 0; level < hashMap.size(); level++){
        res.push_back(hashMap[level]);
       }
       return res;
    }
};
