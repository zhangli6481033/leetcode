/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return issym(root->left,root->right);
    }
    bool issym(TreeNode* left,TreeNode* right){
        if(!left&&!right) return true;
        if(!left||!right||left->val!=right->val) return false;
        return issym(left->left,right->right)&&issym(left->right,right->left);
    }
};
