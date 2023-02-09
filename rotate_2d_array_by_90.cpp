class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
   int col = matrix.size();
   int row = col;
  
reverse(matrix.begin(), matrix.end());
for(int i=0; i<row; i++){
    for(int j=i+1; j<col; j++){
        swap(matrix[i][j], matrix[j][i]);
    }
}
    }
};
