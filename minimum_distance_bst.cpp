class Solution {
public:
    void inOrder(TreeNode* root,vector<int>& vec){
        if(root==NULL)
            return;
        inOrder(root->left,vec);
        vec.push_back(root->val);
        inOrder(root->right,vec);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> vec;
        inOrder(root,vec);
        int size=vec.size(),mini=1e5+1;
        for(int i=0;i<size-1;i++)
            mini=min(mini,(vec[i+1]-vec[i]));
        return mini;
    }
};
