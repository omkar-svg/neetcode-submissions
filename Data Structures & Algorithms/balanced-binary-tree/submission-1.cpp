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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
         int left = helper(root->left);
         int right = helper(root->right);
         bool k = true;
         if(abs(right-left)>1) k = false;
         return isBalanced(root->left)&&isBalanced(root->right)&&k;
    }
    int helper(TreeNode* root){
         if(!root)
         return 0;

         return 1+max(helper(root->left),helper(root->right));
    }
};
