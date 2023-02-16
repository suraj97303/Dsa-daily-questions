/**
 * Definition for a binary tree node.

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        int ans = max(left, right);
        return 1+ans;
    }
};
