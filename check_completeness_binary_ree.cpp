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
    bool isCompleteTree(TreeNode* root) {
        
         queue<TreeNode*>q;
         q.push(root);
         bool ans=true;
         int c=0;
         while(!q.empty())
         {
             int nn=q.size();
             for(int k=1;k<=nn;k++)
             {
                 TreeNode* top=q.front();
                 q.pop();
                 if(c==1)
                 {
                     if(top!=NULL)
                     {
                         return false;
                     }
                 }
                 if(top==NULL)
                 {
                     c=1;
                 }
                 if(top!=NULL)
                 {
                     q.push(top->left);
                     q.push(top->right);
                 }

             }
         }
         return true;
    }
};
