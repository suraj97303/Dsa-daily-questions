class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string w = s;
        reverse(s.begin(),s.end());
        int n = s.size();
        
        // dp_ij: longest subsequence at s_i and w_j
        vector<vector<int>> dp(n+1, vector<int>(n+1));
        for (int i = 1; i < n+1; i++){
            for (int j = 1; j < n+1; j++){
               if (s[i-1] == w[j-1]) {
                  dp[i][j] = dp[i-1][j-1] + 1;
               } else {
                   dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
               } 
            }
        }
        return dp[n][n];
    }
};
