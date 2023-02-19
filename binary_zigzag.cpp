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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>>ans;
        if(!root) return ans;

        queue<TreeNode*>q;
        q.push(root);
        int flag = 1;
        // 1 -> left to right
        while(!q.empty()) {
            int s = q.size();
            vector<int>temp(s);
            for(int i=0; i<s; i++) {
                TreeNode* t = q.front();
                q.pop();

                int ind = (flag == 1) ? i : s-1-i;
                temp[ind] = t->val;

                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }

            flag = !flag;
            ans.push_back(temp);
        }
        return ans;
    }
    
};
