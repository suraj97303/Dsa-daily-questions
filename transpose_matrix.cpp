class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;    //2-d vector
        for(int i=0;i<matrix[0].size();i++)    
        {
            vector<int> v;
            for(int j=0;j<matrix.size();j++)
            {
                v.push_back(matrix[j][i]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
