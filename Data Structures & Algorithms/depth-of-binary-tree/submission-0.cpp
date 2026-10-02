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
        int depth = 0;
        if(root == nullptr){
            return 0;
        }
        while(!q.empty()){
            int currentSize = q.size();
           for(int i = 0; i < currentSize; i++){
             TreeNode* currentNode = q.front();
             if(currentNode->left != nullptr){
                q.push(currentNode->left);
             }
             if(currentNode->right != nullptr){
                q.push(currentNode->right);
             }
             q.pop();
         
           }
           depth++;
        }
     return depth;
    }
};
