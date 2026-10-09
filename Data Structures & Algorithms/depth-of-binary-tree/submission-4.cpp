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
        queue<TreeNode*> q;
        q.push(root);
        if(root == nullptr){
           return 0;
        }
        int depth = 0;
        while(!q.empty()){
           int currentSize = q.size();
            for(int i = 0; i < currentSize; i++){
                TreeNode* current = q.front();
               if(current->left != nullptr){
                  q.push(current->left);
               }
               if(current->right != nullptr){
                  q.push(current->right);
               }
               q.pop();
            }
         depth++;
        }
        return depth;
    }
};
