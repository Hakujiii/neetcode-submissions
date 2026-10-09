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

class Solution {
public:
    int maxDepth(TreeNode* root) {
        stack<pair<TreeNode*, int>> s;
        s.push({root, 1});
        if(root == nullptr){
           return 0;    
        }
        int res = 0;
        while(!s.empty()){
          pair<TreeNode*, int> current = s.top();
          s.pop();
          TreeNode* node = current.first;
          int depth = current.second;
          if(node != nullptr){
            res = max(res, depth);
            s.push({node->left, depth + 1});
            s.push({node->right, depth + 1});
          }
        }
        return res;
    }
};
