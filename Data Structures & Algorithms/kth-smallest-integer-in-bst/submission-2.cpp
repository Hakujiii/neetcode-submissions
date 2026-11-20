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
// traverse to the very bottom left of the tree -> count up from that -> since that's the lowest point possible.
// when count == k, return the root->value;
class Solution {
public:  
    int count = 0;
    int ans = 0;
     void  inorder(TreeNode* root, int k){
      if(root == nullptr){
        return;
      }   
      inorder(root->left, k);
      count++;
      if(count == k){
        ans = root->val;
        return;
      }
       inorder(root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return ans;
    }
};
