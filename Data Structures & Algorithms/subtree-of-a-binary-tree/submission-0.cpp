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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr){
           return false;
        }
        
         return sameTree(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
       
    }
    bool sameTree(TreeNode* root, TreeNode* subRoot){
        if (root == nullptr && subRoot == nullptr) {
         return true;
         }
        if(root == nullptr || subRoot == nullptr){
           return false;
        }
        if(root->val != subRoot->val){
           return false;
        }
        
       return sameTree(root->left, subRoot->left) && sameTree(root->right, subRoot->right);
    }
};
