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

// count the lenght of each node -> similar to the maxDepth problem.
// at each bending point, find it's longest path -> combine backward -> using recursion?

class Solution {
public:
  int best = 0;
    int diameterOfBinaryTree(TreeNode* root) {
       depth(root);
       return best;
    }
    int depth(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int l = depth(root->left);
        int r = depth(root->right);
        best = max(best, l + r);
        return 1 + max(l,r);
    }
};
