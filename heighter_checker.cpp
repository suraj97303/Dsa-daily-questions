class Solution {
public :
         int heightChecker(vector<int>&heights) {
        int count=0;
        vector<int>ans(heights);
        sort(ans.begin(),ans.end());
        for(int i=0;i<heights.size();i++)
            if(heights[i]!=ans[i]) count++;
        return count;
    
    }
};
