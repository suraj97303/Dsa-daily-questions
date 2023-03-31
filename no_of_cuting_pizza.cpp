class Solution {

public:
const int mod= 1e9+7;
  bool check(vector<string>&pizza,int i,int j,int rows,int cols){
      for(int row= i;row<=rows;row++){
          for(int col= j;col<=cols;col++){

              if(pizza[row][col]=='A') return true;
          }
      }
      return false;
  }
    int helper(vector<string>&pizza,int i,int j,int k,int rows,int cols,vector<vector<vector<int>>>&dp){
        if(k==0){
            if(check(pizza,i,j,rows-1,cols-1)){
                return 1;
            }
            return 0;
        }
       if(dp[i][j][k]!=-1) return dp[i][j][k];
       // horizontal cut;
       long long horizontal=0;
       bool flag=false;
         for(int row = i;row<rows-1;row++){
              
         if(flag || check(pizza,i,j,row,cols-1)){
             horizontal=( horizontal+ helper(pizza,row+1,j,k-1,rows,cols,dp))%mod;
             flag= true;
         }

         }
     // vertical cut;
     long long vertical=0;
     flag=false;
     for(int col= j;col<cols-1;col++){
         if(flag|| check(pizza,i,j,rows-1,col)){
             vertical=(vertical+ helper(pizza,i,col+1,k-1,rows,cols,dp))%mod;
             flag=true;
         }
     }


return dp[i][j][k]=((horizontal + vertical)%mod);
         
    }
    int ways(vector<string>& pizza, int k) {
         int rows= pizza.size();
         int cols= pizza[0].size();
        vector<vector<vector<int>>>dp(rows,vector<vector<int>>(cols,vector<int>(k,-1)));
          return helper(pizza,0,0,k-1,rows,cols,dp);
    }
};
